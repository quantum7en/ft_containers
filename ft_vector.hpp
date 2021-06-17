//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FT_CONTAINERS_FT_VECTOR_HPP
#define FT_CONTAINERS_FT_VECTOR_HPP

#include <cassert> // для assert()
#include <array>
#include "ft_reverse_iterator.hpp"

namespace ft {


	//// Random-access iterators are iterators that can be used to access elements at an arbitrary offset position
	//// relative to the element they point to, offering the same functionality as pointers.
	//// Random-access iterators are the most complete iterators in terms of functionality.
	//// All pointer types are also valid random-access iterators.
	template < class T, class P, class R >
	class VectorIterator;


	template < class T, class Alloc = allocator<T> >
	class Vector{
	public:
		typedef T									value_type;
		typedef Alloc								allocator_type;
		typedef typename allocator_type::pointer	pointer;
		typedef typename allocator_type::const_pointer	const_pointer;
		typedef typename allocator_type::reference	reference;
		typedef typename allocator_type::const_reference const_reference;
		typedef ft::VectorIterator<T, * T, T &>		iterator;
		typedef ft::VectorIterator<T, const * T, const T &> const_iterator;
		typedef ft::ReverseIterator<const_iterator> const_reverse_iterator;
		typedef ft::ReverseIterator<iterator>		reverse_iterator;
		typedef size_t								size_type;
		typedef VectorIterator<T, T *, T &>::difference_type	difference_type;


		// default (1) empty container constructor (default constructor)
		//Constructs an empty container, with no elements.
		explicit Vector(const allocator_type& alloc = allocator_type())
		: _allocator(NULL),
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
			for (; n > 0; --n, (void) ++_arrPtr)
					_allocator.construct(_arrPtr, val);
		}


		Vector(_InputIterator __first, _InputIterator __last,
		const allocator_type& __a = allocator_type())
		: _Base(__a)
				{

						typedef typename std::__is_integer<_InputIterator>::__type _Integral;
						_M_initialize_dispatch(__first, __last, _Integral());
				}

		virtual ~Vector(){

			static void deallocate(_Alloc& __a, pointer __p, size_type __n)
			{ __a.deallocate(__p, __n); }

			std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish, _M_get_Tp_allocator());
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


//		template<typename _Up>
//		_Up*
//		_M_data_ptr(_Up* __ptr) const
//		{ return __ptr; }




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
		pointer get_arrPtr(){
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
	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
			   const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() == __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
			   const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() == __rhs.base(); }

	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
			   const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() != __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
			   const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() != __rhs.base(); }


	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
			  const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() < __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
			  const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() < __rhs.base(); }

	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
			  const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() > __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
			  const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() > __rhs.base(); }

	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
			   const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() <= __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
			   const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() <= __rhs.base(); }

	template<typename _IteratorL, typename _IteratorR, typename _Container>
	inline bool
	operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
			   const __normal_iterator<_IteratorR, _Container>& __rhs)

	{ return __lhs.base() >= __rhs.base(); }

	template<typename _Iterator, typename _Container>
	inline bool
	operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
			   const __normal_iterator<_Iterator, _Container>& __rhs)

	{ return __lhs.base() >= __rhs.base(); }

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

#endif //FT_CONTAINERS_FT_VECTOR_HPP
