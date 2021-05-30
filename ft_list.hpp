//
// Created by Phylicia Melinda on 4/29/21.
//

#ifndef FT_CONTAINERS_FT_LIST_HPP
#define FT_CONTAINERS_FT_LIST_HPP

#include <iostream>
#include <string>
#include <memory> // for allocator
#include <limits>
#include <cstddef> // here defined ptrdiff_t
#include <utility>

#include "ft_reverse_iterator.hpp"
#include "enable_if.hpp"

namespace ft {
//	template<typename T>


//	typedef T value_type;
/*	typedef std::ptrdiff_t difference_type; // std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
	typedef std::size_t size_type;  //remove?
*/
	template<class T>
	class Node {
	private:
		Node &operator = (const Node &rhs);
	public:
		typedef T value_type;
		Node(): prev(NULL), next(NULL), data(T()) {} //default constructor without args
		Node(Node *prev_n, Node *next_n): prev(prev_n), next(next_n) {} //maybe will use it
		Node(const value_type &value) : prev(NULL), next(NULL), data(value) {} //constructor with value for data
		Node(const Node &rhs) : data(rhs.data) {} //copy constructor

		~Node() {}

		Node *prev;
		Node *next;
		T data;

		T* valptr() { return std::addressof(data); } ////as in gnu src
		T const* valptr() const { return std::addressof(data); }
	};

	template < class T, class Pointer, class Reference, class Node>
	class ListIterator;

	//template < class T, class Alloc = std::allocator<T> > class List;
	template < class T, class Alloc = std::allocator<T> > // Allocator object. The container keeps and uses an internal copy of this allocator.
	// Member type allocator_type is the internal allocator type used by the container, defined in list as an alias of its second template parameter (Alloc).
	// If allocator_type is an instantiation of the default allocator (which has no state), this is not relevant.
	class List{
	public:

		typedef T													value_type;
		typedef Alloc                                           	allocator_type; // defaults to: allocator<value_type>
		typedef typename allocator_type::reference              	reference;  	// for the default allocator: value_type&
		typedef typename allocator_type::const_reference        	const_reference;// for the default allocator: const value_type&
		typedef typename allocator_type::pointer                	pointer;		// for the default allocator: value_type*
		typedef typename allocator_type::const_pointer          	const_pointer;	// for the default allocator: const value_type*


		typedef std::allocator <Node <T> >							node_allocator; //allocator for a node
//		typedef ft::ListIterator <T>								iterator;		// todo delete
		typedef ft::ListIterator <T, T*, T&, Node<T> > 					iterator;
		typedef ft::ListIterator <T, const T*, const T&, Node<T> > 		const_iterator;
		typedef ft::ReverseIterator <iterator>                 			reverse_iterator;  // дописать реверс итератор
		typedef ft::ReverseIterator <const_iterator>     				const_reverse_iterator;
		typedef typename ft::ListIterator<T, T*, T&, Node <T> >::difference_type difference_type;
//todo		typedef std::ptrdiff_t										difference_type; // std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
		typedef std::size_t											size_type;


/////      *** Member functions: ****
////       ***** CONSTRUCTORS *****
		// The container keeps an internal copy of alloc, which is used to allocate storage throughout its lifetime.
		//// (1) empty container constructor (Default constructor): Constructs an empty container, with no elements.
		// explicit list (const allocator_type& alloc = allocator_type()); //explicit - значит можно создать по поданному типу (не будет неявного каста)

		explicit List(const allocator_type& alloc = allocator_type()) : _listSize(0), _allocator(alloc){
			first = _node_alloc.allocate(1);
			afterLast = first;
			afterLast->next = NULL;
			afterLast->prev = NULL;
		}

		//// (2) fill constructor : Constructs a container with n elements. Each element is a copy of val.
		// n - Initial container size
		// explicit list (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
		explicit List(size_type n, const value_type &val = value_type(), const allocator_type& alloc = allocator_type()) : _listSize(0), _allocator(alloc){
			afterLast = _node_alloc.allocate(1);
			for(size_type i = 0; i < n; i++)
				push_back(val);
			//last = first;
			//insert(begin(), n, value);
		}
		//// (3) range constructor : Constructs a container with as many elements as the range [first,last),
		//// with each element constructed from its corresponding element in that range, in the same order.
		//// Input iterators to the initial and final positions in a range. The range used is [first,last), which includes all the elements between first and last, including the element pointed by first but not the element pointed by last.
		//// The function template argument InputIterator shall be an input iterator type that points to elements of a type from which value_type objects can be constructed.
		// list (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
		template <class InputIterator>
		List (iterator first, iterator last, const allocator_type& alloc = allocator_type(), typename std::enable_if
				< !std::numeric_limits<InputIterator>::is_specialized >::type* = NULL) : _listSize(0), _allocator(alloc){
			afterLast = _node_alloc.allocate(1);
			//TODO write struct enable if
			//last = first;
			insert(begin(), first, last);
		}
		//// (4) copy constructor : Constructs a container with a copy of each of the elements in x, in the same order.
		//// The copy constructor (4) creates a container that keeps and uses a copy of x's allocator.
		//// x - Another list object of the same type (with the same class template arguments), whose contents are either copied or acquired.
		// list (const list& x); m_end(NULL), m_size(0), m_allocator(x.m_allocator){}
		List(const List& x): _listSize(x._listSize), _allocator(x._allocator){
			afterLast = _node_alloc.allocate(1);
			const_iterator ite = x.end();
			for (const_iterator it(x.begin()); it != ite; it++){
				this->push_back(*it);
			}
		}


