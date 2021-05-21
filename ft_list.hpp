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

namespace ft {
	//template<typename T>

/*
	typedef T value_type;
	typedef std::ptrdiff_t difference_type; // std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
	typedef std::size_t size_type;  //remove?
*/
	template<class T>
	class Node {
	private:
		Node &operator = (const Node &rhs);
	public:
		typedef T value_type;
		Node(): prev(NULL), next(NULL), data(T()) {} //default constructor without args
		Node(const value_type &value) : prev(NULL), next(NULL), data(value) {} //constructor with value for data
		Node(const Node &rhs) : data(rhs.data) {} //copy constructor

		~Node() {}

		Node *prev;
		Node *next;
		T data;
	};


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

		typedef std::allocator<Node<T> >							node_allocator; //allocator for a node
//		typedef ft::ListIterator <T>								iterator;		// bidirectional iterator
		typedef ft::ListIterator <T, T*, T&, Node> 					iterator;
		typedef ft::ListIterator <T, const T*, const T&, Node> 		const_iterator;
//		typedef ReverseIterator<iterator>                 reverse_iterator;   дописать реверс итератор
//		typedef ReverseIterator<const_iterator>     const_reverse_iterator;
//		typedef typename ft::ListBidirectionalIterator<T, T*, T&, Node>::difference_type difference_type;
		typedef std::ptrdiff_t										difference_type; // std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
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
			first = _node_alloc.allocate(1);
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
			first = _node_alloc.allocate(1);
			//TODO
			//last = first;
			insert(begin(), first, last);
		}
		//// (4) copy constructor : Constructs a container with a copy of each of the elements in x, in the same order.
		//// The copy constructor (4) creates a container that keeps and uses a copy of x's allocator.
		//// x - Another list object of the same type (with the same class template arguments), whose contents are either copied or acquired.
		// list (const list& x); m_end(NULL), m_size(0), m_allocator(x.m_allocator){}
		List(const List& x): _listSize(x._listSize){
			//TODO
		}


		//This destroys all container elements, and deallocates all the storage capacity allocated by the list container using its allocator.
		//std::allocator::deallocate : The elements in the array are not destroyed by a call to this member function.
		//In the default allocator, the block of storage is at some point deallocated using ::operator delete (either during the function call, or later).
		~List(){

		};

		//// operator=

		//// assign


/**** Element access ****/
//// front - access the first element
//// back - access the last element

/*
		typedef ListIterator		iterator;
		typedef ListConstIterator	const_iterator;
		typedef ListConstIterator	reverse_iterator;
		typedef ListConstIterator	const_reverse_iterator;
*/

		iterator begin(){
			return iterator(afterLast->next);} //
		const_iterator begin() const {
			return afterLast->next;}
		iterator end(){
			return afterLast->prev;}
		const_iterator end()  const {
			return afterLast->prev;}

			/*
		reverse_iterator rbegin(){  }
		const_reverse_iterator rbegin() const{}
*/

		// true  if container's size = 0, otherwise false
		bool empty() const {
			if (*this->_listSize == 0)
				return true;
			return false;
		}

		size_type size() const{
			return _listSize;
		}

		void push_back(value_type const & val) {
			Node *tmp = new Node(val);
			if (_listSize == 0)
			{
				first = tmp;
			}
			afterLast->prev->next = tmp;
			tmp->prev = afterLast->prev;
			afterLast->prev = tmp;
			tmp->next = afterLast;
		}
/* определить тип и запустить с нужным значением
		template<class InputIterator>
		void insert(iterator position, InputIterator first, InputIterator last){ //возвращает значение которое вставил в контейнер
			typedef typename ft::is_integer<InputIterator>::type Integral;
			insert_dispatch(position,, first, last, Integral)
		}
		*/

//resize - меняет размер, увеличивает или уменьшает
//splice - перемещает из одного контейнера в другой, ничего там не удаляя - сменить указатели в одном контейнере другими

		iterator insert(iterator position, const value_type& val) {
			Node<T> *pos = position.getPtr();
			Node<T> *ptr = new Node<T>;

			ptr->prev =pos->prev;
			ptr->next = pos;
			ptr->data = _allocator.allocate(1);
			_allocator.construct(ptr->data, val);
		}

		iterator erase(iterator position) {
			Node<T> *ptr = position.getPtr();
			Node<T> *tmp = ptr->next;
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			if (ptr == first){
				end->next = first->next;
				first = first->next;
				first->prev = end;
			}
			if (ptr == last){
				last = last->prev;
				last->next = end;
			}

			_allocator.destroy(ptr->data);
			_allocator.deallocate(ptr->data, 1);
			delete ptr;
			_listSize--;
			return iterator(tmp);
		}

		void splice(iterator position, list & x){
			if (x.begin() == x.end() || &x == this)
				return;
			Node *next = position.base();
			Node *prev = next->prev;

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
		Node *first;
	//	Node *last;
		Node *afterLast; //специальный указатель на Node sentinal - shadow node, элемент после последнего
		allocator_type _allocator;
		node_allocator _node_alloc;
	};


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


	template <class T,class T*,class T&, class Node>
	class ListIterator
	{
	private:
		Node<T> *currentPtr; //
	public:
		typedef T value_type;
		typedef T &reference;
		typedef const T &const_reference;
		typedef T *pointer;
		typedef const T &const_pointer;

		ListIterator() : currentPtr(NULL){} // : Node(NULL){}
		ListIterator(Node<T> *ptr) : currentPtr(ptr) {}
		ListIterator(const Node<const T> *ptr) : currentPtr(const_cast<Node<const T> *>(ptr)) {}
		ListIterator(const ListIterator &rhs) : currentPtr(rhs.currentPtr) {}
		//TODO all list iterators
		virtual ~ListIterator(){}

		ListIterator &operator = (const ListIterator<T> &rhs){
			currentPtr = rhs.currentPtr;
			return *this;
		}

		ListIterator &operator++(){
			if(currentPtr && currentPtr->next)
				currentPtr = currentPtr->next;
			return *this;
		}

		ListIterator &operator++(int){
			ListIterator tmp = *this;
			++(*this);
			//currentPtr = currentPtr->next;
			return tmp;
		}

		ListIterator &operator--(){
			currentPtr = currentPtr->prev;
			return *this;
		}

		ListIterator &operator--(int){
			ListIterator *tmp = this;
			currentPtr = currentPtr->prev;
			return *tmp;
		}

		reference operator*(){
			return currentPtr->data;
		}

		const_reference operator*() const{
			return currentPtr->data;
		}

		pointer operator->(){
			return &(currentPtr->data);
		}

		const_pointer operator->() const{
			return &(currentPtr->data);
		}

//		template<class TYPE>
		friend bool operator==(const ListIterator<TYPE> &lhs, const ListIterator<TYPE> &rhs){
			return (lhs.Node == rhs.Node);
		}

		friend bool operator!=(const ListIterator<TYPE> &lhs, const ListIterator<TYPE> &rhs){
			return (lhs.Node != rhs.Node);
		}

		template < class Iterator>
				class reverseListIterator{
		private:
			Iterator it;
			reverseListIterator();
		public:
			typedef typename Iterator::value_type value_type;
			//TODO fullfill all fields here
		};

		//const iterator - мы не можем разыменовать константный итератор и присвоить какое-то значение

	};


}


#endif //FT_CONTAINERS_FT_LIST_HPP
