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
		typedef Alloc					allocator_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::pointer			const_pointer;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef size_t					size_type;
		typedef typename ft::MapIterator<
		        ft::VectorIterator<value_type, value_type*, value_type&> >	difference_type;

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
			typedef bool result_type;
			typedef value_type first_argument_type;
			typedef value_type second_argument_type;
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
		_allocator(alloc), _compare(comp), _size(0){
			this->insert(first, last);
		}

		// (3) copy constructor
		//Constructs a container with a copy of each of the elements in x.
		Map (const Map& x){
			//this->_size = x._size;
//			this->root = x.root;
//			this->TNULL = x.getTNULL();
			//this->_allocator = x._allocator;
			//this->_compare = x._compare;
			_size = 0;
			this->insert(x.begin(), x.end());
		//	this->upDate_TNULL_node();
		}

		// Assignation. Assigns new contents to the container, replacing its current content.
		// The container preserves its current allocator, which is used to allocate additional storage if needed.
		// The elements stored in the container before the call are either assigned to or destroyed.
		Map &	operator=(const Map & x) {
			if (this == &x) {
				return *this;
			}
			this->clear();
			this->insert(x.begin(), x.end());
//			this->_size = x._size;
//			this->root = x.root;
//			this->TNULL = x.getTNULL();
//			_compare = x._compare;
//			this->_allocator = x._allocator;
//			this->upDate_TNULL_node();
			return *this;
		}

		// This destroys all container elements, and deallocates all the storage capacity
		virtual ~Map() {
			clear();
			delete this->TNULL;
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
			if (this->getTNULL()->right != NULL)
				return iterator (this->getTNULL()->right->left);
			return iterator (this->getTNULL());
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

		// Return reverse iterator to reverse end
		// Returns a reverse iterator pointing to the theoretical element right before the first element in the map container (which is considered its reverse end).
		// The range between map::rbegin and map::rend contains all the elements of the container (in reverse order).
		reverse_iterator rend() {
			reverse_iterator rev (iterator(this->getTNULL()->left));
			return rev;

			// if (this->size() == 0) {
			//				return reverse_iterator(this->begin());
			//			}
			//			return reverse_iterator(--(this->begin()));
		}

		const_reverse_iterator rend() const {
			const_reverse_iterator rev (iterator(this->getTNULL()->left));
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

		size_type max_size() const
		{ return(std::numeric_limits<size_type>::max() / sizeof(Node<T>)); }

		////  ****  Element access:  ****

		// Access element
		// If k matches the key of an element in the container, the function returns a reference to its mapped value.
		// If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
		// A similar member function, map::at, has the same behavior when an element with the key exists, but throws an exception when it does not.
		mapped_type& operator[] (const key_type& k){

			Node<value_type> *tmp = findNodeKey(k);
			if (tmp != NULL) {
				return tmp->data.second;
			}
			// если не нашли этот ключ в мапе insert
			return (*((this->insert(std::make_pair(k,mapped_type()))).first)).second;
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

			// todo insert проверить циклом по итератору что уникальное значение

			Node<value_type> *tmp = findNodeKey(val.first);
			if (tmp != NULL) {
				return std::make_pair((iterator)this->findNodeKey(tmp->data.first), false);
			}

			this->insert_RBT(val);
			++this->_size;

			return std::make_pair((iterator)this->findNodeKey(val.first), true);
		}

		// The versions with a hint (2) return an iterator pointing to either the newly inserted element
		// or to the element that already had an equivalent key in the map.
		iterator insert (iterator position, const value_type& val){
			// todo если поз перед вставленным, онон его оптимизирует
			(void) position;
			std::pair<iterator, bool> tmp_pos(this->insert(val));
			return tmp_pos.first;
		}

		template <class InputIterator>
		void insert (InputIterator first, InputIterator last){
			while(first != last){
				insert(*first);
				++first;
			}
		}


		//// Erase elements
		// Removes from the map container either a single element or a range of elements ([first,last)).
		// This effectively reduces the container size by the number of elements removed, which are destroyed.
		void erase (iterator position) {
//			this->deleteNode(*position);
//			--this->_size;

			if (empty())
				return ; // check it
			Node<value_type> *ptr = position.base();
			if (findNodeKey(ptr->data.first) != NULL)
				erase(ptr->data.first);

			//this->erase(*position);
		}

		//
		size_type erase (const key_type& k){
			// todo check if key not exists
			if (empty())
				return 0; // check it
			Node<value_type> *ptr = findNodeKey(k);
			std::cout<< ptr->data.first << " -> Erased key data\n";
			this->deleteNode(ptr->data);
			this->upDate_TNULL_node();
			--this->_size;
			return 1;
		}

		void erase (iterator first, iterator last){
			iterator curr = first;
			while(first != last){
				curr = first;
				first++;
				erase(curr);
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
			ft::swap(this->root, x.root);
			ft::swap(this->TNULL, x.TNULL);
			ft::swap(this->_allocator, x._allocator);
			ft::swap(this->_compare, x._compare);
		}

		// Clear content
		// Removes all elements from the map container (which are destroyed),
		// leaving the container with a size of 0.
		void clear(){
			if (!empty()) {
				this->deleteRBTree(this->root);
			}
			this->_size = 0;
			this->TNULL->right = this->TNULL;
			this->TNULL->left = this->TNULL;
		}


		//// **** Observers: ****

		// Returns a copy of the comparison object used by the container to compare keys.
		// The comparison object of a map object is set on construction. Its type (member key_compare) is the third template parameter of the map template. By default, this is a less object, which returns the same as operator<.
		// This object determines the order of the elements in the container: it is a function pointer or a function object that takes two arguments of the same type as the element keys, and returns true if the first argument is considered to go before the second in the strict weak ordering it defines, and false otherwise.
		// Two keys are considered equivalent if key_comp returns false reflexively (i.e., no matter the order in which the keys are passed as arguments).
		key_compare key_comp() const{
			return _compare;
		}


		// Return value comparison object
		// Returns a comparison object that can be used to compare two elements to get whether the key of the first one goes before the second.
		// The arguments taken by this function object are of member type value_type (defined in map as an alias of pair<const key_type,
		// mapped_type>), but the mapped_type part of the value is not taken into consideration in this comparison.
		// The comparison object returned is an object of the member type map::value_compare,
		// which is a nested class that uses the internal comparison object to generate
		// the appropriate comparison functional class. It is defined with the same behavior as (above):

		// The public member of this comparison class returns true if the key of the first argument is considered to go before that of the second
		// (according to the strict weak ordering specified by the container's comparison object, key_comp), and false otherwise.
		value_compare value_comp() const{
			return _compare;
		}

		//// **** Operations: ****

		// Get iterator to element
		// Searches the container for an element with a key equivalent to k and returns an iterator to it if found, otherwise it returns an iterator to map::end.
		// Two keys are considered equivalent if the container's comparison object returns false reflexively
		// (i.e., no matter the order in which the elements are passed as arguments).
		// Another member function, map::count, can be used to just check whether a particular key exists.
		iterator find (const key_type& k){
			if (findNodeKey(k) != NULL)
				return (iterator)findNodeKey(k);
			return this->end();
		}
		const_iterator find (const key_type& k) const{
			if (findNodeKey(k) != NULL)
				return (const_iterator)findNodeKey(k);
			return this->end();
		}


		// Count elements with a specific key
		//Searches the container for elements with a key equivalent to k and returns the number of matches.
		//Because all elements in a map container are unique, the function can only return 1 (if the element is found) or zero (otherwise).
		//Two keys are considered equivalent if the container's comparison object returns false reflexively (i.e., no matter the order in which the keys are passed as arguments).
		size_type count (const key_type& k) const{
			if (_size == 0)
				return 0;

			if (findNodeKey(k) != NULL)
				return 1;
			return 0;
		}


//		iterator lower_bound (const key_type& k){
//
//		}
//
//		const_iterator lower_bound (const key_type& k) const{
//
//		}
//
//		iterator upper_bound (const key_type& k){
//
//		}
//
//		const_iterator upper_bound (const key_type& k) const{
//
//		}
//
//		std::pair<const_iterator,const_iterator> equal_range (const key_type& k) const{
//
//		}
//
//		std::pair<iterator,iterator>             equal_range (const key_type& k){
//
//		}

		void printing(){
			this->printTree();
		}


		void show()
		{ std::cout << "ROOT "<< this->root->data.first;
			this->print(this->root, 10); }

		void traversal() const{
			std::cout << "tree with size: " << this->_size << std::endl; // _size кол-во нод в дереве без пустых нод
			this->inOrder();
		}


		Node<value_type> *findNodeKey(const key_type &k) const {
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

//			Node<value_type> *max = maximum(this->NodePtr);
//			if (tmp==)

			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->left;

			else if (!this->NodePtr->right->is_tnull)
				this->NodePtr = minimum(this->NodePtr->right);

			else if (this->NodePtr->parent != NULL && !this->NodePtr->is_tnull)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while ( curr_parent != NULL && curr_parent->data.first <= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				if (curr_parent == NULL) {
					this->NodePtr = NodePtr->right;
				} else {
					this->NodePtr = curr_parent;
				}
			}
			// this->NodePtr = curr_parent;
			//++_it;
			return *this;
		}

		// iterator++
		MapIterator operator++(int){
			MapIterator tmp(*this);

			if (this->NodePtr->is_tnull)
				this->NodePtr = this->NodePtr->left;

			else if (!this->NodePtr->right->is_tnull)
				this->NodePtr = minimum(this->NodePtr->right);

			else if (this->NodePtr->parent != NULL && !this->NodePtr->is_tnull)
			{
				Node_pointer curr_parent = this->NodePtr->parent;
				while (curr_parent->data.first <= this->NodePtr->data.first)
					curr_parent = curr_parent->parent;
				if (curr_parent == NULL) {
					this->NodePtr = NodePtr->right;
				} else {
					this->NodePtr = curr_parent;
				}
			}

			return tmp;
		}

		// todo cмотри выше
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


		//// *** Getter for private field _it
		Node<value_type> *base() const {
			return NodePtr;
		}

	//	 friend class Map<class Key, class T,class Compare = std::less<Key>, class Alloc = std::allocator<std::pair<const Key,T>>;


	};

}

#endif //FT_CONTAINERS_FT_MAP_HPP
