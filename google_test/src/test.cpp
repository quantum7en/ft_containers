// -*- C++ -*-
//===--------------------------- vector test ------------------------------===//
//
//                     Created by Aaron Berry on 4/13/21.
//
//===----------------------------------------------------------------------===//

#include <vector>
#include <list>
#include "gtest/gtest.h"
#include "includes/A.h"
//Your include
#include "../ft_vector.hpp"

/*
 * RUN TEST:
 * make && ./vector_test
 * To run only some unit tests you could use --gtest_filter=vector.[name_test]
 * NAME TESTS:
 * default_constructor
 * constructor_with_no_elements
 * constructor_with_default_elements
 * constructor_with_value
 * copy_constructor
 * move_constructor
 * initializer_list_constructor
 * iterator_constructor
 * assign_value
 * assign_range
 * assign_initializer_list
 * at
 * back
 * front
 * begin
 * capacity
 * clear
 * data
 * emplace
 * empty
 * end
 * erase
 * erase_range
 * insert_pos
 * insert_rvalue
 * insert_initializer_list
 * insert_pos_with_value
 * insert_range
 * max_size
 * operator_assignment
 * pop_back
 * push_back
 * push_back_move
 * rbegin
 * rend
 * reserve
 * resize
 * resize_value
 * shrink_to_fit
 * size
 * swap
 * emplace_back
 * iter
 * const_iter
 * relational_operators
 *
 * LEAKS TEST:
 * To check for leaks:
 * 1) Delete -fsanitize=address -g in CMakeLists.txt [!]
 * 2) run make && valgrind --leak-check=full ./vector_test
 */

// Your namespace
#define my ft
#define vector_ Vector
// STD namespace
#define stl std
#define _vector vector

template<class T>
void compare_vector(my::vector_<T> &my_vector, stl::_vector<T> &stl_vector) {
  EXPECT_EQ(my_vector.size(), stl_vector.size())
            << "\nVectors x and y are of unequal length\n";
  EXPECT_EQ(my_vector.capacity(), stl_vector.capacity())
                << "\nVectors x and y are of unequal capacity\n";
  size_t size = stl_vector.size();
  for (size_t i = 0; i < size; ++i) {
    EXPECT_EQ(my_vector[i], stl_vector[i])
              << "Vectors x and y differ at index " << i;
  }
}

template<class T>
void init_vector(my::vector_<T> &my_vector, stl::_vector<T> &stl_vector) {
  size_t size = stl_vector.size();
  for (size_t i = 0; i < size; ++i) {
    my_vector[i] = stl_vector[i] = i;
  }
}

template<class T, class Alloc>
void compare_vector(my::vector_<T, Alloc> &my_vector,
                  stl::_vector<T, Alloc> &stl_vector) {
  EXPECT_EQ(my_vector.size(), stl_vector.size())
                << "\nVectors x and y are of unequal length\n";
  EXPECT_EQ(my_vector.capacity(), stl_vector.capacity())
                << "\nVectors x and y are of unequal capacity\n";
  size_t size = stl_vector.size();
  for (size_t i = 0; i < size; ++i) {
    EXPECT_EQ(my_vector[i], stl_vector[i])
              << "Vectors x and y differ at index " << i;
  }
}
// =============================================================================
// ============================= Constructor ===================================
// =============================================================================

// --------------------Default constructor creates no elements.-----------------
template<class T>
void default_constructor() {
  stl::_vector<T> stl_vector;
  my::vector_<T> my_vector;
  compare_vector<T>(my_vector, stl_vector);
}

TEST(vector, default_constructor) {
  default_constructor<A>();
  default_constructor<int>();
  default_constructor<const int>();
  default_constructor<bool>();
  default_constructor<std::string>();
}
// -----------------------------------------------------------------------------

// ---------------------Creates a vector with no elements.----------------------
template<class T>
void constructor_with_no_elements() {
  stl::_vector<T> stl_vector(std::allocator<T>);
  my::vector_<T> my_vector(std::allocator<T>);
}

TEST(vector, constructor_with_no_elements) {
  constructor_with_no_elements<A>();
  constructor_with_no_elements<int>();
  constructor_with_no_elements<const int>();
  constructor_with_no_elements<bool>();
  constructor_with_no_elements<std::string>();
}
// -----------------------------------------------------------------------------

// --------------Creates a vector with default constructed elements.------------
template<class T>
void constructor_with_default_elements(int count) {
  stl::_vector<T> stl_vector(count);
  my::vector_<T> my_vector(count);
  compare_vector<T>(my_vector, stl_vector);
}

TEST(vector, constructor_with_default_elements) {
  constructor_with_default_elements<std::string>(10);
  constructor_with_default_elements<A>(13);
  constructor_with_default_elements<int>(100);
  constructor_with_default_elements<const int>(12);
  try {
    my::vector_<int> my_vector(-10);
  } catch (std::exception const &ex) {
    EXPECT_EQ(ex.what(),std::string("vector"));
  }
  try {
    stl::_vector<int> stl_vector(10);
    my::vector_<int> my_vector(stl_vector.max_size() + 2);
  } catch (std::exception const &ex) {
    EXPECT_EQ(ex.what(),std::string("vector"));
  }
}
// -----------------------------------------------------------------------------

// // -------------Creates a vector with copies of an exemplar element.------------
// template<class T>
// void constructor_with_value(int count,const T value) {
//   {
//     stl::_vector<T> stl_vector(count, value);
//     my::vector_<T> my_vector(count, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<T, std::allocator<T>> stl_vector(count, value);
//     my::vector_<T, std::allocator<T>> my_vector(count, value);
//     compare_vector<T, std::allocator<T>>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<T, std::allocator<T>> stl_vector(count, value);
//     my::vector_<T, std::allocator<T>> my_vector(count, value);
//     compare_vector<T, std::allocator<T>>(my_vector, stl_vector);
//   }
// }

// TEST(vector, constructor_with_value) {
//   constructor_with_value<A>(13, 4);
//   constructor_with_value<int>(13, 4);
//   constructor_with_value<const int>(12, 2);
//   constructor_with_value<std::string>(10, std::string("vector"));
//   try {
//     my::vector_<int> my_vector(-10, 1);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
// }
// // -----------------------------------------------------------------------------

// // ---------------------------Vector copy constructor.--------------------------
// template<class T>
// void copy_constructor(int count, const T value) {
//   stl::_vector<T> stl_vector(count, value);
//   stl::_vector<T> stl_vector_copy(stl_vector);
//   my::vector_<T> my_vector(count, value);
//   my::vector_<T> my_vector_copy(my_vector);
//   compare_vector<T>(my_vector, stl_vector);
//   compare_vector<T>(my_vector_copy, stl_vector_copy);
// }

// TEST(vector, copy_constructor) {
//   copy_constructor<A>(13000, 4);
//   copy_constructor<int>(13, 4);
//   copy_constructor<const int>(12, 2);
//   copy_constructor<std::string>(10, std::string("vector"));
// }
// // -----------------------------------------------------------------------------

// // ----------------------Vector move constructor.-------------------------------
// template<class T>
// void move_constructor(int count, const T value) {
//   stl::_vector<T> stl_vector(count, value);
//   stl::_vector<T> stl_vector_copy(std::move(stl_vector));
//   my::vector_<T> my_vector(count, value);
//   my::vector_<T> my_vector_copy(std::move(my_vector));
//   compare_vector<T>(my_vector, stl_vector);
//   compare_vector<T>(my_vector_copy, stl_vector_copy);
// }

// TEST(vector, move_constructor) {
//   move_constructor<A>(13000, 4);
//   move_constructor<int>(13, 4);
//   move_constructor<const int>(12, 2);
//   move_constructor<std::string>(10, std::string("vector"));
// }
// // -----------------------------------------------------------------------------

// // -------------------Builds a vector from an initializer list.-----------------
// TEST(vector, initializer_list_constructor) {
//   {
//     stl::_vector<int> stl_vector = {1, 2, 43, 4};
//     my::vector_<int> my_vector = {1, 2, 43, 4};
//     compare_vector<int>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<const int> stl_vector = {1, 2, 43, 4};
//     my::vector_<const int> my_vector = {1, 2, 43, 4};
//     compare_vector<const int>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<std::string> stl_vector = {"h", "e", "l", "l", "o"};
//     my::vector_<std::string> my_vector = {"h", "e", "l", "l", "o"};
//     compare_vector<std::string>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<A> stl_vector = {A(1), A(2)};
//     my::vector_<A> my_vector = {A(1), A(2)};
//     compare_vector<A>(my_vector, stl_vector);
//   }
// }
// // -----------------------------------------------------------------------------

