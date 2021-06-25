//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FT_CONTAINERS_FT_MAP_HPP
#define FT_CONTAINERS_FT_MAP_HPP

#include <string>
#include <iostream>
#include "enable_if.hpp"
#include "ft_reverse_iterator.hpp"
#include "ft_vector.hpp"
#include "RBTree.hpp"
#include <list>

namespace ft {

//	template < class T>
//	class RedBlackTree;
	/// Bidirectional iterators are iterators that can be used to access the sequence of elements
	/// in a range in both directions (towards the end and towards the beginning).
	template <class T>
	class MapIterator;

	template <class T>
	struct Node;
	/// Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
	/// In a map, the key values are generally used to sort and uniquely identify the elements,
	/// while the mapped values store the content associated to this key.
	/// The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:
	/// typedef pair<const Key, T> value_type;
	/// Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criterion
	/// indicated by its internal comparison object (of type Compare).
	/// map containers are generally slower than unordered_map containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.
	/// The mapped values in a map can be accessed directly by their corresponding key using the bracket operator ((operator[]).
	/// Maps are typically implemented as binary search trees.

	/// Associative
	// Elements in associative containers are referenced by their key and not by their absolute position in the container.
	/// Ordered
	// The elements in the container follow a strict order at all times. All inserted elements are given a position in this order.
	/// Map
	// Each element associates a key to a mapped value: Keys are meant to identify the elements whose main content is the mapped value.
	/// Unique keys
	// No two elements in the container can have equivalent keys.
	/// Allocator-aware
	// The container uses an allocator object to dynamically handle its storage needs.

	template < class Key,											// map::key_type
			class T,												// map::mapped_type
			class Compare = std::less<Key>,							// map::key_compare
			class Alloc = std::allocator<T>	// map::allocator_type
	>
class Map : public ft::RedBlackTree< std::pair<Key, T>, Key>{

	public:
		typedef Key 					key_type;
		typedef T						mapped_type;
		typedef std::pair<Key, T> value_type;
		typedef Compare					key_compare;
//		typedef Compare					value_compare;
		typedef Alloc					allocator_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::pointer			const_pointer;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef size_t					size_type;
		typedef typename ft::MapIterator<
		        ft::VectorIterator<value_type, value_type*, value_type&>>	difference_type;

		typedef ft::MapIterator<value_type> iterator;
		typedef ft::MapIterator<value_type> const_iterator;
		typedef ft::ReverseIterator<iterator>		reverse_iterator;
		typedef ft::ReverseIterator<const_iterator>	const_reverse_iterator;
//		typedef node_type              = /* unspecified */;
//		typedef insert_return_type     = /*insert-return-type*/<iterator, node_type>;

		class value_compare {
			friend class Map;

		protected:
			Compare comp;
			explicit value_compare(Compare c) : comp(c) {}
		public:
			bool operator()(const value_type& x, const value_type& y) const {
				return comp(x.first, y.first);
			}
		};

		// (1) empty container constructor (default constructor)
		//Constructs an empty container, with no elements.
		explicit Map(const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()):
		RedBlackTree<class std::pair<Key, T>, Key>(),
		_allocator(alloc), _compare(comp), _size(0)
		{}

		// (2) range constructor
		//Constructs a container with as many elements as the range [first,last),
		// with each element constructed from its corresponding element in that range.
		template <class InputIterator>
		Map (InputIterator first, InputIterator last,
		const key_compare& comp = key_compare(),
		const allocator_type& alloc = allocator_type()):
		_allocator(alloc), _compare(comp){
			iterator it = begin();
			iterator ite = end();

			while(it != ite){
				this->insert(*it);
				++_size;
				++it;
			}
		}

		// (3) copy constructor
		//Constructs a container with a copy of each of the elements in x.
		Map (const Map& x): _allocator(x._allocator), _compare(x._compare), _size(x._size){
			//rbt = new RedBlackTree<value_type>;
		}

		// Assignation. Assigns new contents to the container, replacing its current content.
		// The container preserves its current allocator, which is used to allocate additional storage if needed.
		// The elements stored in the container before the call are either assigned to or destroyed.
		Map &	operator=(const Map & x) {
			if (this == &x) {
				return *this;
			}
			_compare = x._compare;
			_size = x._size;
			return *this;
		}

		//// **** Iterators: *****

		// Return iterator to beginning
		// Returns an iterator referring to the first element in the map container.
		// Because map containers keep their elements ordered at all times,
		// begin points to the element that goes first following the container's sorting criterion.
		// If the container is empty, the returned iterator value shall not be dereferenced.

		iterator begin() {
		//	Node<value_type> *tmp = this->getTNULL()->left;
			return iterator (this->getTNULL()->left);
		}

		const_iterator begin() const{
			return const_iterator (this->getTNULL()->left);
		}

		//Return iterator to end
		//Returns an iterator referring to the past-the-end element in the map container.
		//The past-the-end element is the theoretical element that would follow the last element in the map container.
		// It does not point to any element, and thus shall not be dereferenced.
		//Because the ranges used by functions of the standard library do not include the element pointed by their closing iterator,
		// this function is often used in combination with map::begin to specify a range including all the elements in the container.
		//If the container is empty, this function returns the same as map::begin.
		iterator end() {
			return iterator (this->getTNULL()->right->left);
		}

		const_iterator end() const{
			return const_iterator (this->getTNULL()->right->left);
		}

		// Return reverse iterator to reverse beginning
		// Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
		// Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.
		// rbegin points to the element preceding the one that would be pointed to by member end.
		reverse_iterator rbegin() {
			reverse_iterator rev (iterator(this->getTNULL()->left->left));
			return rev;
		}

		const_reverse_iterator rbegin() const {
			const_reverse_iterator rev (iterator(this->getTNULL()->left->left));
			return rev;
		}

		// todo
		// Return reverse iterator to reverse end
		// Returns a reverse iterator pointing to the theoretical element right before the first element in the map container (which is considered its reverse end).
		// The range between map::rbegin and map::rend contains all the elements of the container (in reverse order).
		reverse_iterator rend() {
			reverse_iterator rev (iterator(this->getTNULL()));
			return rev;
		}

		const_reverse_iterator rend() const {
			const_reverse_iterator rev (iterator(this->getTNULL()->left->right));
			return rev;
		}

		//// **** Capacity: ****

		// Test whether container is empty
		// Returns whether the map container is empty (i.e. whether its size is 0).
		// This function does not modify the container in any way. To clear the content of a map container, see map::clear.
		bool empty() const{
			return this->_size == 0;
		}

		// The number of elements in the container.
		// Member type size_type is an unsigned integral type.
		size_type size() const{
			return this->_size; // todo считать у дерева или у мапы?
		}

		// Return maximum size
		// Returns the maximum number of elements that the map container can hold.
		// This is the maximum potential size the container can reach due to known system
		// or library implementation limitations, but the container is by no means guaranteed
		// to be able to reach that size: it can still fail to allocate storage at any point before that size is reached.
		size_type max_size() const{
			return this->_allocator.max_size();
		}

		////  ****  Element access:  ****

		// Access element
		// If k matches the key of an element in the container, the function returns a reference to its mapped value.
		// If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
		// A similar member function, map::at, has the same behavior when an element with the key exists, but throws an exception when it does not.
		mapped_type& operator[] (const key_type& k){
			(*((this->insert(make_pair(k,mapped_type()))).first)).second;
			// todo если не нашли этот ключ в мапе insert
			++this->_size;
			return ;
		}

		//// **** Modifiers: ****


		// Insert elements
		//	Extends the container by inserting new elements, effectively increasing the container size by the number of elements inserted.
		//	Because element keys in a map are unique, the insertion operation checks whether each inserted element has a key equivalent to the one of an element already in the container, and if so, the element is not inserted, returning an iterator to this existing element (if the function returns a value).
		//	For a similar container allowing for duplicate elements, see multimap.
		//	An alternative way to insert elements in a map is by using member function map::operator[].
		//	Internally, map containers keep all their elements sorted by their key following the criterion specified by its comparison object. The elements are always inserted in its respective position following this ordering.
		//	The parameters determine how many elements are inserted and to which values they are initialized:

		// The single element versions (1) return a pair, with its member pair::first set to an iterator
		// pointing to either the newly inserted element or to the element with an equivalent key in the map.
		// The pair::second element in the pair is set to true if a new element was inserted or false if an equivalent key already existed.
		std::pair<iterator,bool> insert (const value_type& val){

			std::pair<iterator, bool> _pair;
			// todo insert проверить циклом по итератору что уникальное значение

			// find
			this->insert_RBT(val);
			++this->_size;
			return std::make_pair((iterator)NULL, true);
		}

		// The versions with a hint (2) return an iterator pointing to either the newly inserted element
		// or to the element that already had an equivalent key in the map.
		iterator insert (iterator position, const value_type& val){
			// todo
		}

		template <class InputIterator>
		void insert (InputIterator first, InputIterator last){
			// todo
		}


		//// Erase elements
		// Removes from the map container either a single element or a range of elements ([first,last)).
		// This effectively reduces the container size by the number of elements removed, which are destroyed.
		void erase (iterator position){
			this->deleteNode(*position);
			--this->_size;
		}

		//
		size_type erase (const key_type& k){
			if (empty())
				return 0; // check it
			Node<value_type> *ptr = findNodeKey(k);
			std::cout<< ptr->data.first << " data data\n";
			this->deleteNode(ptr->data);
			this->upDate_TNULL_node();
			--this->_size;
			return 1;
		}

		void erase (iterator first, iterator last){
			while(first != last){

				erase(first++);

			}
		}

		////	Swap content
		//	Exchanges the content of the container by the content of x, which is another map of the same type. Sizes may differ.
		//	After the call to this member function, the elements in this container are those which were in x before the call,
		//	and the elements of x are those which were in this.
		//	All iterators, references and pointers remain valid for the swapped objects.
		//	Notice that a non-member function exists with the same name, swap,
		//	overloading that algorithm with an optimization that behaves like this member function.
		void swap(Map& x){
			ft::swap(this->_size, x._size);
			ft::swap(this->get_root(), x.get_root());
			ft::swap(this->getTNULL(), x.getTNULL());
		}



		void show()
		{ std::cout << "ROOT "<< this->get_root()->data.first;
			this->print(this->get_root(), 10); }

		void traversal() const{
			std::cout << "tree with size: " << this->_size << std::endl; // _size кол-во нод в дереве без пустых нод
			this->inOrder();
		}


		Node<value_type> *findNodeKey(const key_type &k){
			Node<value_type> * current = this->root;
			while (current != this->getTNULL() && current != NULL) {
				if (k == current->data.first) {
					return current;
				}
				current = _compare(k, current->data.first) ? current->left : current->right;
			}
			return NULL;
		}
		//virual key_type getKey(pointer node){ return Node->value.first}


	private:
		Alloc _allocator;
		key_compare _compare;
		//Node<value_type> *root;
		size_type _size;

	};



	//// **** MapIterator ****

	template <class T>
	class MapIterator{

	public:
	
		typedef ft::Node<T>						*Node_pointer;
		typedef T	value_type;
		typedef T *		pointer;
		typedef T &	reference;

		typedef ptrdiff_t		difference_type;

		typedef std::bidirectional_iterator_tag iterator_category;
		typedef const T &	const_reference;
		typedef const T *	const_pointer;

	private:
		//iterator_type _it;
		Node_pointer NodePtr;

		Node_pointer minimum(Node_pointer node) {
			while (!node->left->is_tnull) {
				node = node->left;
			}
			return node;
		}

		Node_pointer maximum(Node_pointer node) {
			while (!node->right->is_tnull) {
				node = node->right;
			}
			return node;
		}

	public:
		MapIterator() : NodePtr(NULL) {};
		explicit MapIterator(Node_pointer ptr) : NodePtr(ptr) {};

		template <class Iter>
		explicit MapIterator(const MapIterator &rhs) : NodePtr(rhs.NodePtr) {};

		virtual ~MapIterator(){};

		//assignation =
		MapIterator& operator = (const MapIterator &rhs){
			if (this == &rhs)
				return *this;
			NodePtr = rhs.NodePtr;
			return *this;
		}

		// ++iterator
		MapIterator operator++(){
			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->left;

			else if (!this->NodePtr->right->is_tnull)
				this->NodePtr = minimum(this->NodePtr->right);

			else if (this->NodePtr->parent)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while (curr_parent->data.first <= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				this->NodePtr = curr_parent;
			}

			//++_it;
			return *this;
		}

		// iterator++
		MapIterator operator++(int){
			MapIterator tmp(*this);
			//++_it;
			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->left;

			else if (!this->NodePtr->right->is_tnull)
				this->NodePtr = minimum(this->NodePtr->right);

			else if (this->NodePtr->parent)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while (curr_parent->data.first <= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				this->NodePtr = curr_parent;
			}

			return tmp;
		}

		//
		MapIterator operator--(){

			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->right;

			else if (!this->NodePtr->left->is_tnull)
				this->NodePtr = maximum(this->NodePtr->left);

			else if (this->NodePtr->parent)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while (curr_parent->data.first >= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				this->NodePtr = curr_parent;
			}

			//--_it;
			return *this;
		}

		MapIterator operator--(int){
			MapIterator tmp(*this);

			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->right;

			else if (!this->NodePtr->left->is_tnull)
				this->NodePtr = maximum(this->NodePtr->left);

			else if (this->NodePtr->parent)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while (curr_parent->data.first >= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				this->NodePtr = curr_parent;
			}
			
			//--_it;
			return tmp;
		}

		reference operator*(){
			
			return this->NodePtr->data;
		}

		const_reference operator*() const{
				return this->NodePtr->data;
		}

		pointer operator->(){
			return &this->NodePtr->data;
		}

		const_pointer operator->() const{
			return  &this->NodePtr->data;
		}


		bool operator==( const MapIterator &rhs){
			return (NodePtr == rhs.NodePtr);
		}

		bool operator!=( const MapIterator &rhs){
			return (NodePtr != rhs.NodePtr);
		}


//		//// *** Getter for private field _it
//		iterator_type base() const {
//			return _it;
//		}

