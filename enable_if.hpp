#ifndef FT_CONTAINERS_ENABLE_IF
#define FT_CONTAINERS_ENABLE_IF

#include <type_traits>

#pragma once

namespace ft{
	template <bool B, class T = void>
	struct enable_if {};

	template <class T>
	struct enable_if <true, T> {
		typedef T type;
	};

//	template<class T>
//	typename ft::enable_if<std::is_object<T>::value, T*>::type  addressof(T& arg) noexcept
//	{
//		return reinterpret_cast<T*>(
//				&const_cast<char&>(
//						reinterpret_cast<const volatile char&>(arg)));
//	}
//
//	template<class T>
//	typename ft::enable_if<!std::is_object<T>::value, T*>::type addressof(T& arg) noexcept
//	{
//		return &arg;
//	}

	template<class T>
	void swap(T &a, T &b) {
		T tmp(a);

		a = b;
		b = tmp;
	}

	template <class ForwardIterator, class T>
	void fill (ForwardIterator first, ForwardIterator last, const T& val)
	{
		while (first != last) {
			*first = val;
			++first;
		}
	}

	template <class OutputIterator, class Size, class T>
	OutputIterator fill_n (OutputIterator first, Size n, const T& val)
	{
		while (n>0) {
			*first = val;
			++first; --n;
		}
		return first;
	}

}



#endif