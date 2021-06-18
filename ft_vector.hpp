//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FTContainerS_FT_VECTOR_HPP
#define FTContainerS_FT_VECTOR_HPP

#include <cassert> // для assert()
#include <array>
#include <iostream>
#include <cstring>   // memcpy();
#include <memory>    // allocator
#include <cstddef>   // ptrdiff_t
#include <limits>    // std::numeric_limits
#include "ft_reverse_iterator.hpp"
#include "enable_if.hpp"

namespace ft {


	//// Random-access iterators are iterators that can be used to access elements at an arbitrary offset position
	//// relative to the element they point to, offering the same functionality as pointers.
	//// Random-access iterators are the most complete iterators in terms of functionality.
	//// All pointer types are also valid random-access iterators.
	template < class T, class P, class R >
	class VectorIterator;


	template < class T, class Alloc = std::allocator<T> >
	class Vector{
	public:
		typedef T									value_type;
		typedef Alloc								allocator_type;
		typedef typename allocator_type::pointer	pointer;
		typedef typename allocator_type::const_pointer	const_pointer;
		typedef typename allocator_type::reference	reference;
		typedef typename allocator_type::const_reference const_reference;
		typedef ft::VectorIterator<T, T*, T &>		iterator;
		typedef ft::VectorIterator<T, const T*, const T &> const_iterator;
		typedef ft::ReverseIterator<const_iterator> const_reverse_iterator;
		typedef ft::ReverseIterator<iterator>		reverse_iterator;
		typedef size_t								size_type;
		typedef typename ft::VectorIterator<T, T *, T &>::difference_type	difference_type;


		// Assign content. Assigns new contents to the container, replacing its current contents,
		// and modifying its size accordingly.
		// Copies all the elements from x into the container. Any elements held in the container before the call are either assigned to or destroyed.
		Vector& operator= (const Vector& x){
			if (&x == this)
				return *this;

			_allocator.deallocate(_arrBegin, _capacity);
			_allocator = x._allocator;
			_arrPtr = _allocator.allocate(x._capacity);
			_arrBegin = _arrPtr;
			for (size_type i = 0; i < x._size; ++i)
				_allocator.construct(_arrBegin + i, x[i]);

			_size = x._size;
			_capacity = x._capacity;

			return *this;

		}

		//// **** Constructors & Destructor ****
		// default (1) empty container constructor (default constructor)
		//Constructs an empty container, with no elements.
		explicit Vector(const allocator_type& alloc = allocator_type())
		: _allocator(alloc),
		_arrPtr(NULL),
		_arrBegin(NULL),
		_size(0),
		_capacity(0)
		{}

		//(2) fill constructor
		//Constructs a container with n elements. Each element is a copy of val.
		explicit Vector (size_type n, const value_type& val = value_type(),
		const allocator_type& alloc = allocator_type())
		: _allocator(alloc),
		_arrPtr(NULL),
		_arrBegin(NULL),
		_size(n),
		_capacity(n){
			_arrPtr = _allocator.allocate(n);
			_arrBegin = _arrPtr;
//			for (; n > 0 && _arrPtr ; --n, (void) ++_arrPtr)
//					_allocator.construct(_arrBegin + n, val);

			for (size_type i = 0; i < n; ++i)
				_allocator.construct(_arrBegin + i, val);
		}

		// (3) range constructor
		// Constructs a container with as many elements as the range [first,last),
		// with each element constructed from its corresponding element in that range, in the same order.
		template <class InputIterator>
		Vector(InputIterator first, InputIterator last,
		const allocator_type& alloc = allocator_type(), typename enable_if
				< !std::numeric_limits<InputIterator>::is_specialized >::type* = NULL):
				_allocator(alloc),
				_arrPtr(NULL),
				_arrBegin(NULL),
				_size(0),
				_capacity(0){
			_size = std::distance(first, last);
			_arrPtr = _allocator.allocate(_size);
			_capacity = _size;
			_arrBegin = _arrPtr;
			for (; first != last; ++first, (void) ++_arrPtr)
				_allocator.construct(_arrPtr, *first);

//			for (size_type i = 0; i < _size; ++i) {
//				_allocator.construct(_arrPtr + i, *first);
//				++first;
//			}
		}

		// copy (4) vector (const vector& x)
		// Constructs a container with a copy of each of the elements in x, in the same order.
		Vector (const Vector& x):
				_allocator(x._allocator),
				_arrPtr(NULL),
				_arrBegin(NULL),
				_size(x._size),
				_capacity(x._capacity){
			_arrPtr = _allocator.allocate(x._capacity);
			_arrBegin = _arrPtr;

			for (size_type i = 0; i < x._size; ++i)
				_allocator.construct(_arrBegin + i, x[i]);
		}

