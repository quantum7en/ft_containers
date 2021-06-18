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

		void	transfer(Node<T>* first, Node<T>* last) {
			if(this != last){
				// Remove [first, last) from its old position.
				last->prev->next  = this;
				first->prev->next = last;
				this->prev->next    = first;

				// Splice [first, last) into its new position.
				Node<T>* const tmp = this->prev;
				this->prev     = last->prev;
				last->prev   = first->prev;
				first->prev  = tmp;
			}
		};

	};

	template < class T, class Pointer, class Reference, class Node>
	class ListIterator;

	//template < class T, class Alloc = std::allocator<T> > class List;
	// Member type allocator_type is the internal allocator type used by the container, defined in list as an alias of its second template parameter (Alloc).
	// If allocator_type is an instantiation of the default allocator (which has no state), this is not relevant.
	template < class T, class Alloc = std::allocator<T> > // Allocator object. The container keeps and uses an internal copy of this allocator.
	class List{
	public:

		typedef T													value_type;
		typedef Alloc                                           	allocator_type; // defaults to: allocator<value_type>
		typedef typename allocator_type::reference              	reference;  	// for the default allocator: value_type&
		typedef typename allocator_type::const_reference        	const_reference;// for the default allocator: const value_type&
		typedef typename allocator_type::pointer                	pointer;		// for the default allocator: value_type*
		typedef typename allocator_type::const_pointer          	const_pointer;	// for the default allocator: const value_type*

		typedef std::allocator <Node <T> >								node_allocator; //allocator for a node
		typedef ft::ListIterator <T, T*, T&, Node<T> > 					iterator;
		typedef ft::ListIterator <T, const T*, const T&, Node<T> > 		const_iterator;
		typedef ft::ReverseIterator <iterator>                 			reverse_iterator;  // дописать реверс итератор
		typedef ft::ReverseIterator <const_iterator>     				const_reverse_iterator;
		typedef typename ft::ListIterator<T, T*, T&, Node <T> >::difference_type difference_type;
//todo		typedef std::ptrdiff_t										difference_type; // std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
		typedef std::size_t											size_type;

		friend class Node<T>;


		// Asignation operator
		List &operator=(const List &rhs)
		{
			clear();
			assign(rhs.begin(), rhs.end());
			_listSize = rhs._listSize;
			return (*this);
		};

/////      *** Member functions: ****
////       ***** CONSTRUCTORS *****
		// The container keeps an internal copy of alloc, which is used to allocate storage throughout its lifetime.
		//// (1) empty container constructor (Default constructor): Constructs an empty container, with no elements.
		// explicit list (const allocator_type& alloc = allocator_type()); //explicit - значит можно создать по поданному типу (не будет неявного каста)

		explicit List(const allocator_type& alloc = allocator_type()) : _listSize(0), _allocator(alloc), _node_alloc(node_allocator()){

			afterLast = _node_alloc.allocate(1);
			afterLast->next = afterLast;
			afterLast->prev = afterLast;
		}

		//// (2) fill constructor : Constructs a container with n elements. Each element is a copy of val.
		// n - Initial container size
		// explicit list (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
		explicit List(size_type n, const value_type &val = value_type(), const allocator_type& alloc = allocator_type()) : _listSize(0), _allocator(alloc),  _node_alloc(node_allocator()){
			afterLast = _node_alloc.allocate(1);
			afterLast->next = afterLast;
			afterLast->prev = afterLast;
			insert(begin(), n, val);
		}
		//// (3) range constructor : Constructs a container with as many elements as the range [first,last),
		//// with each element constructed from its corresponding element in that range, in the same order.
		//// Input iterators to the initial and final positions in a range. The range used is [first,last), which includes all the elements between first and last, including the element pointed by first but not the element pointed by last.
		//// The function template argument InputIterator shall be an input iterator type that points to elements of a type from which value_type objects can be constructed.
		// list (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
		template <class InputIterator>
		List (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename std::enable_if
				< !std::numeric_limits<InputIterator>::is_specialized >::type* = NULL) : _listSize(0), _allocator(alloc), _node_alloc(node_allocator()){
			afterLast = _node_alloc.allocate(1);
			//last = first;
			afterLast->next = afterLast;
			afterLast->prev = afterLast;
			insert(begin(), first, last);
		}
		//// (4) copy constructor : Constructs a container with a copy of each of the elements in x, in the same order.
		//// The copy constructor (4) creates a container that keeps and uses a copy of x's allocator.
		//// x - Another list object of the same type (with the same class template arguments), whose contents are either copied or acquired.
		// list (const list& x); m_end(NULL), m_size(0), m_allocator(x.m_allocator){}
		List(const List& x): _listSize(0), _allocator(x._allocator){
			afterLast = _node_alloc.allocate(1);
			afterLast->next = afterLast;
			afterLast->prev = afterLast;
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
			return  (this->_listSize == 0 ? reverse_iterator (end()) : reverse_iterator (--end()));}
		const_reverse_iterator	rbegin() const{
			return  (this->_listSize == 0 ? const_reverse_iterator (end()) : reverse_iterator (--end()));}

//std::list::rend - Return reverse iterator to reverse end
//Returns a reverse iterator pointing to the theoretical element preceding the first element in the list container (which is considered its reverse end).
		reverse_iterator		rend(){
			return  reverse_iterator (afterLast);}
		const_reverse_iterator rend() const {
			return  const_reverse_iterator (afterLast);}

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
		template <class InputIterator>
		void assign(InputIterator first, InputIterator last) {
			clear();
			insert(this->begin(), first, last);
		}

		// In the fill version (2), the new contents are n elements, each initialized to a copy of val.
		// Any storage needed for the assigned elements is allocated using the internal allocator.
		// Any elements held in the container before the call are destroyed and replaced by newly constructed elements (no assignments of elements take place).
		void	assign(size_type n, const value_type& val){
			clear();
			insert(this->begin(), n, val);
		}

		//Insert element at beginning. Inserts a new element at the beginning of the list, right before its current first element.
		// The content of val is copied (or moved) to the inserted element.
		void	push_front (const value_type& val){
			insert(this->begin(), val);
		}

		//Delete first element. This destroys the removed element.
		void	pop_front(){
			erase(this->begin());
		}

		void	push_back(value_type const & val) {
			insert(this->end(), val);
		}

		// Delete last element. Removes the last element in the list container, effectively reducing the container size by one.
		// This destroys the removed element.
		void 	pop_back(){
			iterator it = end();
			--it;
			erase(it);
		}

//splice - перемещает из одного контейнера в другой, ничего там не удаляя - сменить указатели в одном контейнере другими

		// The container is extended by inserting new elements before the element at the specified position.
		// This effectively increases the list size by the amount of elements inserted.
		// Return : An iterator that points to the first of the newly inserted elements.
		// single element (1)
		iterator insert(iterator position, const value_type& val) {
		//	Node<T> *pos = position.getPtr();
		//	std::cout<< "print\n";
			Node<T> *newNodePtr;
			newNodePtr = _node_alloc.allocate(1);
			newNodePtr->next = newNodePtr;
			newNodePtr->prev = newNodePtr;

			_allocator.construct(&newNodePtr->data, val);

			Node<T> *pos = position.getPtr();

			newNodePtr->next = pos;
			newNodePtr->prev =pos->prev;
			pos->prev->next = newNodePtr;
			pos->prev = newNodePtr;

			++_listSize;
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
		void	insert(iterator position, InputIterator first, InputIterator last, typename std::enable_if
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

			if (ptr == afterLast->next){
				afterLast->next = afterLast->next->next;
				afterLast->next = afterLast->next->next;
				afterLast->next->prev = afterLast;
			}
			if (ptr == afterLast->prev){
				afterLast->prev = afterLast->prev->prev;
				afterLast->prev->next = afterLast;
			}

			_allocator.destroy(&ptr->data);
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			_node_alloc.deallocate(ptr, 1);
			_listSize--;
			return iterator(tmp);
		}

		// Removes from the list container a range of elements ([first,last)).
		// first, last : Iterators specifying a range within the list to be removed: [first,last). i.e.,
		// the range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
		iterator erase (iterator first, iterator last) {
			Node<T> *current;

			Node<T>* fst = first.getPtr();
			while (fst != last.getPtr()) {
				current = fst;
				current->prev->next = current->next;
				current->next->prev = current->prev;

				Node<T>* nxt = current->next;
				_allocator.destroy(&current->data);
				_node_alloc.deallocate(current, 1);
				_listSize--;
				fst = nxt;
			}
			return last;
		}

		// Exchanges the content of the container by the content of x, which is another list of the same type. Sizes may differ.
		// After the call to this member function, the elements in this container are those which were in x before the call,
		// and the elements of x are those which were in this.
		// All iterators, references and pointers remain valid for the swapped objects.
		void	swap(List & x){
			std::swap(_allocator, x._allocator);
			std::swap(_node_alloc, x._node_alloc);
			std::swap(afterLast, x.afterLast);
			std::swap(_listSize, x._listSize);
		}

		//Resizes the container so that it contains n elements.
		// If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
		// If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n.
		// If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
		//val - Object whose content is copied to the added elements in case that n is greater than the current container size. If not specified, the default constructor is used instead.
		void	resize (size_type n, value_type val = value_type()){
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
			_listSize = 0;
		}

		//// *** Operations: ***

		//splice - перемещает из одного контейнера в другой, ничего там не удаляя - сменить указатели в одном контейнере другими
		// entire list (1): Transfers elements from x into the container, inserting them at position.
		// This effectively inserts those elements into the container and removes them from x, altering the sizes of both containers.
		// The operation does not involve the construction or destruction of any element.
		// They are transferred, no matter whether x is an lvalue or an rvalue, or whether the value_type supports move-construction or not.

		void	splice(iterator position, List & x){
			if (x.begin() == x.end() || &x == this || x._listSize == 0)
				return;

			this->_listSize	+= x._listSize;
			x._listSize = 0;

			Node<T>* pos  = position.getPtr();
			Node<T>* prev = pos->prev;

			pos->prev = x.afterLast->prev;
			prev->next = x.afterLast->next;
			pos->prev->next = pos;
			prev->next->prev = prev;

			x.afterLast->next = x.afterLast;
			x.afterLast->prev = x.afterLast;
		}

		// The second version (2) transfers only the element pointed by i from x into the container.
		// x - A list object of the same type (i.e., with the same template parameters, T and Alloc).
		//This parameter may be *this if position points to an element not actually being spliced
		// (for the first version, this is never the case, but for the other versions this is possible).
		// i - Iterator to an element in x. Only this single element is transferred.

		void	splice(iterator position, List & x, iterator i){
			iterator next_it = i;
			next_it++;
			splice(position, x, i, next_it);
		}

		// The third version (3) transfers the range [first,last) from x into the container.
		// first,last - Iterators specifying a range of elements in x. Transfers the elements in the range [first,last) to position.
		// Notice that the range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.

		void	splice(iterator position, List & x, iterator first, iterator last){
			if (first == last)
				return;

			iterator tmp = first;
			size_t dist;
			for (dist = 0; tmp != last; dist++)
				++tmp;

			this->_listSize += dist;
			x._listSize -= dist;

			this->transfer(position, first, last);
		}

		//Remove elements with specific value. Removes from the container all the elements that compare equal to val.
		// This calls the destructor of these objects and reduces the container size by the number of elements removed.
		//Unlike member function list::erase, which erases elements by their position (using an iterator),
		// this function (list::remove) removes elements by their value. // Linear in container size (comparisons).

		void	remove (const value_type& val){
			for (iterator it = begin(); it != end(); ++it){
				if (it.getPtr()->data == val)
					it = erase(it);
//				else
//					++it;
			}
		}

		// A similar function, list::remove_if, exists, which allows for a condition other than an equality comparison to determine whether an element is removed.
//		Removes from the container all the elements for which Predicate pred returns true.
//		This calls the destructor of these objects and reduces the container size by the number of elements removed.
//		The function calls pred(*i) for each element (where i is an iterator to that element). Any of the elements in the list for which this returns true, are removed from the container.
		template <class Predicate>
		void	remove_if (Predicate pred){
			for(iterator it = begin(); it != end(); ++it){
				if(pred(*it))
					it = erase(it);
			}
		}

		//The version with no parameters (1), removes all but the first element from every consecutive group of equal elements in the container.
		// Notice that an element is only removed from the list container if it compares equal to the element immediately preceding it.
		// Thus, this function is especially useful for sorted lists.
		void	unique() {
			iterator first = begin();
			iterator last = end();

			if (first == last || _listSize == 1)
				return;

			iterator next = first;
			while (++next != last) {
				if (*first == *next) {
					erase(next);
				} else
					first = next;
				next = first;
			}
		}

		//The second version (2), takes as argument a specific comparison function that determine the "uniqueness" of an element.
		// In fact, any behavior can be implemented (and not only an equality comparison), but notice that the function will
		// call binary_pred(*i,*(i-1)) for all pairs of elements (where i is an iterator to an element, starting from the second)
		// and remove i from the list if the predicate returns true.
		template <class BinaryPredicate>
		void	unique (BinaryPredicate binary_pred){
			if (begin() == end() || _listSize == 1)
				return ;
			iterator currentIt = this->begin();
			iterator next = currentIt;
			iterator ite = this->end();
			//++next;
			while (next != ite)
			{
				++next;
				if (binary_pred(*currentIt, *next)){
					erase(next);
					next = currentIt;
				}
				else
				{
					currentIt = next;
					//++next;
				}
			}
		}

		//// merge
		// Merges x into the list by transferring all of its elements at their respective ordered positions into the container (both containers shall already be ordered).
		// This effectively removes all the elements in x (which becomes empty),
		// and inserts them into their ordered position within container (which expands in size by the number of elements transferred).
		// The operation is performed without constructing nor destroying any element: they are transferred, no matter whether x is an lvalue or an rvalue,
		// or whether the value_type supports move-construction or not.
		void merge (List& x){
			if (this != std::addressof(x))
			{
				iterator first1 = begin();
				iterator last1 = end();
				iterator first2 = x.begin();
				iterator last2 = x.end();

				_listSize += x.size();
				x._listSize = 0;

				while (first1 != last1 && first2 != last2)
					if (*first2 < *first1)
					{
						iterator next = first2;
						transfer(first1, first2, ++next);
						first2 = next;
					}
				else
					++first1;
				if (first2 != last2)
					transfer(last1, first2, last2);
			}
		}

		// The template versions with two parameters (2), have the same behavior, but take a specific predicate (comp)
		// to perform the comparison operation between elements.
		// This comparison shall produce a strict weak ordering of the elements (i.e., a consistent transitive comparison, without considering its reflexiveness).
		//// This function requires that the list containers have their elements already ordered by value (or by comp) before the call.
		template <class Compare>
		void merge (List& x, Compare comp){
			if (this != std::addressof(x))
			{
				iterator first1 = begin();
				iterator last1 = end();
				iterator first2 = x.begin();
				iterator last2 = x.end();

				_listSize += x.size();
				x._listSize = 0;

				while (first1 != last1 && first2 != last2)
					if (comp(*first2, *first1)) {
							iterator next = first2;
							transfer(first1, first2, ++next);
							first2 = next;
					}
				else
					++first1;
				if (first2 != last2)
					transfer(last1, first2, last2);
			}
		}

		//// sort
		// Sorts the elements in the list, altering their position within the container.
		// The sorting is performed by applying an algorithm that uses either operator< (in version (1)) or comp (in version (2)) to compare elements. This comparison shall produce a strict weak ordering of the elements (i.e., a consistent transitive comparison, without considering its reflexiveness).
		//The resulting order of equivalent elements is stable: i.e., equivalent elements preserve the relative order they had before the call.
		//The entire operation does not involve the construction, destruction or copy of any element object. Elements are moved within the container.
		void	sort(){
			if (this->begin() != afterLast ) // _listSize <= 1
			{
				List carry;
				List tmp[64];
				List * fill = tmp;
				List * counter;
				while ( !empty() ){
					carry.splice(carry.begin(), *this, begin());

					for(counter = tmp; counter != fill && !counter->empty(); ++counter){
							counter->merge(carry);
							carry.swap(*counter);
						}
						carry.swap(*counter);
						if (counter == fill)
							++fill;
					}

					for (counter = tmp + 1; counter != fill; ++counter)
						counter->merge(*(counter - 1));
					swap( *(fill - 1) );
				}

		}

		template <class Compare>
		void sort (Compare comp){
			if (this->begin() != afterLast )
			{
				List carry;
				List tmp[64];
				List * fill = tmp;
				List * counter;
				while ( !empty() ) {
					carry.splice(carry.begin(), *this, begin());
					for(counter = tmp; counter != fill && !counter->empty(); ++counter){
							counter->merge(carry, comp);
							carry.swap(*counter);
						}
						carry.swap(*counter);
					if (counter == fill)
						++fill;
					}

				for (counter = tmp + 1; counter != fill; ++counter)
						counter->merge(*(counter - 1), comp);
				swap(*(fill - 1));
			}
		}

		// reverse. Reverses the order of the elements in the list container.
		void	reverse(){
			if( afterLast->next == afterLast || this->_listSize <= 1){
				return;
			}

			Node<T>* head = afterLast->next;
			Node<T>* tmp = afterLast->next;
			for(;;)
			{
				std::swap(head->prev, head->next);
				Node<T>* prev;
				 prev =   head->prev;

				if( prev == afterLast ){
					break;
				}
				head = prev;
			}
			afterLast->next=head;
			afterLast->prev=tmp;
		}

	protected:
		void	transfer(iterator position, iterator first, iterator last){
			position.getPtr()->Node<T>::transfer(first.getPtr(), last.getPtr()); }

	private:
		//typedef Node<value_type, allocator_type> lst
		size_type _listSize;
		Node<T> *afterLast; //специальный указатель на Node sentinal - shadow node, элемент после последнего
		allocator_type _allocator;
		node_allocator _node_alloc;
	};


	//// ***** Non-member functions *****
	template< class T, class Alloc>
	bool operator == (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs){
		if (lhs.size() != rhs.size())
			return false;

		typedef typename ft::List<T, Alloc>::const_iterator const_iterator;
		const_iterator end1 = lhs.end();
		const_iterator end2 = rhs.end();

		const_iterator i1 = lhs.begin();
		const_iterator i2 = rhs.begin();
		for (; i1 != end1 && i2 != end2 && *i1 == *i2; ++i1, ++i2){
		}
		return i1 == end1 && i2 == end2;
	}

	template<class T, class Alloc>
	bool operator != (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs){
		return !operator==(lhs, rhs);
	}

	template<class T, class Alloc>
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
		return lIt == lIte && rIt != rIte;
	}

	template<class T, class Alloc>
	bool operator <= (const ft::List<T, Alloc> &lhs, const ft::List<T, Alloc> &rhs) {
		return !(lhs > rhs);
		}

	template<class T, class Alloc>
	bool operator > (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		return (rhs < lhs); }

	template<class T, class Alloc>
	bool operator >= (const List<T, Alloc> &lhs, const List<T, Alloc> &rhs) {
		return (!(lhs < rhs));
	}

	template<class T, class Alloc>
	void swap(const List<T, Alloc> &x, const List<T, Alloc> &y){
		x.swap(y);
	}

	template < class T, class Pointer, class Reference, class Node>

	class ListIterator
	{
	private:
		Node *_currentNodePtr; //указатель на текущую ноду листа
		//ListIterator() : _currentNodePtr(NULL){};

	public:
		typedef T			value_type;
		typedef T *			pointer;
		typedef T &			reference;
		typedef ptrdiff_t	difference_type;
		typedef std::bidirectional_iterator_tag iterator_category; //works??
		typedef const T &	const_reference;
		typedef const T &	const_pointer;

		ListIterator(Node *ptr = 0) : _currentNodePtr(ptr) {};
		ListIterator(const Node  *ptr) : _currentNodePtr(const_cast<Node *>(ptr)) {};
		ListIterator(const ListIterator &rhs) : _currentNodePtr(rhs._currentNodePtr) {};

		virtual ~ListIterator(){};

		//assignation =
		ListIterator operator = (const ListIterator &rhs){
			if (this == &rhs)
				return *this;
			_currentNodePtr = rhs._currentNodePtr;
			return *this;
		}

		// ++iterator
		ListIterator operator++(){
			_currentNodePtr = _currentNodePtr->next;
			return *this;
		}

		// iterator++
		ListIterator operator++(int){
			ListIterator tmp(*this);
			_currentNodePtr = _currentNodePtr->next;
			return tmp;
		}

		//
		ListIterator operator--(){
			_currentNodePtr = _currentNodePtr->prev;
			return *this;
		}

		ListIterator operator--(int){
			ListIterator tmp(*this);
			_currentNodePtr = _currentNodePtr->prev;
			return tmp;
		}

		reference operator*(){
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

		friend class List<T>;
		//const iterator - мы не можем разыменовать константный итератор и присвоить какое-то значение

	};


}


#endif //FT_CONTAINERS_FT_LIST_HPP
