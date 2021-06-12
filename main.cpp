#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
#include "classes.hpp"
#include "ft_list.hpp"
#include "ft_reverse_iterator.hpp"
//#include "ft_map.hpp"
#include <map>

//#define lib ft
#define con List

#define lib ft
#define con Stack

#define DarkGreen "\033[32m"
#define Red "\033[31m"
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define RESET "\033[0m"

# define TEST_VAL(x)    printValues(x.begin(), x.end());
# define TEST_SIZE(x)   PRINT(CLR_GRN "#print values: " CLR_END << "Size: " << x.size());
# define TEST_HB(x)     PRINT(CLR_GRN "|" CLR_END << "Head: " << x.front() << " | " << x.back() << " :Back");
# define TEST_LIST      TEST_SIZE(test) TEST_HB(test)   TEST_VAL(test)
# define TEST(x)        TEST_SIZE(x)    TEST_HB(x)      TEST_VAL(x)
# define TEST_ITER(x,y) PRT_BLU(x) TEST_VAL(y)

# define PRINT(x)		std::cout<< x <<"\n";


class Test {
public:
	Test() : some_(0) {
		// std::cout << "Test created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	Test(int s) : some_(s) {
		// std::cout << "Test " << this->some_ << " created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	Test(Test const & x) : some_(x.some_) {
		// std::cout << "Copy Test " << this->some_ << " created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	~Test() {
		if (this->str_ != 0)
			free(this->str_);
		this->some_ = 0;
		this->str_  = 0;
		// std::cout << "Test deleted" << std::endl;
	}

	Test &operator=(Test const & x) {
		// std::cout << "Test operator =" << std::endl;
		if (this == &x)
			return (*this);
		this->str_ = (char*)malloc(10);
		this->some_ = x.some_;
		return (*this);
	}

	bool operator==(const Test & x) {
		return this->some_ == x.some_;
	}
	bool operator==(int & val) {
		return this->some_ == val;
	}
	int   some_;
	char* str_;

};

template < typename iterator >
void            printValues(iterator begin, iterator end)
{
	std::cout << YELLOW " \\" RESET "Tail -> ";
	while (begin != end)
		std::cout << *begin++ << " -> ";
	PRINT("Tail");
}

void ft_default_constructor_test() {
	std::cout << "\nstd_default_constructor\n" << std::endl;
	lib::con <Test> useless;

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;
}