		////This destroys all container elements, and deallocates all the storage capacity allocated by the list container using its allocator.
		////std::allocator::deallocate : The elements in the array are not destroyed by a call to this member function. - наверно поэтому есть утечки в оригинальном листе
		//In the default allocator, the block of storage is at some point deallocated using ::operator delete (either during the function call, or later).
		virtual ~List(){
			if(_listSize > 0)
				erase(begin(), end()); // || в цикле pop_back
			_node_alloc.deallocate(afterLast, 1);
		};

/* TODO delete
		typedef ListIterator		iterator;
		typedef ListConstIterator	const_iterator;
		typedef ListConstIterator	reverse_iterator;
		typedef ListConstIterator	const_reverse_iterator;
*/

////**** Iterators: ****
//std::list::begin - Returns an iterator pointing to the first element in the list container.
// If the container is empty, the returned iterator value shall not be dereferenced.
		iterator		begin(){
			return iterator(afterLast->next);}

// If the list object is const-qualified, the function returns a const_iterator.
		const_iterator	begin() const {
			return const_iterator(afterLast->next);}

//std::list::end - Returns an iterator referring to the past-the-end element in the list container.
//The past-the-end element is the theoretical element that would follow the last element in the list container.
// It does not point to any element, and thus shall not be dereferenced.
// If the container is empty, this function returns the same as list::begin.
		iterator		end(){
			return iterator(afterLast);}
		const_iterator	end()  const {
			return const_iterator(afterLast);}

//std::list::rbegin - Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
//Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.
//rbegin points to the element right before the one that would be pointed to by member end.
		reverse_iterator		rbegin(){
			return  _listSize==0 ? reverse_iterator (afterLast) : reverse_iterator (afterLast->prev);}
		const_reverse_iterator	rbegin() const{
			return  _listSize==0 ? const_reverse_iterator (afterLast) : reverse_iterator (afterLast->prev);}

//std::list::rend - Return reverse iterator to reverse end
//Returns a reverse iterator pointing to the theoretical element preceding the first element in the list container (which is considered its reverse end).
		reverse_iterator		rend(){
			return  _listSize==0 ? reverse_iterator (afterLast->next) : reverse_iterator (afterLast->prev);}
		const_reverse_iterator rend() const {
			return  _listSize==0 ? const_reverse_iterator (afterLast->next) : const_reverse_iterator (afterLast->prev);}

		///****  Capacity: ****
		//empty() Test whether container is empty (public member function ). true  if container's size = 0, otherwise false
		// Returns whether the list container is empty (i.e. whether its size is 0).
		bool empty() const {
			if (_listSize == 0)
				return true;
			return false;
		}

		//size() Returns the number of elements in the list container.
		size_type size() const {
			return _listSize;
		}

		//Returns the maximum number of elements that the list container can hold.
		size_type max_size() const {
			return _allocator.max_size();
		}

		/**** Element access ****/
//// front - access the first element
//// back - access the last element

		reference       front() {
			return afterLast->next->data;
		}

		const_reference front() const {
			return afterLast->next->data;
		}

		reference       back() {
			return afterLast->prev->data;
		}

		const_reference back() const {
			return afterLast->prev->data;
		}

		/**** Modifiers: ****/

		// Assign new content to container
		// Assigns new contents to the list container, replacing its current contents, and modifying its size accordingly.
		// In the range version (1), the new contents are elements constructed from each of the elements in the range between first and last, in the same order.
		//todo rewrite
		template <class InputIterator>
		void assign(InputIterator first, InputIterator last) {
			clear();
			List new_list(first, last, allocator_type());
			this->swap(new_list);
		}

		// In the fill version (2), the new contents are n elements, each initialized to a copy of val.
		// Any storage needed for the assigned elements is allocated using the internal allocator.
		// Any elements held in the container before the call are destroyed and replaced by newly constructed elements (no assignments of elements take place).
		void	assign(size_type n, const value_type& val)
		{
			clear();
			insert(this->begin(), n, val);
		}

