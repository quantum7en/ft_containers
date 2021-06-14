//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FT_CONTAINERS_FT_QUEUE_HPP
#define FT_CONTAINERS_FT_QUEUE_HPP

#include "ft_list.hpp"
#include "ft_reverse_iterator.hpp"
#include <algorithm>
#include <deque>

namespace ft {
////	FIFO queue
////	queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted into one end of the container and extracted from the other.
////	queues are implemented as containers adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements.
/// 	Elements are pushed into the "back" of the specific container and popped from its "front".

template <class T, class Container = List<T> >
	class Queue {
	public:
		typedef typename Container::value_type value_type;// The first template parameter (T)	Type of the elements
		typedef typename Container::reference reference;
		typedef typename Container::const_reference const_reference;
		typedef typename Container::size_type size_type;//	an unsigned integral type	usually the same as size_t
		typedef Container container_type;            //	The second template parameter (Container)	Type of the underlying container


		container_type get_container_type() const { return _c;}

	protected:
		container_type _c;

	public:
		explicit Queue(const container_type &ctnr = container_type()) : _c(ctnr) {}

		Queue(const Queue &x) : _c(x._c) {}

		~Queue() {}

		Queue &operator=(const Queue &x) {
			if (this != &x) {
				_c = x._c;
				return *this;
			}
			return *this;
		}

		bool empty() const {
			return _c.empty();
		}

		size_type size() const {
			return _c.size();
		}

		reference front() {
			return _c.front();
		}

		const_reference front() const {
			return this->_c.front();
		}

		reference back() {
			return this->_c.back();
		}

		const_reference back() const {
			return this->_c.back();
		}

		void push(const value_type &val) {
			return this->_c.push_back(val);
		}

		void pop() {
			return this->_c.pop_front();
		}
	};

		template <class T, class Container>
		 bool operator==(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return lhs.get_container_type() == rhs.get_container_type(); }

		template <class T, class Container>
		 bool operator<(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return lhs.get_container_type() < rhs.get_container_type(); }

		template <class T, class Container>
		 bool operator!=(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return !(lhs == rhs); }

		template <class T, class Container>
		 bool operator>(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return rhs < lhs; }

		template <class T, class Container>
		 bool operator<=(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return !(rhs < lhs); }

		template <class T, class Container>
		 bool operator>=(const Queue<T, Container>& lhs, const Queue<T, Container>& rhs){
			return !(lhs < rhs); }

}

#endif //FT_CONTAINERS_FT_QUEUE_HPP