// // ---Create a vector consisting of copies of the elements from [first,last-----
// template<class T>
// void iterator_constructor(int count, const T value) {
//   stl::_vector<T> stl_vector(count, value);
//   my::vector_<T> my_vector(count, value);
//   init_vector(my_vector, stl_vector);
//   {
//     stl::_vector<T> stl_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//     my::vector_<T> my_vector_copy(my_vector.begin() + 2, my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//     compare_vector<T>(my_vector_copy, stl_vector_copy);
//   }
//   {
//     stl::_vector<T> stl_vector_copy(my_vector.begin() + 2, my_vector.end());
//     my::vector_<T> my_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//     compare_vector<T>(my_vector_copy, stl_vector_copy);
//   }
//   {
//     std::list<T> lst(count, value);
//     stl::_vector<T> stl_vector_copy(++lst.begin(), lst.end());
//     my::vector_<T> my_vector_copy(++lst.begin(), lst.end());
//     compare_vector<T>(my_vector_copy, stl_vector_copy);
//   }
// }

// TEST(vector, iterator_constructor) {
//   iterator_constructor<A>(13000, 4);
//   iterator_constructor<int>(13, 4);
//   {
//     stl::_vector<const int> stl_vector(12, 2);
//     my::vector_<const int> my_vector(12, 2);
//     {
//       stl::_vector<const int> stl_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//       my::vector_<const int> my_vector_copy(my_vector.begin() + 2, my_vector.end());
//       compare_vector<const int>(my_vector, stl_vector);
//       compare_vector<const int>(my_vector_copy, stl_vector_copy);
//     }
//     {
//       stl::_vector<const int> stl_vector_copy(my_vector.begin() + 2, my_vector.end());
//       my::vector_<const int> my_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//       compare_vector<const int>(my_vector, stl_vector);
//       compare_vector<const int>(my_vector_copy, stl_vector_copy);
//     }
//     {
//       std::list<const int> lst(12, 1);
//       stl::_vector<const int> stl_vector_copy(++lst.begin(), lst.end());
//       my::vector_<const int> my_vector_copy(++lst.begin(), lst.end());
//       compare_vector<const int>(my_vector_copy, stl_vector_copy);
//     }
//   }
//   {
//     stl::_vector<std::string> stl_vector(12);
//     my::vector_<std::string> my_vector(12);
//     for (int i = 0; i < 12; ++i) {
//       stl_vector[i] = my_vector[i] = i + '0';
//     }
//     init_vector(my_vector, stl_vector);
//     {
//       stl::_vector<std::string> stl_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//       my::vector_<std::string> my_vector_copy(my_vector.begin() + 2, my_vector.end());
//       compare_vector<std::string>(my_vector, stl_vector);
//       compare_vector<std::string>(my_vector_copy, stl_vector_copy);
//     }
//     {
//       stl::_vector<std::string> stl_vector_copy(my_vector.begin() + 2, my_vector.end());
//       my::vector_<std::string> my_vector_copy(stl_vector.begin() + 2, stl_vector.end());
//       compare_vector<std::string>(my_vector, stl_vector);
//       compare_vector<std::string>(my_vector_copy, stl_vector_copy);
//     }
//     {
//       std::list<std::string> lst(12, "vector");
//       stl::_vector<std::string> stl_vector_copy(++lst.begin(), lst.end());
//       my::vector_<std::string> my_vector_copy(++lst.begin(), lst.end());
//       compare_vector<std::string>(my_vector_copy, stl_vector_copy);
//     }
//   }
//   try {
//     my::vector_<int> my_vector(10, 1);
//     my::vector_<int> my_vector_copy(my_vector.end(), my_vector.begin());
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================================================================
// // =========================== Member Function =================================
// // =============================================================================

// // =============================== ASSIGN ======================================

// // -----------------------Assigns a given value to a vector.--------------------
// template<class T>
// void assign_value(int count, const T value) {
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(0);
//     my::vector_<T> my_vector(0);
//     init_vector(my_vector, stl_vector);
//     compare_vector<T>(my_vector, stl_vector);
//     stl_vector.assign(count, value);
//     my_vector.assign(count, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(2);
//     my::vector_<T> my_vector(2);
//     init_vector(my_vector, stl_vector);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     compare_vector<T>(my_vector, stl_vector);
//     stl_vector.assign(count, value);
//     my_vector.assign(count, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, assign_value) {
//   {
//     my::vector_<int> my_vector(10, 1);
//     stl::_vector<int> stl_vector(10, 1);
//     try {
//       my_vector.assign(-1, 1);
//     } catch (std::exception const &ex) {
//       EXPECT_EQ(ex.what(), std::string("vector"));
//     }
//     try {
//       stl_vector.assign(-1, 1);
//     } catch (std::exception const &ex) {
//       EXPECT_EQ(ex.what(), std::string("vector"));
//     }
//   }
//   assign_value<A>(13000, 4);
//   assign_value<int>(13, 4);
//   assign_value<char>(12, 2);
//   // capacity < count
//   {
//     stl::_vector<std::string> stl_vector(0);
//     my::vector_<std::string> my_vector(0);
//     init_vector(my_vector, stl_vector);
//     compare_vector<std::string>(my_vector, stl_vector);
//     stl_vector.assign(10, std::string("vector"));
//     my_vector.assign(10, std::string("vector"));
//     compare_vector<std::string>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<std::string> stl_vector(2);
//     my::vector_<std::string> my_vector(2);
//     init_vector(my_vector, stl_vector);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     compare_vector<std::string>(my_vector, stl_vector);
//     stl_vector.assign(10, std::string("vector"));
//     my_vector.assign(10, std::string("vector"));
//     compare_vector<std::string>(my_vector, stl_vector);
//   }
// }
// -----------------------------------------------------------------------------

// // ----------------------Assigns a range to a vector.---------------------------
// template<class T>
// void assign_range_test(my::vector_<T> &my_vector, stl::_vector<T> &stl_vector,
//                        const T value) {
//   // self
//   {
//     stl_vector.assign(stl_vector.begin() + 2, stl_vector.end());
//     my_vector.assign(my_vector.begin() + 2, my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // other vector
//   {
//     stl::_vector<T> copy_stl(stl_vector);
//     my::vector_<T> copy_my(my_vector);
//     compare_vector<T>(my_vector, stl_vector);
//     compare_vector<T>(copy_my, copy_stl);
//     stl_vector.assign(copy_stl.begin() + 2, copy_stl.end());
//     my_vector.assign(copy_stl.begin() + 2, copy_stl.end());
//     compare_vector<T>(my_vector, stl_vector);
//     stl_vector.assign(copy_my.begin() + 2, copy_my.end());
//     my_vector.assign(copy_my.begin() + 2, copy_my.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // list
//   {
//     std::list<T> lst(10, value);
//     stl_vector.assign(++lst.begin(), lst.end());
//     my_vector.assign(++lst.begin(), lst.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // all self
//   {
//     stl_vector.assign(stl_vector.begin(), stl_vector.end());
//     my_vector.assign(my_vector.begin(), my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // first==last
//   {
//     stl_vector.assign(stl_vector.begin(), stl_vector.begin());
//     my_vector.assign(my_vector.end(), my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   {
//     stl_vector.assign(stl_vector.rbegin(), stl_vector.rend());
//     my_vector.assign(my_vector.rbegin(), my_vector.rend());
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// template<class T, typename InputIterator>
// void assign_range_ex(const T value, InputIterator first, InputIterator last) {
//   my::vector_<T> my_vector(10, value);
//   stl::_vector<T> stl_vector(10, value);
//   try {
//     my_vector.assign(first, last);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   try {
//     stl_vector.assign(first, last);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   compare_vector<T>(my_vector, stl_vector);
// }

