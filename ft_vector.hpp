//
// Created by Phylicia Melinda on 5/17/21.
//

#ifndef FT_CONTAINERS_FT_VECTOR_HPP
#define FT_CONTAINERS_FT_VECTOR_HPP

#include <cassert> // для assert()
#include <array>

namespace ft {
	template<typename T>

	template < class T, class Alloc = allocator<T> > class Vector;

	int& operator[](int idx){
		assert(idx >= 0 && idx < m_len);
		return m_data[idx];
	}

	int *end{
		&array[0] + std::size(array)
	};
	//нельзя после v.erase(it) сделать ++it || разыменовать
}

#endif //FT_CONTAINERS_FT_VECTOR_HPP
