//
// Created by Phylicia Melinda on 4/29/21.
//

#ifndef FT_CONTAINERS_FT_LIST_HPP
#define FT_CONTAINERS_FT_LIST_HPP

#include <iostream>
#include <string>
#include <memory>
#include <limits>

//template < class T, class Alloc = allocator<T> > class list;
namespace ft {
	template<typename T>
	typedef T value_type;

	typedef std::ptrdiff_t difference_type;
	typedef size_t size_type;

	template<class T>
	class Node {
	private:
		Node(const Node &arg);
		Node &operator = (const Node &arg);
	public:
		typedef T value_type;
		Node(): prev(NULL), next(NULL), data(T()) {}
		Node(const value_type &value) : prev(NULL), next(NULL), data(value) {}
		~Node() {}
		Node *prev;
		Node *next;
		T data;
	};

	template<class T>
	class list{
	public:
		//all typedefs

	private:
		size_type listSize;
	};



	template<class T>
	class listIterator
	{

	};
}


#endif //FT_CONTAINERS_FT_LIST_HPP