		virtual ~Vector(){
			pointer end = _arrBegin + this->_size;
			for (; _arrPtr != end; (void) ++_arrPtr)
				_allocator.destroy(_arrPtr);

			_allocator.deallocate(_arrBegin, _capacity);
			_arrPtr = NULL;
			_arrBegin = NULL;
			_size = 0;
			_capacity = 0;
		}

		template<typename P>
		value_type* get_data_ptr(P ptr){
			return empty() ? (value_type*)0 : ptr.operator->(); }

		template<typename P>
		const value_type* get_data_ptr(P ptr) const{
			return empty() ? (const value_type*)0 : ptr.operator->(); }

		// Return size of allocated storage capacity
		//Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
		// This capacity is not necessarily equal to the vector size.
		// It can be equal or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion.
		// Notice that this capacity does not suppose a limit on the size of the vector.
		// When this capacity is exhausted and more is needed, it is automatically expanded by the container (reallocating it storage space).
		// The theoretical limit on the size of a vector is given by member max_size.
		// return val: The size of the currently allocated storage capacity in the vector, measured in terms of the number elements it can hold.

		//// **** Capacity ****
		size_type capacity() const{
			return _capacity;
		}

		//Test whether vector is empty
		//Returns whether the vector is empty (i.e. whether its size is 0).
		bool empty() const{
			return (_size == 0 ? true : false);
		}

		// Returns the number of elements in the vector.
		//This is the number of actual objects held in the vector,
		// which is not necessarily equal to its storage capacity.
		size_type size() const{
			return _size;
		}

		// Return maximum size
		//Returns the maximum number of elements that the vector can hold.
		//This is the maximum potential size the container can reach due to known system
		// or library implementation limitations, but the container is by no means guaranteed
		// to be able to reach that size: it can still fail to allocate storage at any point before that size is reached.
		size_type max_size() const{
			const size_type max_size = _allocator.max_size();
			return max_size;
		}


		// Change size
		//Resizes the container so that it contains n elements.
		//If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
		//If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
		//If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
		//// Notice that this function changes the actual content of the container by inserting or erasing elements from it.
		void resize (size_type n, value_type val = value_type()){
			if (n > _size)
				insert(end(), n - size(), __x);
			else if (n <= _size){
				//_M_erase_at_end(this->_M_impl._M_start + __new_size);
				if (size_type __n = (this->_arrBegin + _size) - (this->_arrBegin + n))
				{
					for (size_type i = _size; i < n; ++i) {
						_allocator.destroy(_arrBegin + i);
					}
					_size = n;
					return;
					//this->_M_impl._M_finish = __pos;
				}
			}
		}

//		Requests that the vector capacity be at least enough to contain n elements.
//		If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater).
//		In all other cases, the function call does not cause a reallocation and the vector capacity is not affected.
//		This function has no effect on the vector size and cannot alter its elements.
		void reserve (size_type n){ //todo

		}



		//// **** Element access: *****
		// Returns a reference to the element at position n in the vector container.
		reference	operator[] (size_type n) {
			return _arrPtr[n];
		}

		// If the vector object is const-qualified, the function returns a const_reference.
		const_reference	operator[] (size_type n) const {
			return _arrPtr[n];
		}

		// Returns a reference to the element at position n in the vector.
		// The function automatically checks whether n is within the bounds of valid elements in the vector,
		// throwing an out_of_range exception if it is not (i.e., if n is greater than, or equal to, its size).
		// This is in contrast with member operator[], that does not check against bounds.
		reference at (size_type n){
			if (n >= size())
				throw Vector::OutOfRange();
				__throw_out_of_range_fmt(("vector::_M_range_check: __n " "(which is %zu) >= this->size() " "(which is %zu)") ,n, this->size());
			return (*this)[n];
		}

		const_reference at (size_type n) const{
			if (n >= size())
				throw Vector::OutOfRange();
				__throw_out_of_range_fmt(("vector::_M_range_check: __n " "(which is %zu) >= this->size() " "(which is %zu)") ,n, this->size());
			return (*this)[n];
		}





	private:
		allocator_type	_allocator;
		pointer			_arrPtr;
		pointer 		_arrBegin;
		size_type		_size;
		size_type		_capacity;
	};

	template < class T, class P, class R >
	class VectorIterator{
	public:
		typedef T			value_type;
		typedef T *			pointer;
		typedef T &			reference;
		typedef ptrdiff_t	difference_type;
		typedef std::random_access_iterator_tag iterator_category;
		typedef const T &	const_reference;
		typedef const T &	const_pointer;
		typedef VectorIterator<T, P, R> this_type; //todo ?


		VectorIterator() : _arrPtr(NULL) {};
		VectorIterator(const_pointer ptr) : _arrPtr(ptr) {};
		VectorIterator(const VectorIterator &rhs) : _arrPtr(rhs.get_arrPtr()) {};

		virtual ~VectorIterator(){};