// template<class T>
// void assign_range(const T value) {
//   // ex test
//   {
//     stl::_vector<T> stl_vector(100);
//     my::vector_<T> my_vector(100);
//     init_vector(my_vector, stl_vector);
//     assign_range_ex(value, stl_vector.rbegin(), stl_vector.rend());
//     assign_range_ex(value, stl_vector.begin(), stl_vector.end());
//     assign_range_ex(value, stl_vector.rend(), stl_vector.rbegin());
//     assign_range_ex(value, stl_vector.end(), stl_vector.begin());
//     assign_range_ex(value, my_vector.rbegin(), my_vector.rend());
//     assign_range_ex(value, my_vector.begin(), my_vector.end());
//     assign_range_ex(value, my_vector.rend(), my_vector.rbegin());
//     assign_range_ex(value, my_vector.end(), my_vector.begin());
//   }
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5);
//     my::vector_<T> my_vector(5);
//     init_vector(my_vector, stl_vector);
//     assign_range_test<T>(my_vector, stl_vector, value);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(20);
//     my::vector_<T> my_vector(20);
//     init_vector(my_vector, stl_vector);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     assign_range_test<T>(my_vector, stl_vector, value);
//   }
// }

// TEST(vector, assign_range) {
//   assign_range<A>(4);
//   assign_range<int>(4);
//   assign_range<char>(2);
// }
// // -----------------------------------------------------------------------------

// // --------------------Assigns an initializer list to a vector.-----------------
// template<class T>
// void assign_initializer_list(const T value, std::initializer_list<T> l) {
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5, value);
//     my::vector_<T> my_vector(5, value);
//     stl_vector.assign(l);
//     my_vector.assign(l);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(20, value);
//     my::vector_<T> my_vector(20, value);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     stl_vector.assign(l);
//     my_vector.assign(l);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, assign_initializer_list) {
//   assign_initializer_list<A>(4, {A(1), A(2)});
//   assign_initializer_list<int>(4, {1, 2});
//   assign_initializer_list<char>(2, {1, 2});
//   assign_initializer_list<std::string>(std::string("vector"), {"a", "b"});
// }
// // -----------------------------------------------------------------------------

// // ================================ AT =========================================

// // --------------Provides access to the data contained in the vector.-----------
// template<class T>
// void at(int count, const T value, int index) {
//   stl::_vector<T> stl_vector(count, value);
//   my::vector_<T> my_vector(count, value);
//   EXPECT_EQ(my_vector.at(index), stl_vector.at(index))
//             << "Vectors x and y differ at index " << index;
// }

// TEST(vector, at) {
//   at<const A>(4, 2, 2);
//   at<int>(4, 3, 1);
//   at<char>(2, 4, 0);
//   at<std::string>(3 ,std::string("vector"), 1);
//   try {
//     my::vector_<int> my_vector(10, 1);
//     my_vector.at(92929292);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== BACK ========================================

// // -----Returns a reference to the data at the last element of the vector.------
// TEST(vector, back) {
//   {
//     stl::_vector<int> stl_vector(6);
//     my::vector_<int> my_vector(6);
//     for (stl::_vector<int>::size_type i = 0; i < 6; ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < 6; ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(stl_vector.back(), my_vector.back())
//               << "Vectors x and y differ in back";
//   }
//   {
//     stl::_vector<A> stl_vector(6);
//     my::vector_<A> my_vector(6);
//     for (stl::_vector<A>::size_type i = 0; i < 6; ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < 6; ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(stl_vector.back(), my_vector.back())
//               << "Vectors x and y differ in back";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     stl_vector.back();
//     my_vector.back();
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== FRONT =======================================

// // -----Returns a reference to the data at the first element of the vector.-----
// TEST(vector, front) {
//   {
//     stl::_vector<int> stl_vector(6);
//     my::vector_<int> my_vector(6);
//     for (stl::_vector<int>::size_type i = 0; i < 6; ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < 6; ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(stl_vector.front(), my_vector.front())
//               << "Vectors x and y differ in front";
//   }
//   {
//     stl::_vector<A> stl_vector(6);
//     my::vector_<A> my_vector(6);
//     for (stl::_vector<A>::size_type i = 0; i < 6; ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < 6; ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(stl_vector.front(), my_vector.front())
//               << "Vectors x and y differ in front";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     stl_vector.front();
//     my_vector.front();
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== BEGIN =======================================

// // Returns a iterator that points to the first element in the vector.
// // Iteration is done in ordinary element order.

// TEST(vector, begin) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     for (stl::_vector<int>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(*stl_vector.begin(), *my_vector.begin())
//               << "Vectors x and y differ in begin";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     for (stl::_vector<A>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(*stl_vector.begin(), *my_vector.begin())
//               << "Vectors x and y differ in begin";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     stl_vector.begin();
//     my_vector.begin();
//   }
// }
// // -----------------------------------------------------------------------------

// // ============================= CAPACITY ======================================

// // -----------------------------------------------------------------------------
// TEST(vector, capacity) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     EXPECT_EQ(stl_vector.capacity(), my_vector.capacity())
//               << "Vectors x and y are of unequal capacity";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     EXPECT_EQ(stl_vector.capacity(), my_vector.capacity())
//               << "Vectors x and y are of unequal capacity";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     EXPECT_EQ(stl_vector.capacity(), my_vector.capacity())
//               << "Vectors x and y are of unequal capacity";
//   }
// }
// // -----------------------------------------------------------------------------

// // ============================== CLEAR ========================================

// // Erases all the elements. Note that this function only erases the elements,
// // and that if the elements themselves are pointers,
// // the pointed-to memory is not touched in any way.
// // Managing the pointer is the user's responsibility.
// template<class T>
// void clear(int count, const T value) {
//   stl::_vector<T> stl_vector(count, value);
//   my::vector_<T> my_vector(count, value);
//   compare_vector<T>(my_vector, stl_vector);
//   stl_vector.clear();
//   my_vector.clear();
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, clear) {
//   clear<A>(13000, 4);
//   clear<int>(13, 4);
//   clear<char>(0, 4);
//   clear<const int>(12, 2);
//   clear<std::string>(10, std::string("vector"));
// }
// // -----------------------------------------------------------------------------

// // ============================== DATA =========================================

// // Returns a pointer such that [data(), data() + size()) is a valid range.
// // For a non-empty vector, data() == &front().
// template<class T>
// void data(int count, const T value) {
//   my::vector_<T> my_vector(count, value);
//   EXPECT_EQ(my_vector.data(), &my_vector.front());
// }

// TEST(vector, data) {
//   data<A>(13000, 4);
//   data<int>(13, 4);
//   data<char>(1, 4);
//   data<const int>(12, 2);
//   data<std::string>(10, std::string("vector"));
//   //empty vector
//   my::vector_<int> my_vector;
//   stl::_vector<int> stl_vector;
//   EXPECT_EQ(my_vector.data(), stl_vector.data());
// }
// // -----------------------------------------------------------------------------

// // ============================= EMPLACE =======================================

// // This function will insert an object of type T constructed
// // with T(std::forward<Args>(args)...) before the specified location.
// template<class T, typename... Args>
// void emplace(const T value, Args&&... args) {
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5);
//     my::vector_<T> my_vector(5);
//     init_vector(my_vector, stl_vector);
//     stl_vector.emplace(stl_vector.begin() + 1, std::forward<Args>(args) ...);
//     my_vector.emplace(my_vector.begin() + 1, std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//     stl_vector.emplace(stl_vector.begin() + 1, value);
//     my_vector.emplace(my_vector.begin() + 1, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(200);
//     stl_vector.reserve(1000);
//     my::vector_<T> my_vector(200);
//     my_vector.reserve(1000);
//     init_vector(my_vector, stl_vector);
//     stl_vector.emplace(stl_vector.end() - 2, std::forward<Args>(args) ...);
//     my_vector.emplace(my_vector.end() - 2, std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, emplace) {
//   {
//     A two(2);
//     A three_0(3);
//     A three_1(3);
//     // emplace
//     emplace<A, int>(4, 1);
//     // emplace with A&
//     emplace<A>(4, two);
//     EXPECT_EQ(2, two.GetCount());
//     // emplace with A&&
//     {
//       stl::_vector<A> stl_vector(20);
//       my::vector_<A> my_vector(20);
//       compare_vector<A>(my_vector, stl_vector);
//       stl_vector.emplace(stl_vector.end(), std::move(three_0));
//       my_vector.emplace(my_vector.end(), std::move(three_1));
//       compare_vector<A>(my_vector, stl_vector);
//       EXPECT_EQ(three_0, three_1);
//     }
//     // self
//     {
//       stl::_vector<int> stl_vector(5);
//       my::vector_<int> my_vector(5);
//       compare_vector<int>(my_vector, stl_vector);
//       stl_vector.emplace(stl_vector.end(), stl_vector[2]);
//       my_vector.emplace(my_vector.end(), my_vector[2]);
//       compare_vector<int>(my_vector, stl_vector);
//     }
//   }
//   auto a = A(1);
//   emplace<A>(4, a);
//   emplace<int>(4, 2);
//   emplace<char>(4, 'c');
//   emplace<std::string>(std::string("vector"), "vec");
// }
// // -----------------------------------------------------------------------------