void ft_n_val_constructor_test() {
	std::cout << "\nstd_n_val_constructor\n" << std::endl;
	lib::con <Test> useless(10, 8);

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;

	lib::con<Test>::iterator first = useless.begin() ;

	for (size_t i = 0; first != useless.end(); ++i, ++first) {
		if (i % 32 == 0 && i != 0)
			std::cout << std::endl;
		std::cout << first->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_iter_iter_constructor_test() {
	std::cout << "\nstd_iter_iter_constructor\n" << std::endl;
	lib::con<Test>           src(20);
	lib::con<Test>::iterator src_iter;
	size_t                    i = 0;

	for (src_iter = src.begin(); src_iter != src.end(); ++src_iter, ++i) {
		src_iter->some_ = i;
	}

	lib::con<Test> useless(src.begin(), src.end());
	lib::con<Test>::iterator first = useless.begin();

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;
	for (i = 0; first != useless.end(); ++i, ++first) {
		if (i % 32 == 0 && i != 0)
			std::cout << std::endl;
		std::cout << first->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_copy_constructor_test() {
	std::cout << "\nstd_copy_constructor\n" << std::endl;
	lib::con<Test>           src(20);
	lib::con<Test>::iterator src_iter;
	size_t                    i = 0;

	for (src_iter = src.begin(); src_iter != src.end(); ++src_iter, ++i) {
		src_iter->some_ = i;
	}

	lib::con<Test> useless(src);
	lib::con<Test>::iterator first = useless.begin();

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;
	for (i = 0; first != useless.end(); ++i, ++first) {
		if (i % 32 == 0 && i != 0)
			std::cout << std::endl;
		std::cout << first->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_constructors_capacity_test() {
	ft_default_constructor_test();
	ft_n_val_constructor_test();
	ft_iter_iter_constructor_test();
	ft_copy_constructor_test();
}

// =============================================================================

// Iterator ====================================================================

void ft_iterator_test() {
	std::cout << "\niterator_test()\n" << std::endl;
	lib::con<int>           mouse(10, 5);
	lib::con<int>           fat_mouse(1000, 9);
	lib::con<int>::iterator begin;
	lib::con<int>::iterator fat_end;

	begin    = mouse.begin();
	fat_end  = fat_mouse.end();

	std::cout << (begin++ == begin)     << std::endl;
	std::cout << (begin   == ++begin)   << std::endl;
	std::cout << (begin   == --fat_end) << std::endl;

	std::cout << (begin   != begin)     << std::endl;
	std::cout << (begin   != begin--)   << std::endl;
	std::cout << (--begin != begin)     << std::endl;
	std::cout << (begin   != --fat_end) << std::endl;

	std::cout << *begin << std::endl;
}

// =============================================================================

// Element access ==============================================================

void ft_element_access_test() {
	std::cout << "\nelement_access_test()\n" << std::endl;
	lib::con<int>           small_mouse(1);
	lib::con<int>           mouse(10);
	lib::con<int>::iterator iter;

	for (iter = small_mouse.begin(); iter != small_mouse.end(); ++iter) {
		*iter = 123;
	}
	std::cout << small_mouse.front() << std::endl;
	std::cout << small_mouse.back()  << std::endl;

	size_t i = 900;
	for (iter = mouse.begin(); iter != mouse.end(); ++iter) {
		*iter = i++;
	}

	std::cout << mouse.front() << std::endl;
	std::cout << mouse.back()  << std::endl;
}

// =============================================================================

// Modifiers ===================================================================

void ft_push_front_test() {
	std::cout << "\npush_front_test()\n" << std::endl;
	lib::con<int>           empty_mouse;
	lib::con<int>           small_mouse(1);
	lib::con<int>           mouse(10);
	lib::con<int>::iterator iter;
	size_t                  i = 0;

	// empty_mouse
	for (i = 0; i < 19 ; ++i) {
		empty_mouse.push_front(i + 50);
	}
	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	// small_mouse
	for (i = 0; i < 27 ; ++i) {
		small_mouse.push_front(i + 20);
	}
	std::cout << "empty() : " << small_mouse.empty() << std::endl;
	std::cout << "size    : " << small_mouse.size()  << std::endl;
	i = 0;
	for (iter = small_mouse.begin(); iter != small_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	// mouse
	for (i = 0; i < 27 ; ++i) {
		mouse.push_front(i + 900);
	}
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

void ft_pop_front_test() {
	std::cout << "\npop_front_test()\n" << std::endl;
	lib::con<Test>           small_mouse(1, 10);
	lib::con<Test>           mouse(18, 8);
	lib::con<Test>::iterator iter;
	size_t                   i;

	small_mouse.pop_front();
	std::cout << "empty() : " << small_mouse.empty() << std::endl;
	std::cout << "size    : " << small_mouse.size()  << std::endl;
	i = 0;
	for (iter = small_mouse.begin(); iter != small_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	i = 10;
	while (i--) {
		mouse.pop_front();
	}
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}


void ft_erase_iter_iter_test() {
	std::cout << "\nerase_iter_iter_test()\n" << std::endl;
	lib::con<Test>           small_mouse(1, 10);
	lib::con<Test>           mouse;
	lib::con<Test>::iterator iter;
	lib::con<Test>::iterator iter2;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}

	small_mouse.erase(small_mouse.begin(), small_mouse.end());
	std::cout << "empty() : " << small_mouse.empty() << std::endl;
	std::cout << "size    : " << small_mouse.size()  << std::endl;
	i = 0;
	for (iter = small_mouse.begin(); iter != small_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter  = mouse.begin();
	iter2 = mouse.begin();
	i = 3;
	while (i--) {
		++iter;
	}
	i = 6;
	while (i--) {
		++iter2;
	}
	mouse.erase(iter, iter2);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	mouse.erase(mouse.begin(), mouse.end());
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_swap_test() {
	std::cout << "\nswap_test()\n" << std::endl;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}
	mouse.swap(fat_mouse);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_resize_test() {
	std::cout << "\nresize_test()\n" << std::endl;
	std::list<Test>           mouse;
	std::list<Test>           fat_mouse;
	std::list<Test>::iterator iter;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.resize(50, 2);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	fat_mouse.resize(100, 8);
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_clear_test() {
	std::cout << "\nclear_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	empty_mouse.clear();
	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	mouse.clear();
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	fat_mouse.clear();
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_val_test() {
	std::cout << "\ninsert_iter_val_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	std::cout << empty_mouse.insert(empty_mouse.begin(), 7)->some_ << std::endl;

	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	std::cout << mouse.insert(iter, 7)->some_ << std::endl;
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = fat_mouse.end();
	std::cout << fat_mouse.insert(iter, 7)->some_ << std::endl;
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_n_val_test() {
	std::cout << "\ninsert_iter_val_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	empty_mouse.insert(empty_mouse.begin(), 2, 7);

	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	mouse.insert(iter, 10, 7);;
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = fat_mouse.end();
	fat_mouse.insert(iter, 7, 7);
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_iter_iter_test() {
	std::cout << "\ninsert_iter_iter_iter_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	lib::con<Test>::iterator iter2;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	empty_mouse.insert(empty_mouse.begin(), mouse.begin(), mouse.end());

	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	iter2 = mouse.end();
	iter2--;
	mouse.insert(iter, iter, iter2);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	iter2 = mouse.end();
	iter2--;

	fat_mouse.insert(fat_mouse.end(), iter, iter2);
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_assign_iter_iter_test() {
	std::cout << "\nassign_iter_iter_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	lib::con<Test>::iterator iter2;
	size_t                    i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	empty_mouse.assign(mouse.begin(), mouse.end());

	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = fat_mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	iter2 = fat_mouse.end();
	iter2--;
	mouse.assign(iter, iter2);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	i = 5;
	while (i--) {
		++iter;
	}
	iter2 = mouse.end();
	iter2--;

	fat_mouse.assign(mouse.begin(), mouse.end());
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
	//std::cout <<"HERE " <<std::endl;
}

void ft_assign_n_val_test() {
	std::cout << "\nassign_iter_iter_test()\n" << std::endl;
	lib::con<Test>           empty_mouse;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator iter;
	size_t                   i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	i = 0;
	for (i = 0; i < 1000; ++i) {
		fat_mouse.push_back(i + 100);
	}

	empty_mouse.assign(7, 10);

	std::cout << "empty() : " << empty_mouse.empty() << std::endl;
	std::cout << "size    : " << empty_mouse.size()  << std::endl;
	i = 0;
	for (iter = empty_mouse.begin(); iter != empty_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(3, 99);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	fat_mouse.assign(21, 1);
	std::cout << "empty() : " << fat_mouse.empty() << std::endl;
	std::cout << "size    : " << fat_mouse.size()  << std::endl;
	i = 0;
	for (iter = fat_mouse.begin(); iter != fat_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
	//std::cout <<"HERE " <<std::endl;
}

// =============================================================================

// Operations ==================================================================

//void ft_merge_x_test() {
//	std::cout << "\nmerge_x_test()\n" << std::endl;
//	lib::con<int> mouse;
//	mouse.push_back(10);
//	mouse.push_back(20);
//	mouse.push_back(60);
//	mouse.push_back(90);
//	mouse.push_back(200);
//
//	lib::con<int> copy_mouse(mouse);
//
//	lib::con<int> fat_mouse;
//	fat_mouse.push_back(5);
//	fat_mouse.push_back(25);
//	fat_mouse.push_back(45);
//	fat_mouse.push_back(75);
//	fat_mouse.push_back(85);
//	fat_mouse.push_back(105);
//	fat_mouse.push_back(115);
//	fat_mouse.push_back(205);
//
//	mouse.merge(fat_mouse);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	mouse.merge(copy_mouse);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	mouse.merge(mouse);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//}
//
//
//bool compare(int a, int b) {
//	return a < b;
//}
//
//void ft_merge_x_compare_test() {
//	std::cout << "\nmerge_x_test()\n" << std::endl;
//	lib::con<int> mouse;
//	mouse.push_back(10);
//	mouse.push_back(20);
//	mouse.push_back(60);
//	mouse.push_back(90);
//	mouse.push_back(200);
//
//	lib::con<int> copy_mouse(mouse);
//
//	lib::con<int> fat_mouse;
//	fat_mouse.push_back(5);
//	fat_mouse.push_back(25);
//	fat_mouse.push_back(45);
//	fat_mouse.push_back(75);
//	fat_mouse.push_back(85);
//	fat_mouse.push_back(105);
//	fat_mouse.push_back(115);
//	fat_mouse.push_back(205);
//
//	mouse.merge(fat_mouse, compare);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	mouse.merge(copy_mouse, compare);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	mouse.merge(mouse, compare);
//
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//}
//
//void ft_sort_test() {
//	std::cout << "sort_test" << std::endl;
//	lib::con<int> mouse;
//	mouse.push_back(7);
//	mouse.push_back(3);
//	mouse.push_back(5);
//	mouse.push_back(13);
//	mouse.push_back(9);
//	mouse.push_back(6);
//
//	mouse.sort();
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << mouse.size()  << std::endl;
//	std::cout << "empty:" << mouse.empty() << std::endl;
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	lib::con<int> empty;
//
//	empty.sort();
//	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	lib::con<int> reverse;
//	reverse.push_back(10);
//	reverse.push_back(9);
//	reverse.push_back(8);
//	reverse.push_back(7);
//	reverse.push_back(6);
//	reverse.push_back(5);
//
//	reverse.sort();
//	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//}
//
//bool comp(int a, int b) {
//	return a < b;
//}
//
//void ft_sort_comp_test() {
//	std::cout << "sort_comp_test" << std::endl;
//	lib::con<int> mouse;
//	mouse.push_back(7);
//	mouse.push_back(3);
//	mouse.push_back(5);
//	mouse.push_back(13);
//	mouse.push_back(9);
//	mouse.push_back(6);
//
//	mouse.sort(comp);
//	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	lib::con<int> empty;
//
//	empty.sort(comp);
//	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	lib::con<int> reverse;
//	reverse.push_back(10);
//	reverse.push_back(9);
//	reverse.push_back(8);
//	reverse.push_back(7);
//	reverse.push_back(6);
//	reverse.push_back(5);
//
//	reverse.sort(comp);
//	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//
//	reverse.reverse();
//	reverse.sort(comp);
//	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//}
//
//void ft_reverse_test() {
//	lib::con<int> empty;
//	lib::con<int> reverse;
//	reverse.push_back(10);
//	reverse.push_back(9);
//	reverse.push_back(8);
//	reverse.push_back(7);
//	reverse.push_back(6);
//	reverse.push_back(5);
//
//	reverse.reverse();
//	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << reverse.size()  << std::endl;
//	std::cout << "empty:" << reverse.empty() << std::endl;
//
//	empty.reverse();
//	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
//		std::cout << *it << " ";
//	}
//	std::cout << std::endl;
//	std::cout << "mouse:" << std::endl;
//	std::cout << "size:"  << empty.size()  << std::endl;
//	std::cout << "empty:" << empty.empty() << std::endl;
//}

void ft_splice_pos_lst_test() {
	lib::con<Test>           empty;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator it;
	for (int i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}
	it = mouse.begin();
	++it; ++it;

	mouse.splice(it, fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.begin(), fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.end(), fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	mouse.splice(mouse.begin(), empty);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_splice_pos_lst_i_test() {
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator it;
	for (int i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}
	it = mouse.begin();
	++it; ++it;

	mouse.splice(it, fat_mouse, fat_mouse.begin());

	std::cout << "SPLICE" << std::endl;
	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.begin(), fat_mouse, fat_mouse.begin());

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.end(), fat_mouse, fat_mouse.begin());

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_splice_pos_lst_first_last_test() {
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator it;
	lib::con<Test>::iterator it2;
	for (int i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}
	it = mouse.begin();
	++it; ++it;
	it2 = fat_mouse.end();
	--it2; --it2;

	mouse.splice(it, fat_mouse, fat_mouse.begin(), it2);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.begin(), fat_mouse, fat_mouse.begin(), fat_mouse.end());

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}
	it2 = fat_mouse.end();
	--it2; --it2;

	mouse.splice(mouse.end(), fat_mouse, fat_mouse.begin(), it2);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
}

void ft_remove_val_test() {
	lib::con<int>           empty;
	lib::con<int>           mouse;
	lib::con<int>           fat_mouse;
	lib::con<int>::iterator it;
	lib::con<int>::iterator it2;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			mouse.push_back(1000);
		} else {
			mouse.push_back(i + 10);
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 1) {
			fat_mouse.push_back(1000);
		} else {
			fat_mouse.push_back(i + 10);
		}
	}

	empty.remove(10);

	std::cout << "empty:" << std::endl;
	std::cout << "size:"  << empty.size()  << std::endl;
	std::cout << "empty:" << empty.empty() << std::endl;
	for (it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}

	mouse.remove(1000);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	fat_mouse.remove(1000);

	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

bool pred(const int & val) {
	return val == 1000;
}

void ft_remove_if_test() {

	std::cout <<"remove if" <<std::endl;
	lib::con<int>           empty;
	lib::con<int>           mouse;
	lib::con<int>           fat_mouse;
	lib::con<int>::iterator it;
	lib::con<int>::iterator it2;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			mouse.push_back(1000);
		} else {
			mouse.push_back(i + 10);
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 1) {
			fat_mouse.push_back(1000);
		} else {
			fat_mouse.push_back(i + 10);
		}
	}

	empty.remove_if(pred);

	std::cout << "empty:" << std::endl;
	std::cout << "size:"  << empty.size()  << std::endl;
	std::cout << "empty:" << empty.empty() << std::endl;
	for (it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}

	mouse.remove_if(pred);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	fat_mouse.remove_if(pred);

	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void ft_unique_test() {
	lib::con<int>           empty;
	lib::con<int>           mouse;
	lib::con<int>           fat_mouse;
	lib::con<int>::iterator it;
	lib::con<int>::iterator it2;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			mouse.push_back(1000);
			mouse.push_back(1000);
		} else {
			mouse.push_back(i + 10);
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 1) {
			fat_mouse.push_back(1000);
			fat_mouse.push_back(1000);
		} else {
			fat_mouse.push_back(i + 10);
		}
	}

	empty.unique();

	std::cout << "empty:" << std::endl;
	std::cout << "size:"  << empty.size()  << std::endl;
	std::cout << "empty:" << empty.empty() << std::endl;
	for (it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << "HERE Unique" << std::endl;
	mouse.unique();

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	fat_mouse.unique();

	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

bool pred2(int & a, int & b) {
	return (a == b);
}

void ft_unique_pred_test() {
	lib::con<int>           empty;
	lib::con<int>           mouse;
	lib::con<int>           fat_mouse;
	lib::con<int>::iterator it;
	lib::con<int>::iterator it2;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			mouse.push_back(1000);
			mouse.push_back(1000);
		} else {
			mouse.push_back(i + 10);
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (i % 2 == 1) {
			fat_mouse.push_back(1000);
			fat_mouse.push_back(1000);
		} else {
			fat_mouse.push_back(i + 10);
		}
	}

	empty.unique(pred2);

	std::cout << "empty:" << std::endl;
	std::cout << "size:"  << empty.size()  << std::endl;
	std::cout << "empty:" << empty.empty() << std::endl;
	for (it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}

	mouse.unique(pred2);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	fat_mouse.unique(pred2);

	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

void ft_erase_position_test() {
	std::cout << "\nerase_position_test()\n" << std::endl;
	lib::con<Test>           small_mouse(1, 10);
	lib::con<Test>           mouse;
	lib::con<Test>::iterator iter;
	size_t                   i;

	for (i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}

	small_mouse.erase(small_mouse.begin());
	std::cout << "empty() : " << small_mouse.empty() << std::endl;
	std::cout << "size    : " << small_mouse.size()  << std::endl;
	i = 0;
	for (iter = small_mouse.begin(); iter != small_mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.begin();
	++iter;
	++iter;
	++iter;
	mouse.erase(iter);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;

	iter = mouse.end();
	--iter;
	mouse.erase(iter);
	std::cout << "empty() : " << mouse.empty() << std::endl;
	std::cout << "size    : " << mouse.size()  << std::endl;
	i = 0;
	for (iter = mouse.begin(); iter != mouse.end() ; ++iter, ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << iter->some_ << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void	print_container_content(ft::List<T>& l, const std::string& name = "container") {
	std::cout << name << " contains:";
	for (typename ft::List<T>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << ' ' << *it;
	std::cout << std::endl;
}

void	constructors_test() {
	ft::List<int>	defaultList; // default constructor makes an empty list
	print_container_content(defaultList, "defaultList");
	ft::List<int>	fillList(5, -10); // fill constructor makes 5 elements with value -10
	print_container_content(fillList, "fillList");

	for (int i = 0; i < 5; i++)
		defaultList.push_front(i * 4);
	ft::List<int>::iterator	advance_it = defaultList.begin();
	std::advance(advance_it, 3);
	ft::List<int>	rangeList(defaultList.begin(), advance_it); // range constructor takes a range of 2 iterators
	print_container_content(rangeList, "rangeList");

	ft::List<int>	copyList(rangeList);
	print_container_content(copyList, "copyList");
	copyList = defaultList;
	print_container_content(copyList, "copyList");
	std::cout<< "here\n";
	std::cout << std::endl;
}

void reverse_iterator_test() {
	std::cout << "reverse_iterator_test" << std::endl;
	lib::con<int> def;
	for (int i = 0; i < 10; ++i) {
		def.push_back(i);
	}
	lib::con<int>::reverse_iterator rit(def.rbegin());

	std::cout << *rit << " ggfg "<< std::endl;
	while (rit != def.rend()) {
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;
}

void ft_reverse_test() {

	std::cout << "REVERSE" << std::endl;
	lib::con<int> empty;
	lib::con<int> reverse;
	reverse.push_back(10);
	reverse.push_back(9);
	reverse.push_back(8);
	reverse.push_back(7);
	reverse.push_back(6);
	reverse.push_back(5);

	reverse.reverse();
	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << reverse.size()  << std::endl;
	std::cout << "empty:" << reverse.empty() << std::endl;

	empty.reverse();
	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << empty.size()  << std::endl;
	std::cout << "empty:" << empty.empty() << std::endl;
}

void ft_merge_x_test() {
	std::cout << "\nmerge_x_test()\n" << std::endl;
	lib::con<int> mouse;
	mouse.push_back(10);
	mouse.push_back(20);
	mouse.push_back(60);
	mouse.push_back(90);
	mouse.push_back(200);

	lib::con<int> copy_mouse(mouse);

	lib::con<int> fat_mouse;
	fat_mouse.push_back(5);
	fat_mouse.push_back(25);
	fat_mouse.push_back(45);
	fat_mouse.push_back(75);
	fat_mouse.push_back(85);
	fat_mouse.push_back(105);
	fat_mouse.push_back(115);
	fat_mouse.push_back(205);

	mouse.merge(fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(copy_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

bool compare(int a, int b) {
	return a < b;
}

void std_merge_x_compare_test() {
	std::cout << "\nmerge_x_test()\n" << std::endl;
	lib::con<int> mouse;
	mouse.push_back(10);
	mouse.push_back(20);
	mouse.push_back(60);
	mouse.push_back(90);
	mouse.push_back(200);

	lib::con<int> copy_mouse(mouse);

	lib::con<int> fat_mouse;
	fat_mouse.push_back(5);
	fat_mouse.push_back(25);
	fat_mouse.push_back(45);
	fat_mouse.push_back(75);
	fat_mouse.push_back(85);
	fat_mouse.push_back(105);
	fat_mouse.push_back(115);
	fat_mouse.push_back(205);

	mouse.merge(fat_mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(copy_mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

void ft_merge_x_compare_test() {
	std::cout << "\nmerge_x_test()\n" << std::endl;
	lib::con<int> mouse;
	mouse.push_back(10);
	mouse.push_back(20);
	mouse.push_back(60);
	mouse.push_back(90);
	mouse.push_back(200);

	lib::con<int> copy_mouse(mouse);

	lib::con<int> fat_mouse;
	fat_mouse.push_back(5);
	fat_mouse.push_back(25);
	fat_mouse.push_back(45);
	fat_mouse.push_back(75);
	fat_mouse.push_back(85);
	fat_mouse.push_back(105);
	fat_mouse.push_back(115);
	fat_mouse.push_back(205);

	mouse.merge(fat_mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(copy_mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mouse.merge(mouse, compare);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

void ft_sort_test() {
	std::cout << "sort_test" << std::endl;
	lib::con<int> mouse;
	mouse.push_back(7);
	mouse.push_back(3);
	mouse.push_back(5);
	mouse.push_back(13);
	mouse.push_back(9);
	mouse.push_back(6);

	mouse.sort();
	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lib::con<int> empty;

	empty.sort();
	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lib::con<int> reverse;
	reverse.push_back(10);
	reverse.push_back(9);
	reverse.push_back(8);
	reverse.push_back(7);
	reverse.push_back(6);
	reverse.push_back(5);

	reverse.sort();
	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

bool comp(int a, int b) {
	return a < b;
}

void ft_sort_comp_test() {
	std::cout << "sort_comp_test" << std::endl;
	lib::con<int> mouse;
	mouse.push_back(7);
	mouse.push_back(3);
	mouse.push_back(5);
	mouse.push_back(13);
	mouse.push_back(9);
	mouse.push_back(6);

	mouse.sort(comp);
	for (lib::con<int>::iterator it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lib::con<int> empty;

	empty.sort(comp);
	for (lib::con<int>::iterator it = empty.begin(); it != empty.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lib::con<int> reverse;
	reverse.push_back(10);
	reverse.push_back(9);
	reverse.push_back(8);
	reverse.push_back(7);
	reverse.push_back(6);
	reverse.push_back(5);

	reverse.sort(comp);
	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	reverse.reverse();
	reverse.sort(comp);
	for (lib::con<int>::iterator it = reverse.begin(); it != reverse.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void relational_operators() {
	std::cout << "relational_operators" << std::endl;
	lib::con<int> def1;
	lib::con<int> def2;
	lib::con<int> big_def;
	for (int i = 0; i < 10; ++i) {
		def1.push_back(i);
		def2.push_back(i);
	}
	for (int i = 10; i < 20; ++i) {
		big_def.push_back(i);
	}

	std::cout << (def1 == def2)    << std::endl;
	std::cout << (def1 == big_def) << std::endl;

	std::cout << (def1 != def2)    << std::endl;
	std::cout << (def1 != big_def) << std::endl;

	std::cout << (def1 < def2)    << std::endl;
	std::cout << (def1 < big_def) << std::endl;

	std::cout << (def1 <= def2)    << std::endl;
	std::cout << (def1 <= big_def) << std::endl;

	std::cout << (def1 > def2)    << std::endl;
	std::cout << (def1 > big_def) << std::endl;

	std::cout << (def1 >= def2)    << std::endl;
	std::cout << (def1 >= big_def) << std::endl;
}

void ListTest(){

	constructors_test();
	ft_iterator_test();
	reverse_iterator_test();
	ft_constructors_capacity_test();
	ft_element_access_test();

	////
	ft_push_front_test();
	ft_pop_front_test();
	ft_erase_position_test();
	ft_erase_iter_iter_test();
	ft_swap_test();
	ft_resize_test();
	ft_clear_test();
	ft_insert_iter_val_test();
	ft_insert_iter_n_val_test();
	ft_insert_iter_iter_iter_test();
	ft_assign_iter_iter_test();
	ft_assign_n_val_test();

	////
	ft_merge_x_test();
	ft_merge_x_compare_test();
	ft_sort_test();
	ft_sort_comp_test();
	//
	ft_reverse_test();
	ft_splice_pos_lst_test();
	ft_splice_pos_lst_i_test();
	ft_splice_pos_lst_first_last_test();
	ft_remove_val_test();
	ft_remove_if_test();
	ft_unique_test();
	ft_unique_pred_test();

	relational_operators();

//	//TEST_LIST
//
PRINT("\n ---| from iterator |---");
std::list<int>  test_std_list(5,10);
std::list<int>	test_2(1, 9);

test_std_list.merge(test_2);

PRINT("list")
////TEST_LIST
//PRINT("ft_list")
//std::list<int>::iterator    it1 = test_std_list.begin();
//// std::list<int>::iterator end = test.end();
//std::list<int>      ft_test(it1, it1.operator--(45));
//// it.operator--(45)    ==  it--
//// it.operator--()      ==  --it
////TEST(ft_test);
//// std::list<std::string>::iterator it;
//// it = test.begin();
//
//	std::cout << DarkGreen << "ft:: List test" << RESET << std::endl;
}

int main() {

//	ListTest();

	lib::con <int> def;

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;

	for (int i = 0; i < 10; ++i) {
		def.push(i);
	}

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << def.top() << " ";
		def.pop();
	}

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;
	return 0;

//	example ex;
//	ex.setStr("hello");
//
//
//	std::vector<class example> vec;
//	for(int i = 0; i < 7; i++){
//		ex.setStr(i+"qwertyuiopasdfghjkl");
//		vec.push_back(ex);
//		std::cout << vec[i] <<"\t";
//		}
//	std::cout << *(vec.end()) <<"a\t";
//	std::cout << *(vec.end()) <<"a\t";

	//std::stack stk(vec, <vector>);

/*	size_type max_size() const throw(){
//#if defined (__APPLE__) || defined (_WIN32)
		return std::numeric_limits<size_type>::max() / sizeof(value_type);
	}
*/
	std::cout << "end\n";
}