		//assignation =
		VectorIterator &operator = (const VectorIterator &rhs){
			if (this == &rhs)
				return *this;
			_arrPtr = rhs.get_arrPtr();
			return *this;
		}

		// Getter for array pointer
		pointer get_arrPtr() const{
			return _arrPtr;
		}

		const VectorIterator& base() const{
			return _arrPtr; }
		////


		reference operator*(){
			return *_arrPtr;
		}

		pointer operator->() const{
			return _arrPtr; }

		VectorIterator &operator++(){
			++_arrPtr;
			return *this;
		}

		VectorIterator operator++(int){
			return VectorIterator(_arrPtr++);
		}

		VectorIterator &operator--(){
			--_arrPtr;
			return *this;
		}

		VectorIterator operator--(int){
			--_arrPtr;
			return VectorIterator(_arrPtr--);
		}

		reference operator[](difference_type n) const{
			return _arrPtr[n]; }

		VectorIterator &operator+=(difference_type n){
			_arrPtr += n;
			return *this; }

		VectorIterator operator+(difference_type n) const{
			return VectorIterator(_arrPtr + n); } //todo

		VectorIterator &operator-=(difference_type n){
			_arrPtr -= n;
			return *this; }

		VectorIterator operator-(difference_type n) const{
			return VectorIterator(_arrPtr - n); }


	private:
		pointer _arrPtr;
	};

	//// Iterator bool

	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator==(const VectorIterator<lT, lP, lR>& lhs,
			   const VectorIterator<rT, rP, rR>& rhs)
	{ return lhs.get_arrPtr() == rhs.get_arrPtr(); }

	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator!=(const VectorIterator<lT, lP, lR>& lhs,
					const VectorIterator<rT, rP, rR>& rhs)

	{ return lhs.base() != rhs.base(); }

//	template <class lT, class lP, class lR, class rT, class rP, class rR>	bool
//	operator!=(const VectorIterator<lT, lP, lR>& lhs,
//			   const VectorIterator<rT, rP, rR>& rhs)
//	{ return lhs.get_arrPtr() != rhs.get_arrPtr(); }


	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator<(const VectorIterator<lT, lP, lR>& lhs,
				   const VectorIterator<rT, rP, rR>& rhs)
	{ return lhs.base() < rhs.base(); }

//	template<typename _Iterator, typename Container>
//	bool
//	operator<(const VectorIterator<_Iterator, Container>& lhs,
//			  const VectorIterator<_Iterator, Container>& rhs)
//
//	{ return lhs.base() < rhs.base(); }

	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator>(const VectorIterator<lT, lP, lR>& lhs,
				   const VectorIterator<rT, rP, rR>& rhs)

	{ return lhs.base() > rhs.base(); }

//	template<typename _Iterator, typename Container>
//	bool
//	operator>(const VectorIterator<_Iterator, Container>& lhs,
//			  const VectorIterator<_Iterator, Container>& rhs)
//
//	{ return lhs.base() > rhs.base(); }

	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator<=(const VectorIterator<lT, lP, lR>& lhs,
					const VectorIterator<rT, rP, rR>& rhs)

	{ return lhs.base() <= rhs.base(); }

//	template<typename _Iterator, typename Container>
//	bool
//	operator<=(const VectorIterator<_Iterator, Container>& lhs,
//			   const VectorIterator<_Iterator, Container>& rhs)
//
//	{ return lhs.base() <= rhs.base(); }

	template <class lT, class lP, class lR, class rT, class rP, class rR>
	bool operator>=(const VectorIterator<lT, lP, lR>& lhs,
			   const VectorIterator<rT, rP, rR>& rhs)

	{ return lhs.base() >= rhs.base(); }
//
//	template<typename _Iterator, typename Container>
//	bool
//	operator>=(const VectorIterator<_Iterator, Container>& lhs,
//			   const VectorIterator<_Iterator, Container>& rhs)
//
//	{ return lhs.base() >= rhs.base(); }

	template <class T, class P, class R>
	typename VectorIterator<T, P, R>::difference_type
	operator-(const VectorIterator<T, P, R>& lhs,
			  const VectorIterator<T, P, R>& rhs)
	{ return lhs.base() - rhs.base(); }

	template <class T, class P, class R>
	inline VectorIterator<T, P, R>
	operator+(typename VectorIterator<T, P, R>::difference_type
			  n, const VectorIterator<T, P, R>& i)
	{ return VectorIterator<T, P, R>(i.base() + n); }
	
	//// Iterator bool end

//	int& operator[](int idx){
//		assert(idx >= 0 && idx < m_len);
//		return m_data[idx];
//	}
//
//	int *end{
//		&array[0] + std::size(array)
//	};
	//нельзя после v.erase(it) сделать ++it || разыменовать
}

#endif //FTContainerS_FT_VECTOR_HPP
