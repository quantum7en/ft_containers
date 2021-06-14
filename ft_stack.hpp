//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FT_CONTAINERS_FT_STACK_HPP
#define FT_CONTAINERS_FT_STACK_HPP

#include "ft_list.hpp"
#include "ft_reverse_iterator.hpp"
#include <algorithm>

namespace ft {
	////A container adaptor keeps internally a container object as data.
	/// This container object is a copy of the ctnr argument passed to the constructor,
	/// if any, otherwise it is an empty container.

	template <class T, class Container = List <T> >
	class Stack {
	public:
		typedef T			value_type;	//The first template parameter (T)	Type of the elements
		typedef Container	container_type;	//The second template parameter (Container)	Type of the underlying container
		typedef size_t		size_type;	//an unsigned integral type	usually the same as size_t
		typedef typename Container::reference reference;
		typedef typename Container::const_reference const_reference;


		//Constructs a stack container adaptor object.
		explicit Stack(const container_type& ctnr = container_type()) : _ctnr(ctnr){}

		Stack(const Stack& x) : _ctnr(x._ctnr){}

		~Stack() {}

		Stack& operator=(const Stack& x) {
			if (this != &x) {
				_ctnr = x._ctnr;
				return *this;
			}
			return *this;
		}

		/////      *** Member functions: ****

		bool	empty() const {
			return _ctnr.empty();
		}

		size_type	size() const {
			return _ctnr.size();
		}

		reference	top() {
			return _ctnr.back();
		}

		reference top() const {
			return _ctnr.back();
		}

		void	push(const value_type& val) {
			_ctnr.push_back(val);
		}

		void	pop() {
			_ctnr.pop_back();
		}

	protected:
		container_type _ctnr;

	};

	template <class T, class Container>
	bool operator==(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return lhs._ctnr == rhs._ctnr;
	}

	template <class T, class Container>
	bool operator<(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return lhs._ctnr < rhs._ctnr;
	}

	template <class T, class Container>
	bool operator!=(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return !(lhs._ctnr == rhs._ctnr);
	}

	template <class T, class Container>
	bool operator>(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return lhs._ctnr > rhs._ctnr;
	}

	template <class T, class Container>
	bool operator<=(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return lhs._ctnr <= rhs._ctnr;
	}

	template <class T, class Container>
	bool operator>=(const Stack<T, Container>& lhs, const Stack<T, Container>& rhs){
		return lhs._ctnr >= rhs._ctnr;
	}
}

#endif //FT_CONTAINERS_FT_STACK_HPP