// // ============================== EMPTY ========================================

// // ------------------Returns true if the vector is empty.-----------------------
// TEST(vector, empty) {
//   // non-empty
//   {
//     stl::_vector<A> stl_vector(20);
//     my::vector_<A> my_vector(20);
//     EXPECT_EQ(stl_vector.empty(), my_vector.empty());
//   }
//   // empty
//   {
//     stl::_vector<int> stl_vector(0, 1);
//     my::vector_<int> my_vector(0, 1);
//     EXPECT_EQ(stl_vector.empty(), my_vector.empty());
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== END =========================================

// // -----------------------------------------------------------------------------
// TEST(vector, end) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     for (stl::_vector<int>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(*(stl_vector.end() - 1), *(my_vector.end() - 1))
//               << "Vectors x and y differ in end";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     for (stl::_vector<A>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(*(stl_vector.end() - 1), *(my_vector.end() - 1))
//               << "Vectors x and y differ in end";
//   }
//   {
//     my::vector_<A> my_vector;
//     EXPECT_EQ(my_vector.end().base(), my_vector.begin().base())
//               << "end != begin()";
//   }
// }
// // -----------------------------------------------------------------------------

// // ============================== ERASE ========================================

// // ----------------------Remove element at given position.----------------------
// template<class T>
// void erase(int count) {
//   stl::_vector<T> stl_vector(count);
//   my::vector_<T> my_vector(count);
//   init_vector(my_vector, stl_vector);
//   compare_vector<T>(my_vector, stl_vector);
//   {
//     stl_vector.erase(stl_vector.begin() + 1);
//     my_vector.erase(my_vector.begin() + 1);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   {
//     stl_vector.erase(stl_vector.end() - 1);
//     my_vector.erase(my_vector.end() - 1);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, erase) {
//   erase<A>(13000);
//   erase<int>(13);
//   erase<char>(2);
//   erase<std::string>(10);
// }
// // -----------------------------------------------------------------------------

// // ------------------------Remove a range of elements.--------------------------
// template<class T>
// void erase_range(int count) {
//   stl::_vector<T> stl_vector(count);
//   my::vector_<T> my_vector(count);
//   init_vector(my_vector, stl_vector);
//   compare_vector<T>(my_vector, stl_vector);
//   {
//     EXPECT_EQ(*stl_vector.erase(stl_vector.begin() + 1, stl_vector.end() - 1),
//               *my_vector.erase(my_vector.begin() + 1, my_vector.end() - 1));
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   {
//     EXPECT_EQ(*stl_vector.erase(stl_vector.begin(), stl_vector.begin()),
//               *my_vector.erase(my_vector.begin(), my_vector.begin()));
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, erase_range) {
//   erase_range<A>(13000);
//   erase_range<int>(13);
//   erase_range<char>(4);
//   erase_range<std::string>(10);
// }
// // -----------------------------------------------------------------------------

// // ============================== INSERT =======================================

// --------Inserts given value into vector before specified iterator.-----------
template<class T>
void insert_pos_test(my::vector_<T> &my_vector, stl::_vector<T> &stl_vector,
                       const T value) {
  // self
  {
    stl_vector.insert(stl_vector.begin() + 2, *(stl_vector.end() - 1));
    my_vector.insert(my_vector.begin() + 2, *(my_vector.end() - 1));
    compare_vector<T>(my_vector, stl_vector);
  }
  // other vector
  {
    stl_vector.insert(stl_vector.begin() + 1, *(my_vector.end() - 1));
    my_vector.insert(my_vector.begin() + 1, *(stl_vector.end() - 1));
    compare_vector<T>(my_vector, stl_vector);
  }
  // list
  {
    std::list<T> lst(10, value);
    stl_vector.insert(stl_vector.end(), *(--lst.end()));
    my_vector.insert(my_vector.end(), *(--lst.end()));
    compare_vector<T>(my_vector, stl_vector);
  }
  // value
  {
    std::list<T> lst(10, value);
    stl_vector.insert(stl_vector.end(), value);
    my_vector.insert(my_vector.end(), value);
    compare_vector<T>(my_vector, stl_vector);
  }
}

template<class T>
void insert_pos(const T value) {
  // capacity < count
  {
    stl::_vector<T> stl_vector(5);
    my::vector_<T> my_vector(5);
    init_vector(my_vector, stl_vector);
    insert_pos_test<T>(my_vector, stl_vector, value);
  }
  // capacity >= count
  {
    stl::_vector<T> stl_vector(20);
    my::vector_<T> my_vector(20);
    init_vector(my_vector, stl_vector);
    stl_vector.reserve(20000);
    my_vector.reserve(20000);
    insert_pos_test<T>(my_vector, stl_vector, value);
  }
}

TEST(vector, insert_pos) {
  insert_pos<A>(4);
  insert_pos<int>(4);
  insert_pos<char>(2);
  insert_pos<std::string>(std::string("vector"));
}
// -----------------------------------------------------------------------------

// // --------Inserts given rvalue into vector before specified iterator.----------

TEST(vector, insert_rvalue) {
    stl::_vector<A> stl_vector(20);
    my::vector_<A> my_vector(20);
    A two(2);
    A three_0(3);
    A three_1(3);
    // Insert
    stl_vector.insert(stl_vector.end(), 1);
    my_vector.insert(my_vector.end(), 1);
    // Insert with A&
    stl_vector.insert(stl_vector.end(), two);
    my_vector.insert(my_vector.end(), two);
    EXPECT_EQ(2, two.GetCount());
    // emplace with A&&
    {
      stl_vector.insert(stl_vector.end(), std::move(three_0));
      my_vector.insert(my_vector.end(), std::move(three_1));
      compare_vector<A>(my_vector, stl_vector);
    }
}
// // -----------------------------------------------------------------------------

// // -----------------Inserts an initializer_list into the vector.----------------
// TEST(vector, insert_initializer_list) {
//   // capacity < count
//   {
//     stl::_vector<int> stl_vector;
//     my::vector_<int> my_vector;
//     stl_vector.insert(stl_vector.end(), {1, 2, 43, 4});
//     my_vector.insert(my_vector.end(), {1, 2, 43, 4});
//     compare_vector<int>(my_vector, stl_vector);
//     stl_vector.insert(stl_vector.end(), {});
//     my_vector.insert(my_vector.end(), {});
//     compare_vector<int>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<std::string> stl_vector;
//     my::vector_<std::string> my_vector;
//     stl_vector.insert(stl_vector.begin(), {"h", "e", "l", "l", "o"});
//     my_vector.insert(my_vector.begin(), {"h", "e", "l", "l", "o"});
//     compare_vector<std::string>(my_vector, stl_vector);
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     stl_vector.insert(stl_vector.begin(), {A(1), A(2)});
//     my_vector.insert(my_vector.begin(), {A(1), A(2)});
//     compare_vector<A>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<int> stl_vector(200);
//     my::vector_<int> my_vector(200);
//     init_vector(my_vector, stl_vector);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     stl_vector.insert(stl_vector.begin() + 1, {1, 2, 43, 4});
//     my_vector.insert(my_vector.begin() + 1, {1, 2, 43, 4});
//     compare_vector<int>(my_vector, stl_vector);
//     stl_vector.insert(stl_vector.end(), {1});
//     my_vector.insert(my_vector.end(), {1});
//     compare_vector<int>(my_vector, stl_vector);
//   }
// }
// // -----------------------------------------------------------------------------

// // ----------Inserts a number of copies of given data into the vector.----------
// template<class T>
// void insert_pos_test_with_count(my::vector_<T> &my_vector,
//                                 stl::_vector<T> &stl_vector,
//                                 int &count,
//                                 const T value) {
//   // self
//   {
//     stl_vector.insert(stl_vector.begin() + 2, count, *(stl_vector.end() - 1));
//     my_vector.insert(my_vector.begin() + 2, count, *(my_vector.end() - 1));
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // other vector
//   {
//     stl_vector.insert(stl_vector.begin() + 1, count, *(my_vector.end() - 1));
//     my_vector.insert(my_vector.begin() + 1, count, *(stl_vector.end() - 1));
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // list
//   {
//     std::list<T> lst(10, value);
//     stl_vector.insert(stl_vector.end(), count, *(--lst.end()));
//     my_vector.insert(my_vector.end(), count, *(--lst.end()));
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // value
//   {
//     std::list<T> lst(10, value);
//     stl_vector.insert(stl_vector.end(), count, value);
//     my_vector.insert(my_vector.end(), count, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// template<class T>
// void insert_pos_with_count_ex(const T value,
//                               typename stl::_vector<T>::size_type count) {
//   my::vector_<T> my_vector(10);
//   stl::_vector<T> stl_vector(10);
//   init_vector(my_vector, stl_vector);
//   try {
//     stl_vector.insert(stl_vector.end(), count, value);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   try {
//     my_vector.insert(my_vector.end(), count, value);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   compare_vector<T>(my_vector, stl_vector);
// }

// template<class T>
// void insert_pos_with_count(const T value, int count) {
//   // exception
//   {
//     stl::_vector<T> stl_vector(5, value);
//     insert_pos_with_count_ex(value, -20000);
//     insert_pos_with_count_ex(value, stl_vector.max_size() + 2);
//   }
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5);
//     my::vector_<T> my_vector(5);
//     init_vector(my_vector, stl_vector);
//     insert_pos_test_with_count<T>(my_vector, stl_vector, count, value);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(20);
//     stl_vector.reserve(30000);
//     my::vector_<T> my_vector(20);
//     my_vector.reserve(30000);
//     init_vector(my_vector, stl_vector);
//     insert_pos_test_with_count<T>(my_vector, stl_vector, count, value);
//   }
// }

