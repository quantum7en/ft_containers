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
#include <algorithm>
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

		//// **** Exceptions ****
		class ExeptionOutOfRange : public std::exception {
		public:
			const char*  what() throw() {
				return "vector::_M_range_check: n " " >= this->size() ";
			}
		};

		class ExeptionLengthError : public std::exception{
		public:
			const char*  what() throw() {
				return "vector::reserve : allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size";
			}
		};


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

		//// **** Iterators: ****
		iterator	begin() {
			return iterator(_arrBegin);
		}

		const_iterator	begin() const {
			return const_iterator(_arrBegin);
		}

		iterator	end() {
			return iterator(_arrBegin + _size);
		}

		const_iterator	end() const {
			return const_iterator(_arrBegin + _size);
		}

		reverse_iterator	rbegin() {
			return reverse_iterator(end() - 1);
		}

		const_reverse_iterator	rbegin() const {
			return const_reverse_iterator(end() - 1);
		}

		reverse_iterator	rend() {
			return reverse_iterator(begin() - 1);
		}

		reverse_iterator	rend() const {
			return const_reverse_iterator(begin() - 1);
		}
		

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
		//If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
		//If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
		//// Notice that this function changes the actual content of the container by inserting or erasing elements from it.
		void resize (size_type n, value_type val = value_type()){
			if (n > _size){
				// add new elems in memory
				if (_capacity >= n) {
					for (size_type i = _size; i < n; ++i) {
						_allocator.construct(_arrBegin + i, val);
					}
					_size = n;
					return ;
				}
				iterator position = end();
				size_type diff = n - size();
				pointer arr_reallocated = _allocator.allocate(n);

				size_type n_size = sizeof(value_type) * _size;
				size_type 				i;
				unsigned char		*ptr_dest;
				const unsigned char	*ptr_src;

				if (arr_reallocated == _arrPtr || n_size== 0)
					return ;
				ptr_dest = (unsigned char *)arr_reallocated;
				ptr_src = (unsigned char *)_arrPtr;
				i = 0;
				if (ptr_src < ptr_dest)
				{
					while (n_size> 0)
					{
						n_size--;
						ptr_dest[n_size] = ptr_src[n_size];
					}
				}
				else
					while (n_size> i)
					{
						ptr_dest[i] = ptr_src[i];
						i++;
					}

				for (size_type i = size(); i < n; ++i) {
					_allocator.construct(arr_reallocated + i, val);
				}
				if (_arrBegin != NULL) {
					_allocator.deallocate(_arrBegin, _capacity);
				}
				_arrPtr	= arr_reallocated;
				_arrBegin	= arr_reallocated;
				_size = n;
				_capacity = n;
			}
			//If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
			else if (n <= _size){
				if (size_type s = (this->_arrBegin + _size) - (this->_arrBegin + n))
				{
					for (size_type i = _size; i < n; ++i) {
						_allocator.destroy(_arrBegin + i); // destroying elements
					}
					_size = n;
					return;
				}
			}
		}

