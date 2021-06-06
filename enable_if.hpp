#ifndef FT_CONTAINERS_ENABLE_IF
#define FT_CONTAINERS_ENABLE_IF

#include <type_traits>

namespace ft{
	template <bool B, class T = void>
	struct enable_if {};

	template <class T>
	struct enable_if <true, T> {
		typedef T type;
	};
}



#endif