// TEST(vector, insert_pos_with_value) {
//   insert_pos_with_count<A>(4, 200);
//   insert_pos_with_count<int>(4, 200);
//   insert_pos_with_count<char>(0, 10);
//   insert_pos_with_count<std::string>(std::string("vector"), 0);
// }
// // -----------------------------------------------------------------------------

// // ---------------------Inserts a range into the vector.------------------------

// template<class T>
// void insert_range_test(my::vector_<T> &my_vector, stl::_vector<T> &stl_vector,
//                        const T value) {
//   // self
//   {
//     stl_vector.insert(stl_vector.begin() + 1, stl_vector.begin() + 2, stl_vector.end());
//     my_vector.insert(my_vector.begin() + 1, my_vector.begin() + 2, my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // other vector
//   {
//     stl::_vector<T> copy_stl(stl_vector);
//     my::vector_<T> copy_my(my_vector);
//     compare_vector<T>(my_vector, stl_vector);
//     compare_vector<T>(copy_my, copy_stl);
//     stl_vector.insert(stl_vector.end(), copy_stl.begin() + 2, copy_stl.end());
//     my_vector.insert(my_vector.end(), copy_stl.begin() + 2, copy_stl.end());
//     compare_vector<T>(my_vector, stl_vector);
//     stl_vector.insert(stl_vector.end(), copy_my.begin() + 2, copy_my.end());
//     my_vector.insert(my_vector.end(), copy_my.begin() + 2, copy_my.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // list
//   {
//     std::list<T> lst(10, value);
//     stl_vector.insert(stl_vector.end() - 3, ++lst.begin(), lst.end());
//     my_vector.insert(my_vector.end() - 3, ++lst.begin(), lst.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // all self
//   {
//     stl_vector.insert(stl_vector.begin(), stl_vector.begin(), stl_vector.end());
//     my_vector.insert(my_vector.begin(), my_vector.begin(), my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // first==last
//   {
//     stl_vector.insert(stl_vector.begin() + 1, stl_vector.begin(), stl_vector.begin());
//     my_vector.insert(my_vector.begin() + 1, my_vector.end(), my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   {
//     stl_vector.insert(stl_vector.end(), stl_vector.rbegin(), stl_vector.rend());
//     my_vector.insert(my_vector.end(), my_vector.rbegin(), my_vector.rend());
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// template<class T, typename InputIterator>
// void insert_range_ex(const T value, InputIterator first, InputIterator last) {
//   my::vector_<T> my_vector(10, value);
//   stl::_vector<T> stl_vector(10, value);
//   init_vector(my_vector, stl_vector);
//   try {
//     my_vector.insert(my_vector.end(), first, last);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   try {
//     stl_vector.insert(stl_vector.end(), first, last);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(), std::string("vector"));
//   }
//   compare_vector<T>(my_vector, stl_vector);
// }

// template<class T>
// void insert_range(const T value) {
//   // ex test
//   {
//     stl::_vector<T> stl_vector(100);
//     my::vector_<T> my_vector(100);
//     init_vector(my_vector, stl_vector);
//     insert_range_ex(value, stl_vector.rbegin(), stl_vector.rend());
//     insert_range_ex(value, stl_vector.begin(), stl_vector.end());
//     insert_range_ex(value, stl_vector.rend(), stl_vector.rbegin());
//     insert_range_ex(value, stl_vector.end(), stl_vector.begin());
//     insert_range_ex(value, my_vector.rbegin(), my_vector.rend());
//     insert_range_ex(value, my_vector.begin(), my_vector.end());
//     insert_range_ex(value, my_vector.rend(), my_vector.rbegin());
//     insert_range_ex(value, my_vector.end(), my_vector.begin());
//   }
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5);
//     my::vector_<T> my_vector(5);
//     init_vector(my_vector, stl_vector);
//     insert_range_test<T>(my_vector, stl_vector, value);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(10);
//     stl_vector.reserve(20000);
//     my::vector_<T> my_vector(10);
//     my_vector.reserve(20000);
//     init_vector(my_vector, stl_vector);
//     stl_vector.insert(stl_vector.end(), stl_vector.begin() + 2, stl_vector.end());
//     my_vector.insert(my_vector.end(), my_vector.begin() + 2, my_vector.end());
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, insert_range) {
//   insert_range<A>(4);
//   insert_range<int>(4);
//   insert_range<char>(2);
//   insert_range<std::string>(std::string("vector"));
// }
// // -----------------------------------------------------------------------------

// // ============================= MAX_SIZE ======================================

// // -------------Returns the size() of the largest possible vector.--------------
template<class T>
void max_size() {
  stl::_vector<T> stl_vector;
  my::vector_<T> my_vector;
  EXPECT_EQ(stl_vector.max_size(), my_vector.max_size());
}

TEST(vector, max_size) {
  max_size<A>();
  max_size<int>();
  max_size<char>();
  max_size<std::string>();
}
// // -----------------------------------------------------------------------------

// // ============================ OPERATOR= ======================================

// // -----------------------------------------------------------------------------
// template<class T>
// void operator_assignment(const T value_1, const T value_2) {
//   // Vector assignment operator.
//   // capacity >= other capacity
//   {
//     stl::_vector<T> stl_vector_1(10, value_1);
//     my::vector_<T> my_vector_1(10, value_1);
//     stl::_vector<T> stl_vector_2(15, value_2);
//     my::vector_<T> my_vector_2(15, value_2);
//     stl_vector_2 = stl_vector_1;
//     my_vector_2 = my_vector_1;
//     compare_vector<T>(my_vector_2, stl_vector_2);
//     compare_vector<T>(my_vector_1, stl_vector_1);
//   }
//   // capacity < other capacity
//   {
//     stl::_vector<T> stl_vector_1(20, value_1);
//     my::vector_<T> my_vector_1(20, value_1);
//     stl::_vector<T> stl_vector_2(15, value_2);
//     my::vector_<T> my_vector_2(15, value_2);
//     stl_vector_2 = stl_vector_1;
//     my_vector_2 = my_vector_1;
//     compare_vector<T>(my_vector_2, stl_vector_2);
//     compare_vector<T>(my_vector_1, stl_vector_1);
//   }
//   // Vector move assignment operator.
//   {
//     stl::_vector<T> stl_vector_1(10, value_1);
//     my::vector_<T> my_vector_1(10, value_1);
//     stl::_vector<T> stl_vector_2(15, value_2);
//     my::vector_<T> my_vector_2(15, value_2);
//     stl_vector_2 = std::move(stl_vector_1);
//     my_vector_2 = std::move(my_vector_1);
//     compare_vector<T>(my_vector_2, stl_vector_2);
//     compare_vector<T>(my_vector_1, stl_vector_1);
//   }
//   //Vector list assignment operator.
//   {
//     stl::_vector<T> stl_vector_1(10, value_1);
//     my::vector_<T> my_vector_1(10, value_1);
//     stl_vector_1 = {value_2, value_2};
//     my_vector_1 = {value_2, value_2};
//     compare_vector<T>(my_vector_1, stl_vector_1);
//     stl_vector_1 = {};
//     my_vector_1 = {};
//     compare_vector<T>(my_vector_1, stl_vector_1);
//   }
// }

// TEST(vector, operator_assignment) {
//   operator_assignment<A>(1, -1);
//   operator_assignment<int>(2, -2);
//   operator_assignment<char>(3, 2);
//   operator_assignment<std::string>(std::string("42"), std::string("21"));
// }
// // -----------------------------------------------------------------------------

// // ============================ POP_BACK =======================================

// // ------------------------Removes last element.--------------------------------
// template<class T>
// void pop_back(int size, const T value) {
//   stl::_vector<T> stl_vector(size, value);
//   my::vector_<T> my_vector(size, value);
//   int i = 0;
//   for (; i < size / 2; ++i) {
//     stl_vector.pop_back();
//     my_vector.pop_back();
//   }
//   compare_vector<T>(my_vector, stl_vector);
//   for (; i < size; ++i) {
//     stl_vector.pop_back();
//     my_vector.pop_back();
//   }
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, pop_back) {
//   pop_back<A>(100, 2);
//   pop_back<int>(200, 2);
//   pop_back<char>(30, 2);
//   pop_back<std::string>(1, std::string("42"));
// }
// // -----------------------------------------------------------------------------

// // ============================ PUSH_BACK ======================================

// // -----------------Add data to the end of the vector.--------------------------
// template<class T>
// void push_back(int size, const T value) {
//   stl::_vector<T> stl_vector;
//   my::vector_<T> my_vector;
//   int i = 0;
//   for (; i < size / 2; ++i) {
//     stl_vector.push_back(value);
//     my_vector.push_back(value);
//   }
//   compare_vector<T>(my_vector, stl_vector);
//   for (; i < size; ++i) {
//     stl_vector.push_back(value);
//     my_vector.push_back(value);
//   }
//   compare_vector<T>(my_vector, stl_vector);
//   //self
//   for (int j = 0; j < size; ++j) {
//     stl_vector.push_back(stl_vector[j]);
//     my_vector.push_back(my_vector[j]);
//   }
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, push_back) {
//   push_back<A>(100, 2);
//   push_back<int>(200, 2);
//   push_back<char>(30, 2);
//   push_back<std::string>(1, std::string("42"));
// }
// // -----------------------------------------------------------------------------

// // -----------------Move data to the end of the vector.-------------------------
// template<class T, typename... Args>
// void push_back_move(const T value, Args&&... args) {
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5, value);
//     my::vector_<T> my_vector(5, value);
//     stl_vector.push_back(std::forward<Args>(args) ...);
//     my_vector.push_back(std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(20, value);
//     my::vector_<T> my_vector(20, value);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     stl_vector.push_back(std::forward<Args>(args) ...);
//     my_vector.push_back(std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, push_back_move) {
//   {
//     A two(2);
//     A three_0(3);
//     A three_1(3);