		// todo
		//Insert element at beginning



		// todo pop_front
		//Delete first element

		void	push_back(value_type const & val) {
			Node<T> *tmp = new Node<T>(val);
			if (_listSize == 0){
				first = tmp;
			}
			afterLast->prev->next = tmp;
			tmp->prev = afterLast->prev;
			afterLast->prev = tmp;
			tmp->next = afterLast;
		}

		// pop_back
		// Delete last element

//splice - перемещает из одного контейнера в другой, ничего там не удаляя - сменить указатели в одном контейнере другими

		// The container is extended by inserting new elements before the element at the specified position.
		// This effectively increases the list size by the amount of elements inserted.
		// Return : An iterator that points to the first of the newly inserted elements.
		// single element (1)
		iterator insert(iterator position, const value_type& val) {
			Node<T> *pos = position.getPtr();

			Node<T> *newNodePtr = _node_alloc.allocate(1);
			newNodePtr->prev =pos->prev;
			newNodePtr->next = pos;
			newNodePtr->data = _allocator.allocate(1);

			_allocator.construct(newNodePtr->data, val);

			++this->_listSize;
			return iterator(newNodePtr);

		}

		// fill (2)
		// n - Number of elements to insert. Each element is initialized to a copy of val.
		void insert(iterator position, size_type n, const value_type & val) {
			for (size_type numOfElems = 0; numOfElems < n; numOfElems++) {
				position = insert(position, val);
			}
		}

		// range (3)
		// first, last : Iterators specifying a range of elements. Copies of the elements in the range [first,last) are inserted at position (in the same order).
		// Notice that the range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
		template<class InputIterator>
		void insert(iterator position, InputIterator first, InputIterator last, typename enable_if
				< !std::numeric_limits<InputIterator>::is_specialized >::type* = NULL){
			for (; first != last; first++, position++)
				position = insert(position, *first);
		}

		//Removes from the list container either a single element (position) or a range of elements ([first,last)).
		//This effectively reduces the container size by the number of elements removed, which are destroyed.
		//Unlike other standard sequence containers, list and forward_list objects are specifically designed
		// to be efficient inserting and removing elements in any position, even in the middle of the sequence.
		iterator erase(iterator position) {
			Node<T> *ptr = position.getPtr();
			Node<T> *tmp = ptr->next;
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			if (ptr == first){
				afterLast->next = first->next;
				first = first->next;
				first->prev = afterLast;
			}
			if (ptr == afterLast->prev){
				afterLast->prev = afterLast->prev->prev;
				afterLast->prev->next = afterLast;
			}

			_allocator.destroy(ptr->data);
			_allocator.deallocate(ptr->data, 1);
			delete ptr; //todo
			_listSize--;
			return iterator(tmp);
		}

		// Removes from the list container a range of elements ([first,last)).
		// first, last : Iterators specifying a range within the list to be removed: [first,last). i.e.,
		// the range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
		iterator erase (iterator first, iterator last) {
			Node<T> *current;
			Node<T> *firstPtr;
			for (; first != last; ++first) {
				current = first.getPtr();
			//	current = first.get_node();
			//	++first;
				_allocator.destroy(current->data);
				_allocator.deallocate(current->data, 1);
			//	destroy_node(current);
				_listSize--;
			}
			return last;
		}

		//todo Swap content



		//Resizes the container so that it contains n elements.
		// If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
		// If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n.
		// If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
		//val - Object whose content is copied to the added elements in case that n is greater than the current container size. If not specified, the default constructor is used instead.
		void resize (size_type n, value_type val = value_type()){
			if (n >= _listSize)
				insert(end(), n - _listSize, val);
			iterator it = begin();
			for (size_t count = 0; count < n; count++)
				++it;
			erase(it, end());
		}

		// Clear content
		// Removes all elements from the list container (which are destroyed), and leaving the container with a size of 0.
		void	clear(){
			this->erase(begin(), end());
			// _listSize = 0;
		}

		//// Operations:

		//splice - перемещает из одного контейнера в другой, ничего там не удаляя - сменить указатели в одном контейнере другими
		void splice(iterator position, List & x){
			if (x.begin() == x.end() || &x == this)
				return;
			Node<T> *next = position.base();
			Node<T> *prev = next->prev;

			//			Node *const positionNode = position.getListNode(); //определить позицию пришедшей ноды
//			//Node *const drawnNode =
//			--x._listSize;
//			Node::insertBetween(
//
//					)
//					++_listSize;
		}

