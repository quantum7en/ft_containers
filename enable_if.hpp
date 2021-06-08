#ifndef FT_CONTAINERS_ENABLE_IF
#define FT_CONTAINERS_ENABLE_IF

#include <type_traits>
#include "ft_list.hpp"

namespace ft{
	template <bool B, class T = void>
	struct enable_if {};

	template <class T>
	struct enable_if <true, T> {
		typedef T type;
	};

	void
	_M_transfer(iterator __position, iterator __first, iterator __last)
	{ __position._M_node->_M_transfer(__first._M_node, __last._M_node); }
}



#endif