//     // push_back
//     push_back_move<A, int>(4, 1);

//     // push_back with A&
//     push_back_move<A>(4, two);
//     EXPECT_EQ(2, two.GetCount());

//     // push_back with A&&
//     {
//       stl::_vector<A> stl_vector(20);
//       my::vector_<A> my_vector(20);
//       stl_vector.push_back(std::move(three_0));
//       my_vector.push_back(std::move(three_1));
//       compare_vector<A>(my_vector, stl_vector);
//       EXPECT_EQ(three_0, three_1);
//       stl_vector.push_back(std::move(stl_vector[2]));
//       my_vector.push_back(std::move(my_vector[2]));
//       compare_vector<A>(my_vector, stl_vector);
//     }
//     // self
//     {
//       stl::_vector<int> stl_vector(5, 1);
//       my::vector_<int> my_vector(5, 1);
//       stl_vector.push_back(stl_vector[2]);
//       my_vector.push_back(my_vector[2]);
//       compare_vector<int>(my_vector, stl_vector);
//     }
//   }
//   auto a = A(1);
//   push_back_move<A>(4, a);
//   push_back_move<int>(4, 2);
//   push_back_move<char>(4, 'c');
//   push_back_move<std::string>(std::string("vector"), "vec");
// }
// // -----------------------------------------------------------------------------

// // =============================== RBEGIN ======================================

// // Returns a reverse iterator that points to the first element in the vector.
// // Iteration is done in ordinary element order.

// TEST(vector, rbegin) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     for (stl::_vector<int>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(*stl_vector.rbegin(), *my_vector.rbegin())
//               << "Vectors x and y differ in rbegin";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     for (stl::_vector<A>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(*stl_vector.rbegin(), *my_vector.rbegin())
//               << "Vectors x and y differ in rbegin";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     stl_vector.rbegin();
//     my_vector.rbegin();
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== REND ========================================

// // Returns a reverse iterator that points to one before
// // the first element in the vector. Iteration is done in reverse element order.
// TEST(vector, rend) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     for (stl::_vector<int>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = static_cast<int>(i);
//     }
//     for (my::vector_<int>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = static_cast<int>(i);
//     }
//     EXPECT_EQ(*(stl_vector.rend() - 1), *(my_vector.rend() - 1))
//               << "Vectors x and y differ in rend";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     for (stl::_vector<A>::size_type i = 0; i < stl_vector.size(); ++i) {
//       stl_vector[i] = A(static_cast<int>(i));
//     }
//     for (my::vector_<A>::size_type i = 0; i < my_vector.size(); ++i) {
//       my_vector[i] = A(static_cast<int>(i));
//     }
//     EXPECT_EQ(*(stl_vector.rend() - 1), *(my_vector.rend() - 1))
//               << "Vectors x and y differ in end";
//   }
//   {
//     my::vector_<A> my_vector;
//     EXPECT_EQ(my_vector.rend().base(), my_vector.rbegin().base())
//               << "rend != rbegin()";
//   }
// }
// // -----------------------------------------------------------------------------

// // ============================= RESERVE =======================================