	private:
		//typedef Node<value_type, allocator_type> lst
		size_type _listSize;
		Node<T> *first;
	//	Node *last;
		Node<T> *afterLast; //специальный указатель на Node sentinal - shadow node, элемент после последнего
		allocator_type _allocator;
		node_allocator _node_alloc;
	};

/*
	//// ***** Non-member functions *****
	template<T, Alloc>
	bool operator == (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs){}

	template<T, Alloc>
	bool operator != (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs){
		return !operator==(lhs, rhs);
	}

	template<T, Alloc>
	bool operator < (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		typedef typename List<T, Alloc>::const_iterator it;
		it lIt = lhs.begin();
		it lIte = lhs.end();
		it rIt = rhs.begin();
		it rIte = rhs.end();
		for (; lIt != lIte && rIt != rIte; ++lIt, ++rIt){
			if(*lIt < *rIt)
				return true;
			if(*rIt < *lIt)
				return false;
		}
	}

	template<T, Alloc> //?
	bool operator <= (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		it lIt = lhs.begin();
		it lIte = lhs.end();
		it rIt = rhs.begin();
		it rIte = rhs.end();
		for (; lIt != lIte && rIt != rIte; ++lIt, ++rIt){
			if(*lIt <= *rIt)
				return true;
			if(*rIt <= *lIt) //?
				return false;
		}
	}

	template<T, Alloc>
	bool operator > (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		typedef typename List<T, Alloc>::const_iterator it;
		it lIt = lhs.begin();
		it lIte = lhs.end();
		it rIt = rhs.begin();
		it rIte = rhs.end();
		for (; lIt != lIte && rIt != rIte; ++lIt, ++rIt){
			if(*lIt > *rIt)
				return true;
			if(*rIt > *lIt)
				return false;
		}
	}

	template<T, Alloc>
	bool operator >= (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		typedef typename List<T, Alloc>::const_iterator it;
		it lIt = lhs.begin();
		it lIte = lhs.end();
		it rIt = rhs.begin();
		it rIte = rhs.end();
		for (; lIt != lIte && rIt != rIte; ++lIt, ++rIt){
			if(*lIt >= *rIt)
				return true;
			if(*rIt >= *lIt)
				return false;
		}
	}

	template<T, Alloc>
	void swap(const List<T, Alloc> &x, const List<T, Alloc> &y){}
*/
//TODO all list iterators
	template < class T, class Pointer, class Reference, class Node>
//	template < T, T*, T&, Node>
	class ListIterator
	{
	private:
		Node *_currentNodePtr; //указатель на текущую ноду листа
	public:
		typedef T			value_type;
		typedef T *			pointer;
		typedef T &			reference;
		typedef ptrdiff_t	difference_type;
		typedef std::bidirectional_iterator_tag iterator_category; //works??
		typedef const T &	const_reference;
		typedef const T &	const_pointer;

		ListIterator() : _currentNodePtr(NULL){}; // ?
		explicit ListIterator(Node *ptr = 0) : _currentNodePtr(ptr) {};
		ListIterator(const Node  *ptr) : _currentNodePtr(const_cast<Node *>(ptr)) {};
		ListIterator(const ListIterator &rhs) : _currentNodePtr(rhs._currentNodePtr) {};

		virtual ~ListIterator(){};

		//assignation =
		ListIterator &operator = (const ListIterator &rhs){
			if (this == &rhs)
				return *this;
			_currentNodePtr = rhs._currentNodePtr;
			return *this;
		}

		// ++iterator
		ListIterator &operator++(){
			if(_currentNodePtr && _currentNodePtr->next)
				_currentNodePtr = _currentNodePtr->next;
			return *this;
		}

		// iterator++
		ListIterator &operator++(int){
			ListIterator tmp = *this;
			++(*this);
			//_currentNodePtr = _currentNodePtr->next;
			return tmp;
		}

		//
		ListIterator &operator--(){
			_currentNodePtr = _currentNodePtr->prev;
			return *this;
		}

		ListIterator &operator--(int){
			ListIterator *tmp = this;
			_currentNodePtr = _currentNodePtr->prev;
			return *tmp;
		}

		reference operator*(){
			if (_currentNodePtr) // maybe not needed
				return _currentNodePtr->data;
		}

		const_reference operator*() const{
			if (_currentNodePtr) // maybe not needed
				return _currentNodePtr->data;
		}

		pointer operator->(){
			return &_currentNodePtr->data;
		}

		const_pointer operator->() const{
			return &_currentNodePtr->data;
		}


		bool operator==( const ListIterator &rhs){
			return (_currentNodePtr == rhs._currentNodePtr);
		}

		bool operator!=( const ListIterator &rhs){
			return (_currentNodePtr != rhs._currentNodePtr);
		}

		//// *** Getter for private field _currentNodePtr
		Node *getPtr() const{
			return _currentNodePtr;
		}
		//const iterator - мы не можем разыменовать константный итератор и присвоить какое-то значение

	};


}


#endif //FT_CONTAINERS_FT_LIST_HPP