	//	 friend class Map<class Key, class T,class Compare = std::less<Key>, class Alloc = std::allocator<std::pair<const Key,T>>;


	};

}


	/*
	enum _Rb_tree_color {
		_S_red = false,
		_S_black = true };


	struct _Rb_tree_node_base
	{
		typedef _Rb_tree_node_base* _Base_ptr;
		typedef const _Rb_tree_node_base* _Const_Base_ptr;

		_Rb_tree_color _M_color;
		_Base_ptr _M_parent;
		_Base_ptr _M_left;
		_Base_ptr _M_right;

		static _Base_ptr
		_S_minimum(_Base_ptr __x)
		{
			while (__x->_M_left != 0) __x = __x->_M_left;
			return __x;
		}

		static _Const_Base_ptr
		_S_minimum(_Const_Base_ptr __x)
		{
			while (__x->_M_left != 0) __x = __x->_M_left;
			return __x;
		}

		static _Base_ptr
		_S_maximum(_Base_ptr __x)
		{
			while (__x->_M_right != 0) __x = __x->_M_right;
			return __x;
		}

		static _Const_Base_ptr
		_S_maximum(_Const_Base_ptr __x)
		{
			while (__x->_M_right != 0) __x = __x->_M_right;
			return __x;
		}
	};

	template<typename Key_compare>
	struct _Rb_tree_key_compare
	{
		Key_compare _M_key_compare;

		_Rb_tree_key_compare() : _M_key_compare()
		{ }

		_Rb_tree_key_compare(const Key_compare& __comp) : _M_key_compare(__comp) {}
	}

//	template<typename _Key_compare>
//	struct _Rb_tree_key_compare
//	{
//		_Key_compare _M_key_compare;
//
//		_Rb_tree_key_compare()
//
//
//				: _M_key_compare()
//		{ }
//
//		_Rb_tree_key_compare(const _Key_compare& __comp)
//				: _M_key_compare(__comp)
//		{ }
//# 165 "/usr/include/c++/9/bits/stl_tree.h" 3
//	};


	struct _Rb_tree_header
	{
		_Rb_tree_node_base _M_header;
		size_t _M_node_count;

		_Rb_tree_header()
		{
			_M_header._M_color = _S_red;
			_M_reset();
		}
# 192 "/usr/include/c++/9/bits/stl_tree.h" 3
		void
		_M_move_data(_Rb_tree_header& __from)
		{
			_M_header._M_color = __from._M_header._M_color;
			_M_header._M_parent = __from._M_header._M_parent;
			_M_header._M_left = __from._M_header._M_left;
			_M_header._M_right = __from._M_header._M_right;
			_M_header._M_parent->_M_parent = &_M_header;
			_M_node_count = __from._M_node_count;

			__from._M_reset();
		}

		void
		_M_reset()
		{
			_M_header._M_parent = 0;
			_M_header._M_left = &_M_header;
			_M_header._M_right = &_M_header;
			_M_node_count = 0;
		}
	};

	template<typename _Val>
	struct _Rb_tree_node : public _Rb_tree_node_base
	{
		typedef _Rb_tree_node<_Val>* _Link_type;


		_Val _M_value_field;

		_Val*
		_M_valptr()
		{ return std::__addressof(_M_value_field); }

		const _Val*
		_M_valptr() const
		{ return std::__addressof(_M_value_field); }
# 241 "/usr/include/c++/9/bits/stl_tree.h" 3
	};

	__attribute__ ((__pure__)) _Rb_tree_node_base*
	_Rb_tree_increment(_Rb_tree_node_base* __x) throw ();

	__attribute__ ((__pure__)) const _Rb_tree_node_base*
	_Rb_tree_increment(const _Rb_tree_node_base* __x) throw ();

	__attribute__ ((__pure__)) _Rb_tree_node_base*
	_Rb_tree_decrement(_Rb_tree_node_base* __x) throw ();

	__attribute__ ((__pure__)) const _Rb_tree_node_base*
	_Rb_tree_decrement(const _Rb_tree_node_base* __x) throw ();

	template<typename _Tp>
	struct _Rb_tree_iterator
	{
		typedef _Tp value_type;
		typedef _Tp& reference;
		typedef _Tp* pointer;

		typedef bidirectional_iterator_tag iterator_category;
		typedef ptrdiff_t difference_type;

		typedef _Rb_tree_iterator<_Tp> _Self;
		typedef _Rb_tree_node_base::_Base_ptr _Base_ptr;
		typedef _Rb_tree_node<_Tp>* _Link_type;

		_Rb_tree_iterator()
				: _M_node() { }

		explicit
		_Rb_tree_iterator(_Base_ptr __x)
				: _M_node(__x) { }

		reference
		operator*() const
		{ return *static_cast<_Link_type>(_M_node)->_M_valptr(); }

		pointer
		operator->() const
		{ return static_cast<_Link_type> (_M_node)->_M_valptr(); }

		_Self&
		operator++()
		{
			_M_node = _Rb_tree_increment(_M_node);
			return *this;
		}

		_Self
		operator++(int)
		{
			_Self __tmp = *this;
			_M_node = _Rb_tree_increment(_M_node);
			return __tmp;
		}

		_Self&
		operator--()
		{
			_M_node = _Rb_tree_decrement(_M_node);
			return *this;
		}

		_Self
		operator--(int)
		{
			_Self __tmp = *this;
			_M_node = _Rb_tree_decrement(_M_node);
			return __tmp;
		}

		friend bool
		operator==(const _Self& __x, const _Self& __y)
		{ return __x._M_node == __y._M_node; }

		friend bool
		operator!=(const _Self& __x, const _Self& __y)
		{ return __x._M_node != __y._M_node; }

		_Base_ptr _M_node;
	};

	template<typename _Tp>
	struct _Rb_tree_const_iterator
	{
		typedef _Tp value_type;
		typedef const _Tp& reference;
		typedef const _Tp* pointer;

		typedef _Rb_tree_iterator<_Tp> iterator;

		typedef bidirectional_iterator_tag iterator_category;
		typedef ptrdiff_t difference_type;

		typedef _Rb_tree_const_iterator<_Tp> _Self;
		typedef _Rb_tree_node_base::_Const_Base_ptr _Base_ptr;
		typedef const _Rb_tree_node<_Tp>* _Link_type;

		_Rb_tree_const_iterator()
				: _M_node() { }

		explicit
		_Rb_tree_const_iterator(_Base_ptr __x)
				: _M_node(__x) { }

		_Rb_tree_const_iterator(const iterator& __it)
				: _M_node(__it._M_node) { }

		iterator
		_M_const_cast() const
		{ return iterator(const_cast<typename iterator::_Base_ptr>(_M_node)); }

		reference
		operator*() const
		{ return *static_cast<_Link_type>(_M_node)->_M_valptr(); }

		pointer
		operator->() const
		{ return static_cast<_Link_type>(_M_node)->_M_valptr(); }

		_Self&
		operator++()
		{
			_M_node = _Rb_tree_increment(_M_node);
			return *this;
		}

		_Self
		operator++(int)
		{
			_Self __tmp = *this;
			_M_node = _Rb_tree_increment(_M_node);
			return __tmp;
		}

		_Self&
		operator--()
		{
			_M_node = _Rb_tree_decrement(_M_node);
			return *this;
		}

		_Self
		operator--(int)
		{
			_Self __tmp = *this;
			_M_node = _Rb_tree_decrement(_M_node);
			return __tmp;
		}

		friend bool
		operator==(const _Self& __x, const _Self& __y)
		{ return __x._M_node == __y._M_node; }

		friend bool
		operator!=(const _Self& __x, const _Self& __y)
		{ return __x._M_node != __y._M_node; }

		_Base_ptr _M_node;
	};

	void
	_Rb_tree_insert_and_rebalance(const bool __insert_left,
								  _Rb_tree_node_base* __x,
								  _Rb_tree_node_base* __p,
								  _Rb_tree_node_base& __header) throw ();

	_Rb_tree_node_base*
	_Rb_tree_rebalance_for_erase(_Rb_tree_node_base* const __z,
								 _Rb_tree_node_base& __header) throw ();
# 434 "/usr/include/c++/9/bits/stl_tree.h" 3
	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc = allocator<_Val> >
	class _Rb_tree
	{
		typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
		rebind<_Rb_tree_node<_Val> >::other _Node_allocator;

		typedef __gnu_cxx::__alloc_traits<_Node_allocator> _Alloc_traits;

	protected:
		typedef _Rb_tree_node_base* _Base_ptr;
		typedef const _Rb_tree_node_base* _Const_Base_ptr;
		typedef _Rb_tree_node<_Val>* _Link_type;
		typedef const _Rb_tree_node<_Val>* _Const_Link_type;

	private:


		struct _Reuse_or_alloc_node
		{
			_Reuse_or_alloc_node(_Rb_tree& __t)
					: _M_root(__t._M_root()), _M_nodes(__t._M_rightmost()), _M_t(__t)
			{
				if (_M_root)
				{
					_M_root->_M_parent = 0;

					if (_M_nodes->_M_left)
						_M_nodes = _M_nodes->_M_left;
				}
				else
					_M_nodes = 0;
			}





			~_Reuse_or_alloc_node()
			{ _M_t._M_erase(static_cast<_Link_type>(_M_root)); }

			template<typename _Arg>
			_Link_type

			operator()(const _Arg& __arg)



			{
				_Link_type __node = static_cast<_Link_type>(_M_extract());
				if (__node)
				{
					_M_t._M_destroy_node(__node);
					_M_t._M_construct_node(__node, (__arg));
					return __node;
				}

				return _M_t._M_create_node((__arg));
			}

		private:
			_Base_ptr
			_M_extract()
			{
				if (!_M_nodes)
					return _M_nodes;

				_Base_ptr __node = _M_nodes;
				_M_nodes = _M_nodes->_M_parent;
				if (_M_nodes)
				{
					if (_M_nodes->_M_right == __node)
					{
						_M_nodes->_M_right = 0;

						if (_M_nodes->_M_left)
						{
							_M_nodes = _M_nodes->_M_left;

							while (_M_nodes->_M_right)
								_M_nodes = _M_nodes->_M_right;

							if (_M_nodes->_M_left)
								_M_nodes = _M_nodes->_M_left;
						}
					}
					else
						_M_nodes->_M_left = 0;
				}
				else
					_M_root = 0;

				return __node;
			}

			_Base_ptr _M_root;
			_Base_ptr _M_nodes;
			_Rb_tree& _M_t;
		};



		struct _Alloc_node
		{
			_Alloc_node(_Rb_tree& __t)
					: _M_t(__t) { }

			template<typename _Arg>
			_Link_type

			operator()(const _Arg& __arg) const



			{ return _M_t._M_create_node((__arg)); }

		private:
			_Rb_tree& _M_t;
		};

	public:
		typedef _Key key_type;
		typedef _Val value_type;
		typedef value_type* pointer;
		typedef const value_type* const_pointer;
		typedef value_type& reference;
		typedef const value_type& const_reference;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;
		typedef _Alloc allocator_type;

		_Node_allocator&
		_M_get_Node_allocator()
		{ return this->_M_impl; }

		const _Node_allocator&
		_M_get_Node_allocator() const
		{ return this->_M_impl; }

		allocator_type
		get_allocator() const
		{ return allocator_type(_M_get_Node_allocator()); }

	protected:
		_Link_type
		_M_get_node()
		{ return _Alloc_traits::allocate(_M_get_Node_allocator(), 1); }

		void
		_M_put_node(_Link_type __p)
		{ _Alloc_traits::deallocate(_M_get_Node_allocator(), __p, 1); }


		void
		_M_construct_node(_Link_type __node, const value_type& __x)
		{
			try
			{ get_allocator().construct(__node->_M_valptr(), __x); }
			catch(...)
			{
				_M_put_node(__node);
				throw;
			}
		}

		_Link_type
		_M_create_node(const value_type& __x)
		{
			_Link_type __tmp = _M_get_node();
			_M_construct_node(__tmp, __x);
			return __tmp;
		}
# 636 "/usr/include/c++/9/bits/stl_tree.h" 3
		void
		_M_destroy_node(_Link_type __p)
		{

			get_allocator().destroy(__p->_M_valptr());




		}

		void
		_M_drop_node(_Link_type __p)
		{
			_M_destroy_node(__p);
			_M_put_node(__p);
		}

		template<typename _NodeGen>
		_Link_type
		_M_clone_node(_Const_Link_type __x, _NodeGen& __node_gen)
		{
			_Link_type __tmp = __node_gen(*__x->_M_valptr());
			__tmp->_M_color = __x->_M_color;
			__tmp->_M_left = 0;
			__tmp->_M_right = 0;
			return __tmp;
		}

	protected:




		template<typename _Key_compare,
				bool = __is_pod(_Key_compare)>

		struct _Rb_tree_impl
				: public _Node_allocator
						, public _Rb_tree_key_compare<_Key_compare>
						, public _Rb_tree_header
		{
			typedef _Rb_tree_key_compare<_Key_compare> _Base_key_compare;

			_Rb_tree_impl()



					: _Node_allocator()
			{ }

			_Rb_tree_impl(const _Rb_tree_impl& __x)
					: _Node_allocator(_Alloc_traits::_S_select_on_copy(__x))
					, _Base_key_compare(__x._M_key_compare)
			{ }


			_Rb_tree_impl(const _Key_compare& __comp, const _Node_allocator& __a)
					: _Node_allocator(__a), _Base_key_compare(__comp)
			{ }
# 714 "/usr/include/c++/9/bits/stl_tree.h" 3
		};

		_Rb_tree_impl<_Compare> _M_impl;

	protected:
		_Base_ptr&
		_M_root()
		{ return this->_M_impl._M_header._M_parent; }

		_Const_Base_ptr
		_M_root() const
		{ return this->_M_impl._M_header._M_parent; }

		_Base_ptr&
		_M_leftmost()
		{ return this->_M_impl._M_header._M_left; }

		_Const_Base_ptr
		_M_leftmost() const
		{ return this->_M_impl._M_header._M_left; }

		_Base_ptr&
		_M_rightmost()
		{ return this->_M_impl._M_header._M_right; }

		_Const_Base_ptr
		_M_rightmost() const
		{ return this->_M_impl._M_header._M_right; }

		_Link_type
		_M_begin()
		{ return static_cast<_Link_type>(this->_M_impl._M_header._M_parent); }

		_Const_Link_type
		_M_begin() const
		{
			return static_cast<_Const_Link_type>
			(this->_M_impl._M_header._M_parent);
		}

		_Base_ptr
		_M_end()
		{ return &this->_M_impl._M_header; }

		_Const_Base_ptr
		_M_end() const
		{ return &this->_M_impl._M_header; }

		static const_reference
		_S_value(_Const_Link_type __x)
		{ return *__x->_M_valptr(); }

		static const _Key&
		_S_key(_Const_Link_type __x)
		{
# 785 "/usr/include/c++/9/bits/stl_tree.h" 3
			return _KeyOfValue()(*__x->_M_valptr());
		}

		static _Link_type
		_S_left(_Base_ptr __x)
		{ return static_cast<_Link_type>(__x->_M_left); }

		static _Const_Link_type
		_S_left(_Const_Base_ptr __x)
		{ return static_cast<_Const_Link_type>(__x->_M_left); }

		static _Link_type
		_S_right(_Base_ptr __x)
		{ return static_cast<_Link_type>(__x->_M_right); }

		static _Const_Link_type
		_S_right(_Const_Base_ptr __x)
		{ return static_cast<_Const_Link_type>(__x->_M_right); }

		static const_reference
		_S_value(_Const_Base_ptr __x)
		{ return *static_cast<_Const_Link_type>(__x)->_M_valptr(); }

		static const _Key&
		_S_key(_Const_Base_ptr __x)
		{ return _S_key(static_cast<_Const_Link_type>(__x)); }

		static _Base_ptr
		_S_minimum(_Base_ptr __x)
		{ return _Rb_tree_node_base::_S_minimum(__x); }

		static _Const_Base_ptr
		_S_minimum(_Const_Base_ptr __x)
		{ return _Rb_tree_node_base::_S_minimum(__x); }

		static _Base_ptr
		_S_maximum(_Base_ptr __x)
		{ return _Rb_tree_node_base::_S_maximum(__x); }

		static _Const_Base_ptr
		_S_maximum(_Const_Base_ptr __x)
		{ return _Rb_tree_node_base::_S_maximum(__x); }

	public:
		typedef _Rb_tree_iterator<value_type> iterator;
		typedef _Rb_tree_const_iterator<value_type> const_iterator;

		typedef std::reverse_iterator<iterator> reverse_iterator;
		typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
# 842 "/usr/include/c++/9/bits/stl_tree.h" 3
		pair<_Base_ptr, _Base_ptr>
		_M_get_insert_unique_pos(const key_type& __k);

		pair<_Base_ptr, _Base_ptr>
		_M_get_insert_equal_pos(const key_type& __k);

		pair<_Base_ptr, _Base_ptr>
		_M_get_insert_hint_unique_pos(const_iterator __pos,
									  const key_type& __k);

		pair<_Base_ptr, _Base_ptr>
		_M_get_insert_hint_equal_pos(const_iterator __pos,
									 const key_type& __k);

	private:
# 879 "/usr/include/c++/9/bits/stl_tree.h" 3
		template<typename _NodeGen>
		iterator
		_M_insert_(_Base_ptr __x, _Base_ptr __y,
				   const value_type& __v, _NodeGen&);



		iterator
		_M_insert_lower(_Base_ptr __y, const value_type& __v);

		iterator
		_M_insert_equal_lower(const value_type& __x);


		template<typename _NodeGen>
		_Link_type
		_M_copy(_Const_Link_type __x, _Base_ptr __p, _NodeGen&);

		template<typename _NodeGen>
		_Link_type
		_M_copy(const _Rb_tree& __x, _NodeGen& __gen)
		{
			_Link_type __root = _M_copy(__x._M_begin(), _M_end(), __gen);
			_M_leftmost() = _S_minimum(__root);
			_M_rightmost() = _S_maximum(__root);
			_M_impl._M_node_count = __x._M_impl._M_node_count;
			return __root;
		}

		_Link_type
		_M_copy(const _Rb_tree& __x)
		{
			_Alloc_node __an(*this);
			return _M_copy(__x, __an);
		}

		void
		_M_erase(_Link_type __x);

		iterator
		_M_lower_bound(_Link_type __x, _Base_ptr __y,
					   const _Key& __k);

		const_iterator
		_M_lower_bound(_Const_Link_type __x, _Const_Base_ptr __y,
					   const _Key& __k) const;

		iterator
		_M_upper_bound(_Link_type __x, _Base_ptr __y,
					   const _Key& __k);

		const_iterator
		_M_upper_bound(_Const_Link_type __x, _Const_Base_ptr __y,
					   const _Key& __k) const;

	public:


		_Rb_tree() { }




		_Rb_tree(const _Compare& __comp,
				 const allocator_type& __a = allocator_type())
				: _M_impl(__comp, _Node_allocator(__a)) { }

		_Rb_tree(const _Rb_tree& __x)
				: _M_impl(__x._M_impl)
		{
			if (__x._M_root() != 0)
				_M_root() = _M_copy(__x);
		}
# 994 "/usr/include/c++/9/bits/stl_tree.h" 3
		~_Rb_tree()
		{ _M_erase(_M_begin()); }

		_Rb_tree&
		operator=(const _Rb_tree& __x);


		_Compare
		key_comp() const
		{ return _M_impl._M_key_compare; }

		iterator
		begin()
		{ return iterator(this->_M_impl._M_header._M_left); }

		const_iterator
		begin() const
		{ return const_iterator(this->_M_impl._M_header._M_left); }

		iterator
		end()
		{ return iterator(&this->_M_impl._M_header); }

		const_iterator
		end() const
		{ return const_iterator(&this->_M_impl._M_header); }

		reverse_iterator
		rbegin()
		{ return reverse_iterator(end()); }

		const_reverse_iterator
		rbegin() const
		{ return const_reverse_iterator(end()); }

		reverse_iterator
		rend()
		{ return reverse_iterator(begin()); }

		const_reverse_iterator
		rend() const
		{ return const_reverse_iterator(begin()); }

		bool
		empty() const
		{ return _M_impl._M_node_count == 0; }

		size_type
		size() const
		{ return _M_impl._M_node_count; }

		size_type
		max_size() const
		{ return _Alloc_traits::max_size(_M_get_Node_allocator()); }

		void
		swap(_Rb_tree& __t)
		;
# 1142 "/usr/include/c++/9/bits/stl_tree.h" 3
		pair<iterator, bool>
		_M_insert_unique(const value_type& __x);

		iterator
		_M_insert_equal(const value_type& __x);

		template<typename _NodeGen>
		iterator
		_M_insert_unique_(const_iterator __pos, const value_type& __x,
						  _NodeGen&);

		iterator
		_M_insert_unique_(const_iterator __pos, const value_type& __x)
		{
			_Alloc_node __an(*this);
			return _M_insert_unique_(__pos, __x, __an);
		}

		template<typename _NodeGen>
		iterator
		_M_insert_equal_(const_iterator __pos, const value_type& __x,
						 _NodeGen&);
		iterator
		_M_insert_equal_(const_iterator __pos, const value_type& __x)
		{
			_Alloc_node __an(*this);
			return _M_insert_equal_(__pos, __x, __an);
		}

		template<typename _InputIterator>
		void
		_M_insert_range_unique(_InputIterator __first, _InputIterator __last)
		{
			_Alloc_node __an(*this);
			for (; __first != __last; ++__first)
				_M_insert_unique_(end(), *__first, __an);
		}

		template<typename _InputIterator>
		void
		_M_insert_range_equal(_InputIterator __first, _InputIterator __last)
		{
			_Alloc_node __an(*this);
			for (; __first != __last; ++__first)
				_M_insert_equal_(end(), *__first, __an);
		}


	private:
		void
		_M_erase_aux(const_iterator __position);

		void
		_M_erase_aux(const_iterator __first, const_iterator __last);

	public:
# 1224 "/usr/include/c++/9/bits/stl_tree.h" 3
		void
		erase(iterator __position)
		{
			;
			_M_erase_aux(__position);
		}

		void
		erase(const_iterator __position)
		{
			;
			_M_erase_aux(__position);
		}

		size_type
		erase(const key_type& __x);
# 1252 "/usr/include/c++/9/bits/stl_tree.h" 3
		void
		erase(iterator __first, iterator __last)
		{ _M_erase_aux(__first, __last); }

		void
		erase(const_iterator __first, const_iterator __last)
		{ _M_erase_aux(__first, __last); }

		void
		erase(const key_type* __first, const key_type* __last);

		void
		clear()
		{
			_M_erase(_M_begin());
			_M_impl._M_reset();
		}


		iterator
		find(const key_type& __k);

		const_iterator
		find(const key_type& __k) const;

		size_type
		count(const key_type& __k) const;

		iterator
		lower_bound(const key_type& __k)
		{ return _M_lower_bound(_M_begin(), _M_end(), __k); }

		const_iterator
		lower_bound(const key_type& __k) const
		{ return _M_lower_bound(_M_begin(), _M_end(), __k); }

		iterator
		upper_bound(const key_type& __k)
		{ return _M_upper_bound(_M_begin(), _M_end(), __k); }

		const_iterator
		upper_bound(const key_type& __k) const
		{ return _M_upper_bound(_M_begin(), _M_end(), __k); }

		pair<iterator, iterator>
		equal_range(const key_type& __k);

		pair<const_iterator, const_iterator>
		equal_range(const key_type& __k) const;
# 1411 "/usr/include/c++/9/bits/stl_tree.h" 3
		bool
		__rb_verify() const;
# 1615 "/usr/include/c++/9/bits/stl_tree.h" 3
		friend bool
		operator==(const _Rb_tree& __x, const _Rb_tree& __y)
		{
			return __x.size() == __y.size()
				   && std::equal(__x.begin(), __x.end(), __y.begin());
		}

		friend bool
		operator<(const _Rb_tree& __x, const _Rb_tree& __y)
		{
			return std::lexicographical_compare(__x.begin(), __x.end(),
												__y.begin(), __y.end());
		}

		friend bool
		operator!=(const _Rb_tree& __x, const _Rb_tree& __y)
		{ return !(__x == __y); }

		friend bool
		operator>(const _Rb_tree& __x, const _Rb_tree& __y)
		{ return __y < __x; }

		friend bool
		operator<=(const _Rb_tree& __x, const _Rb_tree& __y)
		{ return !(__y < __x); }

		friend bool
		operator>=(const _Rb_tree& __x, const _Rb_tree& __y)
		{ return !(__x < __y); }
	};

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	inline void
	swap(_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
		 _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
	{ __x.swap(__y); }
# 1754 "/usr/include/c++/9/bits/stl_tree.h" 3
	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	operator=(const _Rb_tree& __x)
	{
		if (this != &__x)
		{
# 1779 "/usr/include/c++/9/bits/stl_tree.h" 3
			_Reuse_or_alloc_node __roan(*this);
			_M_impl._M_reset();
			_M_impl._M_key_compare = __x._M_impl._M_key_compare;
			if (__x._M_root() != 0)
				_M_root() = _M_copy(__x, __roan);
		}

		return *this;
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	template<typename _NodeGen>

	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_insert_(_Base_ptr __x, _Base_ptr __p,



			   const _Val& __v,

			   _NodeGen& __node_gen)
	{
		bool __insert_left = (__x != 0 || __p == _M_end()
							  || _M_impl._M_key_compare(_KeyOfValue()(__v),
														_S_key(__p)));

		_Link_type __z = __node_gen((__v));

		_Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
									  this->_M_impl._M_header);
		++_M_impl._M_node_count;
		return iterator(__z);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



	_M_insert_lower(_Base_ptr __p, const _Val& __v)

	{
		bool __insert_left = (__p == _M_end()
							  || !_M_impl._M_key_compare(_S_key(__p),
														 _KeyOfValue()(__v)));

		_Link_type __z = _M_create_node((__v));

		_Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
									  this->_M_impl._M_header);
		++_M_impl._M_node_count;
		return iterator(__z);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



	_M_insert_equal_lower(const _Val& __v)

	{
		_Link_type __x = _M_begin();
		_Base_ptr __y = _M_end();
		while (__x != 0)
		{
			__y = __x;
			__x = !_M_impl._M_key_compare(_S_key(__x), _KeyOfValue()(__v)) ?
				  _S_left(__x) : _S_right(__x);
		}
		return _M_insert_lower(__y, (__v));
	}

	template<typename _Key, typename _Val, typename _KoV,
			typename _Compare, typename _Alloc>
	template<typename _NodeGen>
	typename _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::_Link_type
	_Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::
	_M_copy(_Const_Link_type __x, _Base_ptr __p, _NodeGen& __node_gen)
	{

		_Link_type __top = _M_clone_node(__x, __node_gen);
		__top->_M_parent = __p;

		try
		{
			if (__x->_M_right)
				__top->_M_right = _M_copy(_S_right(__x), __top, __node_gen);
			__p = __top;
			__x = _S_left(__x);

			while (__x != 0)
			{
				_Link_type __y = _M_clone_node(__x, __node_gen);
				__p->_M_left = __y;
				__y->_M_parent = __p;
				if (__x->_M_right)
					__y->_M_right = _M_copy(_S_right(__x), __y, __node_gen);
				__p = __y;
				__x = _S_left(__x);
			}
		}
		catch(...)
		{
			_M_erase(__top);
			throw;
		}
		return __top;
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	void
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_erase(_Link_type __x)
	{

		while (__x != 0)
		{
			_M_erase(_S_right(__x));
			_Link_type __y = _S_left(__x);
			_M_drop_node(__x);
			__x = __y;
		}
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_lower_bound(_Link_type __x, _Base_ptr __y,
				   const _Key& __k)
	{
		while (__x != 0)
			if (!_M_impl._M_key_compare(_S_key(__x), __k))
				__y = __x, __x = _S_left(__x);
			else
				__x = _S_right(__x);
		return iterator(__y);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::const_iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_lower_bound(_Const_Link_type __x, _Const_Base_ptr __y,
				   const _Key& __k) const
	{
		while (__x != 0)
			if (!_M_impl._M_key_compare(_S_key(__x), __k))
				__y = __x, __x = _S_left(__x);
			else
				__x = _S_right(__x);
		return const_iterator(__y);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_upper_bound(_Link_type __x, _Base_ptr __y,
				   const _Key& __k)
	{
		while (__x != 0)
			if (_M_impl._M_key_compare(__k, _S_key(__x)))
				__y = __x, __x = _S_left(__x);
			else
				__x = _S_right(__x);
		return iterator(__y);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::const_iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_upper_bound(_Const_Link_type __x, _Const_Base_ptr __y,
				   const _Key& __k) const
	{
		while (__x != 0)
			if (_M_impl._M_key_compare(__k, _S_key(__x)))
				__y = __x, __x = _S_left(__x);
			else
				__x = _S_right(__x);
		return const_iterator(__y);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::iterator,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::iterator>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	equal_range(const _Key& __k)
	{
		_Link_type __x = _M_begin();
		_Base_ptr __y = _M_end();
		while (__x != 0)
		{
			if (_M_impl._M_key_compare(_S_key(__x), __k))
				__x = _S_right(__x);
			else if (_M_impl._M_key_compare(__k, _S_key(__x)))
				__y = __x, __x = _S_left(__x);
			else
			{
				_Link_type __xu(__x);
				_Base_ptr __yu(__y);
				__y = __x, __x = _S_left(__x);
				__xu = _S_right(__xu);
				return pair<iterator,
						iterator>(_M_lower_bound(__x, __y, __k),
								  _M_upper_bound(__xu, __yu, __k));
			}
		}
		return pair<iterator, iterator>(iterator(__y),
										iterator(__y));
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::const_iterator,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::const_iterator>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	equal_range(const _Key& __k) const
	{
		_Const_Link_type __x = _M_begin();
		_Const_Base_ptr __y = _M_end();
		while (__x != 0)
		{
			if (_M_impl._M_key_compare(_S_key(__x), __k))
				__x = _S_right(__x);
			else if (_M_impl._M_key_compare(__k, _S_key(__x)))
				__y = __x, __x = _S_left(__x);
			else
			{
				_Const_Link_type __xu(__x);
				_Const_Base_ptr __yu(__y);
				__y = __x, __x = _S_left(__x);
				__xu = _S_right(__xu);
				return pair<const_iterator,
						const_iterator>(_M_lower_bound(__x, __y, __k),
										_M_upper_bound(__xu, __yu, __k));
			}
		}
		return pair<const_iterator, const_iterator>(const_iterator(__y),
													const_iterator(__y));
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	void
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	swap(_Rb_tree& __t)

	{
		if (_M_root() == 0)
		{
			if (__t._M_root() != 0)
				_M_impl._M_move_data(__t._M_impl);
		}
		else if (__t._M_root() == 0)
			__t._M_impl._M_move_data(_M_impl);
		else
		{
			std::swap(_M_root(),__t._M_root());
			std::swap(_M_leftmost(),__t._M_leftmost());
			std::swap(_M_rightmost(),__t._M_rightmost());

			_M_root()->_M_parent = _M_end();
			__t._M_root()->_M_parent = __t._M_end();
			std::swap(this->_M_impl._M_node_count, __t._M_impl._M_node_count);
		}

		std::swap(this->_M_impl._M_key_compare, __t._M_impl._M_key_compare);

		_Alloc_traits::_S_on_swap(_M_get_Node_allocator(),
								  __t._M_get_Node_allocator());
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::_Base_ptr,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::_Base_ptr>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_get_insert_unique_pos(const key_type& __k)
	{
		typedef pair<_Base_ptr, _Base_ptr> _Res;
		_Link_type __x = _M_begin();
		_Base_ptr __y = _M_end();
		bool __comp = true;
		while (__x != 0)
		{
			__y = __x;
			__comp = _M_impl._M_key_compare(__k, _S_key(__x));
			__x = __comp ? _S_left(__x) : _S_right(__x);
		}
		iterator __j = iterator(__y);
		if (__comp)
		{
			if (__j == begin())
				return _Res(__x, __y);
			else
				--__j;
		}
		if (_M_impl._M_key_compare(_S_key(__j._M_node), __k))
			return _Res(__x, __y);
		return _Res(__j._M_node, 0);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::_Base_ptr,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::_Base_ptr>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_get_insert_equal_pos(const key_type& __k)
	{
		typedef pair<_Base_ptr, _Base_ptr> _Res;
		_Link_type __x = _M_begin();
		_Base_ptr __y = _M_end();
		while (__x != 0)
		{
			__y = __x;
			__x = _M_impl._M_key_compare(__k, _S_key(__x)) ?
				  _S_left(__x) : _S_right(__x);
		}
		return _Res(__x, __y);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::iterator, bool>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



	_M_insert_unique(const _Val& __v)

	{
		typedef pair<iterator, bool> _Res;
		pair<_Base_ptr, _Base_ptr> __res
				= _M_get_insert_unique_pos(_KeyOfValue()(__v));

		if (__res.second)
		{
			_Alloc_node __an(*this);
			return _Res(_M_insert_(__res.first, __res.second,
								   (__v), __an),
						true);
		}

		return _Res(iterator(__res.first), false);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



	_M_insert_equal(const _Val& __v)

	{
		pair<_Base_ptr, _Base_ptr> __res
				= _M_get_insert_equal_pos(_KeyOfValue()(__v));
		_Alloc_node __an(*this);
		return _M_insert_(__res.first, __res.second,
						  (__v), __an);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::_Base_ptr,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::_Base_ptr>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_get_insert_hint_unique_pos(const_iterator __position,
								  const key_type& __k)
	{
		iterator __pos = __position._M_const_cast();
		typedef pair<_Base_ptr, _Base_ptr> _Res;


		if (__pos._M_node == _M_end())
		{
			if (size() > 0
				&& _M_impl._M_key_compare(_S_key(_M_rightmost()), __k))
				return _Res(0, _M_rightmost());
			else
				return _M_get_insert_unique_pos(__k);
		}
		else if (_M_impl._M_key_compare(__k, _S_key(__pos._M_node)))
		{

			iterator __before = __pos;
			if (__pos._M_node == _M_leftmost())
				return _Res(_M_leftmost(), _M_leftmost());
			else if (_M_impl._M_key_compare(_S_key((--__before)._M_node), __k))
			{
				if (_S_right(__before._M_node) == 0)
					return _Res(0, __before._M_node);
				else
					return _Res(__pos._M_node, __pos._M_node);
			}
			else
				return _M_get_insert_unique_pos(__k);
		}
		else if (_M_impl._M_key_compare(_S_key(__pos._M_node), __k))
		{

			iterator __after = __pos;
			if (__pos._M_node == _M_rightmost())
				return _Res(0, _M_rightmost());
			else if (_M_impl._M_key_compare(__k, _S_key((++__after)._M_node)))
			{
				if (_S_right(__pos._M_node) == 0)
					return _Res(0, __pos._M_node);
				else
					return _Res(__after._M_node, __after._M_node);
			}
			else
				return _M_get_insert_unique_pos(__k);
		}
		else

			return _Res(__pos._M_node, 0);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	template<typename _NodeGen>

	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_insert_unique_(const_iterator __position,



					  const _Val& __v,

					  _NodeGen& __node_gen)
	{
		pair<_Base_ptr, _Base_ptr> __res
				= _M_get_insert_hint_unique_pos(__position, _KeyOfValue()(__v));

		if (__res.second)
			return _M_insert_(__res.first, __res.second,
							  (__v),
							  __node_gen);
		return iterator(__res.first);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::_Base_ptr,
			typename _Rb_tree<_Key, _Val, _KeyOfValue,
					_Compare, _Alloc>::_Base_ptr>
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_get_insert_hint_equal_pos(const_iterator __position, const key_type& __k)
	{
		iterator __pos = __position._M_const_cast();
		typedef pair<_Base_ptr, _Base_ptr> _Res;


		if (__pos._M_node == _M_end())
		{
			if (size() > 0
				&& !_M_impl._M_key_compare(__k, _S_key(_M_rightmost())))
				return _Res(0, _M_rightmost());
			else
				return _M_get_insert_equal_pos(__k);
		}
		else if (!_M_impl._M_key_compare(_S_key(__pos._M_node), __k))
		{

			iterator __before = __pos;
			if (__pos._M_node == _M_leftmost())
				return _Res(_M_leftmost(), _M_leftmost());
			else if (!_M_impl._M_key_compare(__k, _S_key((--__before)._M_node)))
			{
				if (_S_right(__before._M_node) == 0)
					return _Res(0, __before._M_node);
				else
					return _Res(__pos._M_node, __pos._M_node);
			}
			else
				return _M_get_insert_equal_pos(__k);
		}
		else
		{

			iterator __after = __pos;
			if (__pos._M_node == _M_rightmost())
				return _Res(0, _M_rightmost());
			else if (!_M_impl._M_key_compare(_S_key((++__after)._M_node), __k))
			{
				if (_S_right(__pos._M_node) == 0)
					return _Res(0, __pos._M_node);
				else
					return _Res(__after._M_node, __after._M_node);
			}
			else
				return _Res(0, 0);
		}
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>



	template<typename _NodeGen>

	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_insert_equal_(const_iterator __position,



					 const _Val& __v,

					 _NodeGen& __node_gen)
	{
		pair<_Base_ptr, _Base_ptr> __res
				= _M_get_insert_hint_equal_pos(__position, _KeyOfValue()(__v));

		if (__res.second)
			return _M_insert_(__res.first, __res.second,
							  (__v),
							  __node_gen);

		return _M_insert_equal_lower((__v));
	}
# 2501 "/usr/include/c++/9/bits/stl_tree.h" 3
	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	void
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_erase_aux(const_iterator __position)
	{
		_Link_type __y =
				static_cast<_Link_type>(_Rb_tree_rebalance_for_erase
						(const_cast<_Base_ptr>(__position._M_node),
						 this->_M_impl._M_header));
		_M_drop_node(__y);
		--_M_impl._M_node_count;
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	void
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	_M_erase_aux(const_iterator __first, const_iterator __last)
	{
		if (__first == begin() && __last == end())
			clear();
		else
			while (__first != __last)
				_M_erase_aux(__first++);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	erase(const _Key& __x)
	{
		pair<iterator, iterator> __p = equal_range(__x);
		const size_type __old_size = size();
		_M_erase_aux(__p.first, __p.second);
		return __old_size - size();
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	void
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	erase(const _Key* __first, const _Key* __last)
	{
		while (__first != __last)
			erase(*__first++);
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	find(const _Key& __k)
	{
		iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
		return (__j == end()
				|| _M_impl._M_key_compare(__k,
										  _S_key(__j._M_node))) ? end() : __j;
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue,
			_Compare, _Alloc>::const_iterator
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	find(const _Key& __k) const
	{
		const_iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
		return (__j == end()
				|| _M_impl._M_key_compare(__k,
										  _S_key(__j._M_node))) ? end() : __j;
	}

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
	_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
	count(const _Key& __k) const
	{
		pair<const_iterator, const_iterator> __p = equal_range(__k);
		const size_type __n = std::distance(__p.first, __p.second);
		return __n;
	}

	__attribute__ ((__pure__)) unsigned int
	_Rb_tree_black_count(const _Rb_tree_node_base* __node,
						 const _Rb_tree_node_base* __root) throw ();

	template<typename _Key, typename _Val, typename _KeyOfValue,
			typename _Compare, typename _Alloc>
	bool
	_Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::__rb_verify() const
	{
		if (_M_impl._M_node_count == 0 || begin() == end())
			return _M_impl._M_node_count == 0 && begin() == end()
				   && this->_M_impl._M_header._M_left == _M_end()
				   && this->_M_impl._M_header._M_right == _M_end();

		unsigned int __len = _Rb_tree_black_count(_M_leftmost(), _M_root());
		for (const_iterator __it = begin(); __it != end(); ++__it)
		{
			_Const_Link_type __x = static_cast<_Const_Link_type>(__it._M_node);
			_Const_Link_type __L = _S_left(__x);
			_Const_Link_type __R = _S_right(__x);

			if (__x->_M_color == _S_red)
				if ((__L && __L->_M_color == _S_red)
					|| (__R && __R->_M_color == _S_red))
					return false;

			if (__L && _M_impl._M_key_compare(_S_key(__x), _S_key(__L)))
				return false;
			if (__R && _M_impl._M_key_compare(_S_key(__R), _S_key(__x)))
				return false;

			if (!__L && !__R && _Rb_tree_black_count(__x, _M_root()) != __len)
				return false;
		}

		if (_M_leftmost() != _Rb_tree_node_base::_S_minimum(_M_root()))
			return false;
		if (_M_rightmost() != _Rb_tree_node_base::_S_maximum(_M_root()))
			return false;
		return true;
	}
# 2645 "/usr/include/c++/9/bits/stl_tree.h" 3

}
# 61 "/usr/include/c++/9/map" 2 3
# 1 "/usr/include/c++/9/bits/stl_map.h" 1 3
# 66 "/usr/include/c++/9/bits/stl_map.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



	template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	class multimap;
# 98 "/usr/include/c++/9/bits/stl_map.h" 3
	template <typename _Key, typename _Tp, typename _Compare = std::less<_Key>, typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
	class map
	{
	public:
		typedef _Key key_type;
		typedef _Tp mapped_type;
		typedef std::pair<const _Key, _Tp> value_type;
		typedef _Compare key_compare;
		typedef _Alloc allocator_type;

	private:
# 126 "/usr/include/c++/9/bits/stl_map.h" 3
	public:
		class value_compare
				: public std::binary_function<value_type, value_type, bool>
		{
			friend class map<_Key, _Tp, _Compare, _Alloc>;
		protected:
			_Compare comp;

			value_compare(_Compare __c)
					: comp(__c) { }

		public:
			bool operator()(const value_type& __x, const value_type& __y) const
			{ return comp(__x.first, __y.first); }
		};

	private:

		typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
		rebind<value_type>::other _Pair_alloc_type;

		typedef _Rb_tree<key_type, value_type, _Select1st<value_type>,
		key_compare, _Pair_alloc_type> _Rep_type;


		_Rep_type _M_t;

		typedef __gnu_cxx::__alloc_traits<_Pair_alloc_type> _Alloc_traits;

	public:


		typedef typename _Alloc_traits::pointer pointer;
		typedef typename _Alloc_traits::const_pointer const_pointer;
		typedef typename _Alloc_traits::reference reference;
		typedef typename _Alloc_traits::const_reference const_reference;
		typedef typename _Rep_type::iterator iterator;
		typedef typename _Rep_type::const_iterator const_iterator;
		typedef typename _Rep_type::size_type size_type;
		typedef typename _Rep_type::difference_type difference_type;
		typedef typename _Rep_type::reverse_iterator reverse_iterator;
		typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
# 181 "/usr/include/c++/9/bits/stl_map.h" 3
		map() : _M_t() { }
# 191 "/usr/include/c++/9/bits/stl_map.h" 3
		explicit
		map(const _Compare& __comp,
			const allocator_type& __a = allocator_type())
				: _M_t(__comp, _Pair_alloc_type(__a)) { }







		map(const map& __x)
				: _M_t(__x._M_t) { }
# 270 "/usr/include/c++/9/bits/stl_map.h" 3
		template<typename _InputIterator>
		map(_InputIterator __first, _InputIterator __last)
				: _M_t()
		{ _M_t._M_insert_range_unique(__first, __last); }
# 287 "/usr/include/c++/9/bits/stl_map.h" 3
		template<typename _InputIterator>
		map(_InputIterator __first, _InputIterator __last,
			const _Compare& __comp,
			const allocator_type& __a = allocator_type())
				: _M_t(__comp, _Pair_alloc_type(__a))
		{ _M_t._M_insert_range_unique(__first, __last); }
# 309 "/usr/include/c++/9/bits/stl_map.h" 3
		map&
		operator=(const map& __x)
		{
			_M_t = __x._M_t;
			return *this;
		}
# 343 "/usr/include/c++/9/bits/stl_map.h" 3
		allocator_type
		get_allocator() const
		{ return allocator_type(_M_t.get_allocator()); }







		iterator
		begin()
		{ return _M_t.begin(); }






		const_iterator
		begin() const
		{ return _M_t.begin(); }






		iterator
		end()
		{ return _M_t.end(); }






		const_iterator
		end() const
		{ return _M_t.end(); }






		reverse_iterator
		rbegin()
		{ return _M_t.rbegin(); }






		const_reverse_iterator
		rbegin() const
		{ return _M_t.rbegin(); }






		reverse_iterator
		rend()
		{ return _M_t.rend(); }






		const_reverse_iterator
		rend() const
		{ return _M_t.rend(); }
# 462 "/usr/include/c++/9/bits/stl_map.h" 3
		bool
		empty() const
		{ return _M_t.empty(); }


		size_type
		size() const
		{ return _M_t.size(); }


		size_type
		max_size() const
		{ return _M_t.max_size(); }
# 489 "/usr/include/c++/9/bits/stl_map.h" 3
		mapped_type&
		operator[](const key_type& __k)
		{



			iterator __i = lower_bound(__k);

			if (__i == end() || key_comp()(__k, (*__i).first))





				__i = insert(__i, value_type(__k, mapped_type()));

			return (*__i).second;
		}
# 534 "/usr/include/c++/9/bits/stl_map.h" 3
		mapped_type&
		at(const key_type& __k)
		{
			iterator __i = lower_bound(__k);
			if (__i == end() || key_comp()(__k, (*__i).first))
				__throw_out_of_range(("map::at"));
			return (*__i).second;
		}

		const mapped_type&
		at(const key_type& __k) const
		{
			const_iterator __i = lower_bound(__k);
			if (__i == end() || key_comp()(__k, (*__i).first))
				__throw_out_of_range(("map::at"));
			return (*__i).second;
		}
# 800 "/usr/include/c++/9/bits/stl_map.h" 3
		std::pair<iterator, bool>
		insert(const value_type& __x)
		{ return _M_t._M_insert_unique(__x); }
# 856 "/usr/include/c++/9/bits/stl_map.h" 3
		iterator



		insert(iterator __position, const value_type& __x)

		{ return _M_t._M_insert_unique_(__position, __x); }
# 889 "/usr/include/c++/9/bits/stl_map.h" 3
		template<typename _InputIterator>
		void
		insert(_InputIterator __first, _InputIterator __last)
		{ _M_t._M_insert_range_unique(__first, __last); }
# 1050 "/usr/include/c++/9/bits/stl_map.h" 3
		void
		erase(iterator __position)
		{ _M_t.erase(__position); }
# 1066 "/usr/include/c++/9/bits/stl_map.h" 3
		size_type
		erase(const key_type& __x)
		{ return _M_t.erase(__x); }
# 1102 "/usr/include/c++/9/bits/stl_map.h" 3
		void
		erase(iterator __first, iterator __last)
		{ _M_t.erase(__first, __last); }
# 1120 "/usr/include/c++/9/bits/stl_map.h" 3
		void
		swap(map& __x)

		{ _M_t.swap(__x._M_t); }







		void
		clear()
		{ _M_t.clear(); }






		key_compare
		key_comp() const
		{ return _M_t.key_comp(); }





		value_compare
		value_comp() const
		{ return value_compare(_M_t.key_comp()); }
# 1167 "/usr/include/c++/9/bits/stl_map.h" 3
		iterator
		find(const key_type& __x)
		{ return _M_t.find(__x); }
# 1192 "/usr/include/c++/9/bits/stl_map.h" 3
		const_iterator
		find(const key_type& __x) const
		{ return _M_t.find(__x); }
# 1213 "/usr/include/c++/9/bits/stl_map.h" 3
		size_type
		count(const key_type& __x) const
		{ return _M_t.find(__x) == _M_t.end() ? 0 : 1; }
# 1256 "/usr/include/c++/9/bits/stl_map.h" 3
		iterator
		lower_bound(const key_type& __x)
		{ return _M_t.lower_bound(__x); }
# 1281 "/usr/include/c++/9/bits/stl_map.h" 3
		const_iterator
		lower_bound(const key_type& __x) const
		{ return _M_t.lower_bound(__x); }
# 1301 "/usr/include/c++/9/bits/stl_map.h" 3
		iterator
		upper_bound(const key_type& __x)
		{ return _M_t.upper_bound(__x); }
# 1321 "/usr/include/c++/9/bits/stl_map.h" 3
		const_iterator
		upper_bound(const key_type& __x) const
		{ return _M_t.upper_bound(__x); }
# 1350 "/usr/include/c++/9/bits/stl_map.h" 3
		std::pair<iterator, iterator>
		equal_range(const key_type& __x)
		{ return _M_t.equal_range(__x); }
# 1379 "/usr/include/c++/9/bits/stl_map.h" 3
		std::pair<const_iterator, const_iterator>
		equal_range(const key_type& __x) const
		{ return _M_t.equal_range(__x); }
# 1396 "/usr/include/c++/9/bits/stl_map.h" 3
		template<typename _K1, typename _T1, typename _C1, typename _A1>
		friend bool
		operator==(const map<_K1, _T1, _C1, _A1>&,
				   const map<_K1, _T1, _C1, _A1>&);

		template<typename _K1, typename _T1, typename _C1, typename _A1>
		friend bool
		operator<(const map<_K1, _T1, _C1, _A1>&,
				  const map<_K1, _T1, _C1, _A1>&);
	};
# 1453 "/usr/include/c++/9/bits/stl_map.h" 3
	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			   const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return __x._M_t == __y._M_t; }
# 1470 "/usr/include/c++/9/bits/stl_map.h" 3
	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator<(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			  const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return __x._M_t < __y._M_t; }


	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator!=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			   const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return !(__x == __y); }


	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator>(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			  const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return __y < __x; }


	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator<=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			   const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return !(__y < __x); }


	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline bool
	operator>=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
			   const map<_Key, _Tp, _Compare, _Alloc>& __y)
	{ return !(__x < __y); }


	template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
	inline void
	swap(map<_Key, _Tp, _Compare, _Alloc>& __x,
		 map<_Key, _Tp, _Compare, _Alloc>& __y)

	{ __x.swap(__y); }
	 */


#endif //FT_CONTAINERS_FT_MAP_HPP