//		Requests that the vector capacity be at least enough to contain n elements.
//		If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater).
//		In all other cases, the function call does not cause a reallocation and the vector capacity is not affected.
//		This function has no effect on the vector size and cannot alter its elements.
		void reserve (size_type n){
			if (n > max_size())
				throw Vector::ExeptionLengthError();
			if (capacity() < n){
				pointer _q = _allocator.allocate(n);
				pointer _start = _q;
				memmove(_q, _arrPtr, sizeof(value_type) * _size);

				if (_arrBegin != NULL)
					_allocator.deallocate(_arrBegin, _capacity);
				_arrBegin = _start;
				_arrPtr = _arrBegin;
				_capacity = n;
			}
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
				throw Vector::ExeptionOutOfRange();
			return (*this)[n];
		}

		const_reference at (size_type n) const{
			if (n >= size())
				throw Vector::ExeptionOutOfRange();
			return (*this)[n];
		}

		// Access first element
		// Returns a reference to the first element in the vector.
		// Unlike member vector::begin, which returns an iterator to this same element,
		// this function returns a direct reference.
		// Calling this function on an empty container causes undefined behavior.
		reference front(){
			return *_arrBegin;
		}

		const_reference front() const{
			return *_arrBegin;
		}


		reference	back() {
			return _arrPtr[_size - 1];
		}

		const_reference	back() const {
			return _arrPtr[_size - 1];
		}

		//// **** Modifiers: ****

		
		// Assigns new contents to the vector, replacing its current contents,
		// and modifying its size accordingly.
		// In the range version (1), the new contents are elements constructed from each of the elements
		// in the range between first and last, in the same order.
		//// Any elements held in the container before the call are destroyed and replaced by newly 
		/// constructed elements (no assignments of elements take place).
		/// This causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
		template <class InputIterator>
		void assign (InputIterator first, InputIterator last, typename enable_if
				< !std::numeric_limits<InputIterator>::is_specialized >::type* = NULL){

			difference_type new_size = std::distance(first, last);
			
			if (new_size >= 0) {
				Vector _tmp(first, last);

				clear();
				reserve(new_size);
				insert(this->begin(), _tmp.begin(), _tmp.end());
			}

			~Vector();
			throw Vector::ExeptionLengthError();
		}

		// In the fill version (2), the new contents are n elements, each initialized to a copy of val.
		//If a reallocation happens,the storage needed is allocated using the internal allocator.
		void assign (size_type n, const value_type& val){
			if (n > _capacity){
				Vector _tmp(n, val, _allocator);
				_tmp.swap_data(*this);
			}
			else if (n > _size){
				ft::fill(begin(), end(), val); //todo
				size_type add = n - size();
				size_type save = add;
				pointer finish = _arrPtr + _size ;
				// finish = ft::fill_n(finish, add, val, _allocator);
				iterator _cur = finish;
				for (size_type i = 0; i < n - size(); ++i){
					push_back(val);
				}
//				for (size_type i = 0; add > 0; ++i, --add, (void) ++_cur)
//					_allocator.construct(_arrBegin + save + i, *_cur);
//				_M_erase_at_end(begin() + n);
//				_M_initialize_value(val);
			}
			else if (n < _size)
				// erase_at_end(ft::fill_n(_arrBegin, n, val));
				for (size_type i = _size; i > n ; --i){
					pop_back();
				}
		}

		// Add element at the end
		// Adds a new element at the end of the vector, after its current last element.
		// The content of val is copied (or moved) to the new element.
		// This effectively increases the container size by one,
		// which causes an automatic reallocation of the allocated storage space if -and only if-
		// the new vector size surpasses the current vector capacity.
		void	push_back (const value_type& val){
			this->insert(end(), val);
		}

		// Delete last element
		// Removes the last element in the vector, effectively reducing the container size by one.
		// This destroys the removed element.
		void	pop_back(){
			//--this->_size;
			_allocator.destroy(_arrPtr + _size - 1);
			--_size;
		}


		//// The vector is extended by inserting new elements before the element at the specified position,
		/// effectively increasing the container size by the number of elements inserted.
		/// This causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
		/// Because vectors use an array as their underlying storage, inserting elements in positions other than the vector end causes the container to relocate all the elements that were after position to their new positions.
		/// This is generally an inefficient operation compared to the one performed for the same operation by other kinds of sequence containers (such as list or forward_list).
		// single element (1)
		iterator insert (iterator position, const value_type& val){
			const size_type pre_pos = position - begin();
			insert(position, 1, val);
			return iterator(_arrBegin + pre_pos);
		}

		// fill (2)
		void insert (iterator position, size_type n, const value_type& val){
			const size_type pre_position = position - begin();
			if (_size != _capacity)
				if (position == end()){
					_allocator.construct(_arrPtr, val);
					//_Alloc_traits::construct(this->_M_impl, this->_M_impl._M_finish, val);
					++_size;
				}
				else{
					//_M_insert_aux(position, val);
					_allocator.construct(this, this->end(), (*(this->end() - 1)));
					++_size;

					value_type val_copy = val;
					std::copy_backward(position.get_arrPtr(), this->end().get_arrPtr() - 2, this->end().get_arrPtr() - 1 );
					*position = val_copy;
				}
			else{
				//_M_realloc_insert(position, val);

				if (max_size() - size() < 1)
					throw ExeptionLengthError();

				size_type len = size() + std::max(size(), (size_type)1);
				len = (len < size() || len > max_size()) ? max_size() : len;

				pointer _old_start = _arrBegin;
				pointer _old_finish = _arrBegin + size();

				const size_type _elems_before = position - begin();
				pointer _new_start(_allocator.allocate(len));
				pointer _new_finish(_new_start);

				_allocator.construct(this, _new_start + _elems_before, val);
				_new_finish = pointer();
//				_new_finish = std::__uninitialized_move_if_noexcept_a (_old_start, __position.base(),
//								 _new_start, _M_get_Tp_allocator());

				++_size;

//						_new_finish
//								= std::__uninitialized_move_if_noexcept_a
//								(__position.base(), _old_finish,
//								 _new_finish, _M_get_Tp_allocator());

				_allocator.destroy(_old_start);
				//std::_Destroy(_old_start, _old_finish, _M_get_Tp_allocator());
				_allocator.deallocate(_old_start, _arrBegin + this->_capacity - _old_start);
				this->_arrBegin = _new_start;
//				this->_M_impl._M_finish = _new_finish;
//				this->_M_impl._M_end_of_storage = _new_start + _len;
			}

		}

		// range (3)
		template <class InputIterator>
		void insert (iterator position, InputIterator first, InputIterator last){

		}



		iterator erase (iterator position){
			_allocator.destroy(position.get_arrPtr());
			iterator it = position;
			while (it != end()) {
				_allocator.construct(it.get_arrPtr, *(it + 1));
				_allocator.destroy(it.get_arrPtr + 1);
				++it;
			}
			--_size;
			return position;
		}


		iterator erase (iterator first, iterator last){
			size_type begin = first - _arrBegin;

			while (first != last) {
				erase(first);
				--last;
			}
			return iterator(_arrPtr + begin);
		}

		// Swap content
		// Exchanges the content of the container by the content of x, which is another vector object
		// of the same type. Sizes may differ.
		// After the call to this member function, the elements in this container are those which
		// were in x before the call, and the elements of x are those which were in this.
		// All iterators, references and pointers remain valid for the swapped objects.
		void swap (Vector& x){
			this->swap_data(x);
		}

		// Clear content
		// Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
		// A reallocation is not guaranteed to happen, and the vector capacity is not
		// guaranteed to change due to calling this function.
		void clear(){
			if (_arrBegin != NULL)
				erase_at_end(_arrPtr);
			_size = 0;
		}

	private:
		allocator_type	_allocator;
		pointer			_arrPtr;
		pointer 		_arrBegin;
		size_type		_size;
		size_type		_capacity;

		void swap_data(Vector& _x)
		{
			Vector _tmp;
			// _tmp.std::copy_data(*this);
			_tmp._arrBegin = this->_arrBegin;
			_tmp._arrPtr = this->_arrPtr;
			_tmp._size = this->_size;
			_tmp._capacity = this->_capacity;
			//_M_copy_data(_x);

			//// allocator
			this->_arrBegin =_x._arrBegin;
			this->_arrPtr = _x._arrPtr;
			this->_size = _x._size;
			this->_capacity = _x._capacity;

			//_x._M_copy_data(_tmp);
			_x._arrBegin = _tmp._arrBegin;
			_x._arrPtr = _tmp._arrPtr;
			_x._size = _tmp._size;
			_x._capacity = _tmp._capacity;
		}

		void erase_at_end(pointer _pos)
		{
			if (size_type _n = _arrBegin + _size - _pos)
			{
//				std::_Destroy(_pos, this->_M_impl._M_finish,
//							  _M_get_Tp_allocator());
				pointer _last = _arrBegin + _size;
				for (; _pos != _last; ++_pos)
					_allocator.destroy(_pos);
			}
		}
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
		VectorIterator(pointer ptr) : _arrPtr(ptr) {};
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