// // ----Attempt to preallocate enough memory for specified number of elements.---
// template<class T>
// void reserve(int size) {
//   stl::_vector<T> stl_vector(size);
//   my::vector_<T> my_vector(size);
//   init_vector(my_vector, stl_vector);
//   // reserve n > capacity
//   stl_vector.reserve(1000);
//   my_vector.reserve(1000);
//   compare_vector<T>(my_vector, stl_vector);
//   // reserve n < capacity
//   stl_vector.reserve(1);
//   my_vector.reserve(1);
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, reserve) {
//   stl::_vector<int> stl_vector(2, 0);
//   my::vector_<int> my_vector(2, 0);
//   init_vector(my_vector, stl_vector);
//   // reserve n < 0
//   try {
//     stl_vector.reserve(-1);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string(
//         "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"));
//   }
//   try {
//     my_vector.reserve(-1);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string(
//         "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"));
//   }
//   compare_vector<int>(my_vector, stl_vector);
//   reserve<A>(100);
//   reserve<int>(200);
//   reserve<char>(30);
//   reserve<std::string>(1);
// }
// // -----------------------------------------------------------------------------

// // ============================= RESIZE ========================================

// // -------Resizes the vector to the specified number of elements.---------------
// template<class T>
// void resize(int size) {
//   stl::_vector<T> stl_vector(size);
//   my::vector_<T> my_vector(size);
//   init_vector(my_vector, stl_vector);
//   // resize n > size
//   stl_vector.resize(1000);
//   my_vector.resize(1000);
//   compare_vector<T>(my_vector, stl_vector);
//   // resize n < size
//   stl_vector.resize(1);
//   my_vector.resize(1);
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, resize) {
//   stl::_vector<int> stl_vector(2);
//   my::vector_<int> my_vector(2);
//   init_vector(my_vector, stl_vector);
//   // resize n < 0
//   try {
//     stl_vector.resize(-1);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
//   try {
//     my_vector.resize(-1);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
//   compare_vector<int>(my_vector, stl_vector);
//   resize<A>(100);
//   resize<int>(200);
//   resize<char>(30);
//   resize<std::string>(1);
// }
// // -----------------------------------------------------------------------------

// // ---Resizes the vector with value to the specified number of elements.--------
// template<class T>
// void resize_value(int size, const T value) {
//   stl::_vector<T> stl_vector(size);
//   my::vector_<T> my_vector(size);
//   init_vector(my_vector, stl_vector);
//   // value
//   {
//     // resize n > size
//     stl_vector.resize(1010, value);
//     my_vector.resize(1010, value);
//     compare_vector<T>(my_vector, stl_vector);
//     // resize n < size
//     stl_vector.resize(1, value);
//     my_vector.resize(1, value);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // self
//   {
//     // resize n > size
//     stl_vector.resize(1020, stl_vector[0]);
//     my_vector.resize(1020, my_vector[0]);
//     compare_vector<T>(my_vector, stl_vector);
//     // resize n < size
//     stl_vector.resize(10, stl_vector[0]);
//     my_vector.resize(10, my_vector[0]);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, resize_value) {
//   stl::_vector<int> stl_vector(2, 0);
//   my::vector_<int> my_vector(2, 0);
//   // resize n < 0
//   try {
//     stl_vector.resize(-1, 2);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
//   try {
//     my_vector.resize(-1, 2);
//   } catch (std::exception const &ex) {
//     EXPECT_EQ(ex.what(),std::string("vector"));
//   }
//   compare_vector<int>(my_vector, stl_vector);
//   resize_value<A>(100, 2);
//   resize_value<int>(200, 2);
//   resize_value<char>(30, 2);
//   resize_value<std::string>(1, std::string("42"));
// }
// // -----------------------------------------------------------------------------

// // =========================== SHRINK_TO_FIT ===================================

// // --------A non-binding request to reduce capacity() to size().----------------
// template<class T>
// void shrink_to_fit(int size, const T value) {
//   stl::_vector<T> stl_vector(size, value);
//   my::vector_<T> my_vector(size, value);
//   stl_vector.reserve(1000);
//   my_vector.reserve(1000);
//   compare_vector<T>(my_vector, stl_vector);
//   stl_vector.shrink_to_fit();
//   my_vector.shrink_to_fit();
//   compare_vector<T>(my_vector, stl_vector);
// }

// TEST(vector, shrink_to_fit) {
//   shrink_to_fit<A>(100, 2);
//   shrink_to_fit<int>(200, 2);
//   shrink_to_fit<char>(30, 2);
//   shrink_to_fit<std::string>(1, std::string("42"));
// }
// // -----------------------------------------------------------------------------

// // =============================== SIZE ========================================

// // --------------Returns the number of elements in the vector.------------------
// TEST(vector, size) {
//   {
//     stl::_vector<int> stl_vector(10);
//     my::vector_<int> my_vector(10);
//     EXPECT_EQ(stl_vector.size(), my_vector.size())
//               << "Vectors x and y are of unequal size";
//   }
//   {
//     stl::_vector<A> stl_vector(1);
//     my::vector_<A> my_vector(1);
//     EXPECT_EQ(stl_vector.size(), my_vector.size())
//               << "Vectors x and y are of unequal size";
//   }
//   {
//     stl::_vector<A> stl_vector;
//     my::vector_<A> my_vector;
//     EXPECT_EQ(stl_vector.size(), my_vector.size())
//               << "Vectors x and y are of unequal size";
//   }
// }
// // -----------------------------------------------------------------------------

// // =============================== SWAP ========================================

// // ----------------------Swaps data with another vector.------------------------
// TEST(vector, swap) {
//   {
//     stl::_vector<int> stl_vector_1(10, 0);
//     stl::_vector<int> stl_vector_2(10, 1);
//     my::vector_<int> my_vector_1(10, 0);
//     my::vector_<int> my_vector_2(10, 1);
//     my_vector_1.swap(my_vector_2);
//     stl_vector_1.swap(stl_vector_2);
//     compare_vector<int>(my_vector_1, stl_vector_1);
//     compare_vector<int>(my_vector_2, stl_vector_2);
//   }
//   {
//     stl::_vector<int> stl_vector_1;
//     stl::_vector<int> stl_vector_2(10, 1);
//     my::vector_<int> my_vector_1;
//     my::vector_<int> my_vector_2(10, 1);
//     my_vector_1.swap(my_vector_2);
//     stl_vector_1.swap(stl_vector_2);
//     compare_vector<int>(my_vector_1, stl_vector_1);
//     compare_vector<int>(my_vector_2, stl_vector_2);
//   }
// }
// // -----------------------------------------------------------------------------

// // =========================== EMPLACE BACK ====================================

// // -----------------Move data to the end of the vector.-------------------------
// template<class T, typename... Args>
// void emplace_back(const T value, Args&&... args) {
//   // capacity < count
//   {
//     stl::_vector<T> stl_vector(5, value);
//     my::vector_<T> my_vector(5, value);
//     init_vector(my_vector, stl_vector);
//     stl_vector.emplace_back(std::forward<Args>(args) ...);
//     my_vector.emplace_back(std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//   }
//   // capacity >= count
//   {
//     stl::_vector<T> stl_vector(20);
//     my::vector_<T> my_vector(20);
//     init_vector(my_vector, stl_vector);
//     stl_vector.reserve(20000);
//     my_vector.reserve(20000);
//     stl_vector.emplace_back(std::forward<Args>(args) ...);
//     my_vector.emplace_back(std::forward<Args>(args) ...);
//     compare_vector<T>(my_vector, stl_vector);
//   }
// }

// TEST(vector, emplace_back) {
//   {
//     A two(2);
//     A three_0(3);
//     A three_1(3);

//     // emplace_back
//     emplace_back<A, int>(4, 1);

//     // emplace_back with A&
//     emplace_back<A>(4, two);
//     EXPECT_EQ(2, two.GetCount());

//     // emplace_back with A&&
//     {
//       stl::_vector<A> stl_vector(20);
//       my::vector_<A> my_vector(20);
//       stl_vector.emplace_back(std::move(three_0));
//       my_vector.emplace_back(std::move(three_1));
//       compare_vector<A>(my_vector, stl_vector);
//       EXPECT_EQ(three_0, three_1);
//       stl_vector.emplace_back(std::move(stl_vector[2]));
//       my_vector.emplace_back(std::move(my_vector[2]));
//       compare_vector<A>(my_vector, stl_vector);
//     }
//     // self
//     {
//       stl::_vector<int> stl_vector(5, 1);
//       my::vector_<int> my_vector(5, 1);
//       stl_vector.emplace_back(stl_vector[2]);
//       my_vector.emplace_back(my_vector[2]);
//       compare_vector<int>(my_vector, stl_vector);
//     }
//   }
//   auto a = A(1);
//   emplace_back<A>(4, a);
//   emplace_back<int>(4, 2);
//   emplace_back<char>(4, 'c');
//   emplace_back<std::string>(std::string("vector"), "vec");
// }
// // -----------------------------------------------------------------------------

// // =============================================================================
// // ============================== ITERATORS ====================================
// // =============================================================================

// // -----------------------------------------------------------------------------

// // void const_iterators(const typename stl::_vector<int>::const_iterator &std_iter_1,
// //                      const typename my::vector_<int>::const_iterator &my_iter_1) {
// //   auto my_iter_2 = my_iter_1;
// //   auto std_iter_2 = std_iter_1;
// //   EXPECT_EQ((my_iter_1 > my_iter_2), (std_iter_2 > std_iter_1));
// //   EXPECT_EQ((my_iter_1 >= my_iter_2), (std_iter_2 >= std_iter_1));
// //   EXPECT_EQ((my_iter_1 < my_iter_2), (std_iter_2 < std_iter_1));
// //   EXPECT_EQ((my_iter_1 <= my_iter_2), (std_iter_2 <= std_iter_1));
// //   EXPECT_EQ((my_iter_1 == my_iter_2), (std_iter_2 == std_iter_1));
// // }

// // void reverse_const_iterators(
// //            const typename stl::_vector<int>::const_reverse_iterator &std_iter_1,
// //            const typename my::vector_<int>::const_reverse_iterator &my_iter_1) {
// //   auto my_iter_2 = my_iter_1;
// //   auto std_iter_2 = std_iter_1;
// //   EXPECT_EQ((my_iter_1 > my_iter_2), (std_iter_2 > std_iter_1));
// //   EXPECT_EQ((my_iter_1 >= my_iter_2), (std_iter_2 >= std_iter_1));
// //   EXPECT_EQ((my_iter_1 < my_iter_2), (std_iter_2 < std_iter_1));
// //   EXPECT_EQ((my_iter_1 <= my_iter_2), (std_iter_2 <= std_iter_1));
// //   EXPECT_EQ((my_iter_1 == my_iter_2), (std_iter_2 == std_iter_1));
// // }

// void iterators(const typename stl::_vector<int>::iterator &std_iter_1,
//                      const typename my::vector_<int>::iterator &my_iter_1) {
//   auto my_iter_2 = my_iter_1;
//   auto std_iter_2 = std_iter_1;
//   EXPECT_EQ((my_iter_1 > my_iter_2), (std_iter_2 > std_iter_1));
//   EXPECT_EQ((my_iter_1 >= my_iter_2), (std_iter_2 >= std_iter_1));
//   EXPECT_EQ((my_iter_1 < my_iter_2), (std_iter_2 < std_iter_1));
//   EXPECT_EQ((my_iter_1 <= my_iter_2), (std_iter_2 <= std_iter_1));
//   EXPECT_EQ((my_iter_1 == my_iter_2), (std_iter_2 == std_iter_1));
// }

// void reverse_iterators(
//     const typename stl::_vector<int>::reverse_iterator &std_iter_1,
//     const typename my::vector_<int>::reverse_iterator &my_iter_1) {
//   auto my_iter_2 = my_iter_1;
//   auto std_iter_2 = std_iter_1;
//   EXPECT_EQ((my_iter_1 > my_iter_2), (std_iter_2 > std_iter_1));
//   EXPECT_EQ((my_iter_1 >= my_iter_2), (std_iter_2 >= std_iter_1));
//   EXPECT_EQ((my_iter_1 < my_iter_2), (std_iter_2 < std_iter_1));
//   EXPECT_EQ((my_iter_1 <= my_iter_2), (std_iter_2 <= std_iter_1));
//   EXPECT_EQ((my_iter_1 == my_iter_2), (std_iter_2 == std_iter_1));
// }

// TEST(vector, iter) {
//   int size = 10;
//   stl::_vector<A> stl_vector(size, 0);
//   my::vector_<A> my_vector(size, 0);
//   for (int i = 0; i < size; ++i) {
//     stl_vector[0] = my_vector[0] = A(i);
//   }

//   EXPECT_EQ(*stl_vector.begin(), *my_vector.begin());
//   EXPECT_EQ(*(stl_vector.end() - 1), *(my_vector.end() - 1));
//   EXPECT_EQ(*stl_vector.rbegin(), *my_vector.rbegin());
//   EXPECT_EQ(*(stl_vector.rend() - 1), *(my_vector.rend() - 1));
//   // // const iter
//   // {
//   //   stl::_vector<const int> cstl_vector(size, 0);
//   //   my::vector_<const int> cmy_vector(size, 0);
//   //   const_iterators(cstl_vector.begin(), cmy_vector.begin());
//   // }
//   // // const reverse iter
//   // {
//   //   stl::_vector<const int> cstl_vector(size, 0);
//   //   my::vector_<const int> cmy_vector(size, 0);
//   //   reverse_const_iterators(cstl_vector.rbegin(), cmy_vector.rbegin());
//   // }
//   // // iter
//   // {
//   //   stl::_vector<int> cstl_vector(size, 0);
//   //   my::vector_<int> cmy_vector(size, 0);
//   //   const_iterators(cstl_vector.begin(), cmy_vector.begin());
//   // }
//   // reverse iter
//   {
//     stl::_vector<int> cstl_vector(size, 0);
//     my::vector_<int> cmy_vector(size, 0);
//     reverse_iterators(cstl_vector.rbegin(), cmy_vector.rbegin());
//   }
// }

// // -----------------------------------------------------------------------------

// // -----------------------------------------------------------------------------
// TEST(vector, const_iter) {
//   int size = 10;
//   stl::_vector<A> stl_vector(size, 0);
//   my::vector_<A> my_vector(size, 0);
//   for (int i = 0; i < size; ++i) {
//     stl_vector[0] = my_vector[0] = A(i);
//   }
//   EXPECT_EQ(*stl_vector.begin(), *my_vector.begin());
//   EXPECT_EQ(*(stl_vector.end() - 1), *(my_vector.end() - 1));
//   EXPECT_EQ(*stl_vector.rbegin(), *my_vector.rbegin());
//   EXPECT_EQ(*(stl_vector.rend() - 1), *(my_vector.rend() - 1));
//   // // const iter
//   // {
//   //   stl::_vector<int> cstl_vector(size, 0);
//   //   my::vector_<int> cmy_vector(size, 0);
//   //   const_iterators(cstl_vector.begin(), cmy_vector.begin());
//   // }
//   // // const reverse iter
//   // {
//   //   stl::_vector<int> cstl_vector(size, 0);
//   //   my::vector_<int> cmy_vector(size, 0);
//   //   reverse_const_iterators(cstl_vector.rbegin(), cmy_vector.rbegin());
//   // }
// }
// // -----------------------------------------------------------------------------

// // =============================================================================
// // ======================== RELATIONAL OPERATORS ===============================
// // =============================================================================

// // -----------------------------------------------------------------------------
// TEST(vector, relational_operators) {
//   stl::_vector<int> stl_vector_full(100);
//   stl::_vector<int> stl_vector_empty;
//   stl::_vector<int> stl_vector_cap;
//   stl::_vector<int> stl_vector_small(10);
//   my::vector_<int> my_vector_full(100);
//   my::vector_<int> my_vector_empty;
//   my::vector_<int> my_vector_cap;
//   my::vector_<int> my_vector_small(10);
//   EXPECT_EQ((stl_vector_empty == stl_vector_empty),
//             (my_vector_empty == my_vector_empty));
//   EXPECT_EQ((stl_vector_empty == stl_vector_empty),
//             (my_vector_empty == my_vector_empty));
//   EXPECT_EQ((stl_vector_small == stl_vector_small),
//             (my_vector_small == my_vector_small));
//   EXPECT_EQ((stl_vector_full == stl_vector_full),
//             (my_vector_full == my_vector_full));
//   EXPECT_EQ((stl_vector_empty != stl_vector_empty),
//             (my_vector_empty != my_vector_empty));
//   EXPECT_EQ((stl_vector_empty != stl_vector_empty),
//             (my_vector_empty != my_vector_empty));
//   EXPECT_EQ((stl_vector_small != stl_vector_small),
//             (my_vector_small != my_vector_small));
//   EXPECT_EQ((stl_vector_full != stl_vector_full),
//             (my_vector_full != my_vector_full));
//   EXPECT_EQ((stl_vector_empty > stl_vector_empty),
//             (my_vector_empty > my_vector_empty));
//   EXPECT_EQ((stl_vector_empty > stl_vector_empty),
//             (my_vector_empty > my_vector_empty));
//   EXPECT_EQ((stl_vector_small > stl_vector_full),
//             (my_vector_small > my_vector_full));
//   EXPECT_EQ((stl_vector_full > stl_vector_small),
//             (my_vector_full > my_vector_small));
//   EXPECT_EQ((stl_vector_empty < stl_vector_empty),
//             (my_vector_empty < my_vector_empty));
//   EXPECT_EQ((stl_vector_empty < stl_vector_empty),
//             (my_vector_empty < my_vector_empty));
//   EXPECT_EQ((stl_vector_small < stl_vector_full),
//             (my_vector_small < my_vector_full));
//   EXPECT_EQ((stl_vector_full < stl_vector_small),
//             (my_vector_full < my_vector_small));
//   EXPECT_EQ((stl_vector_empty >= stl_vector_empty),
//             (my_vector_empty >= my_vector_empty));
//   EXPECT_EQ((stl_vector_empty >= stl_vector_empty),
//             (my_vector_empty >= my_vector_empty));
//   EXPECT_EQ((stl_vector_small >= stl_vector_full),
//             (my_vector_small >= my_vector_full));
//   EXPECT_EQ((stl_vector_full >= stl_vector_small),
//             (my_vector_full >= my_vector_small));
//   EXPECT_EQ((stl_vector_empty <= stl_vector_empty),
//             (my_vector_empty <= my_vector_empty));
//   EXPECT_EQ((stl_vector_empty <= stl_vector_empty),
//             (my_vector_empty <= my_vector_empty));
//   EXPECT_EQ((stl_vector_small <= stl_vector_full),
//             (my_vector_small <= my_vector_full));
//   EXPECT_EQ((stl_vector_full <= stl_vector_small),
//             (my_vector_full <= my_vector_small));
// }
// // =============================================================================
// // =============================== FINISH ======================================
// // =============================================================================
