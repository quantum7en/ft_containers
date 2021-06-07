//
// Created by Phylicia Melinda on 5/23/21.
//

#ifndef FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP
#define FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP

#include <stddef.h>

////whenever the reverse_iterator is incremented, its base iterator is decreased, and vice versa. A copy of the base iterator with the current state can be obtained at any time by calling member base.
/*
 * Notice however that when an iterator is reversed, the reversed version does not point to the same element in the range,
 * but to the one preceding it. This is so, in order to arrange for the past-the-end element of a range:
 * An iterator pointing to a past-the-end element in a range, when reversed,
 * is pointing to the last element (not past it) of the range (this would be the first element of the reversed range).
 * And if an iterator to the first element in a range is reversed, the reversed iterator points to the element before the first element (this would be the past-the-end element of the reversed range).
 */

namespace ft {
	template < class Iter>
	class ReverseIterator {
	private:
		Iter _it;  //the underlying iterator of which base() returns a copy
	//	ReverseIterator();

	public:
		typedef Iter								iterator_type;

		typedef typename Iter::iterator_category	iterator_category;
		typedef typename Iter::value_type			value_type;
		typedef typename Iter::difference_type		difference_type;
		typedef typename Iter::pointer				pointer;
		typedef typename Iter::reference			reference;

//// *** Member functions ***

		ReverseIterator() : _it(){}
		explicit ReverseIterator(iterator_type itr) : _it(itr){}

		template<class RevIter>
		ReverseIterator(const ReverseIterator<RevIter> &rhs_rev_it) : _it(rhs_rev_it.base){} //todo Iter?
		virtual ~ReverseIterator(){}

		//= assigns another iterator
		ReverseIterator<Iter>	&operator=(const ReverseIterator<Iter> &rhs)
		{
			if (this != rhs)
				_it = rhs._it;
			return *this;
		}

		//accesses the underlying iterator. Return base iterator
		iterator_type	base() const{
			return this->_it;
		}

		//operator* Dereference iterator. Returns a reference to the element pointed to by the iterator.
		// Internally, the function decreases a copy of its base iterator and returns the result of dereferencing it.

		reference	operator*() {
			//Iter iterator(_it);
			return *this->_it;
		}

		reference	operator*() const{
			//Iter iterator(_it);
			return *_it;
		}

		//Return value: Reference or pointer to the element previous to current.
		pointer	operator->() const
		{
			Iter iterator(_it);
			--iterator;
			return &(iterator.operator*()); //(iterator.operator->())
		}

		//accesses an element by index. If such an element does not exist, it causes undefined behavior.
		// Returns a reference to the element at specified relative location.
		// n	-	position relative to current location.
		reference	operator[](difference_type n) const{
			return _it[-n];
		}

		//++iterator
		//Internally, the pre-increment version (1) decrements the base iterator kept by the object (as if applying operator-- to it).
		ReverseIterator<Iter>	operator++() {
			--this->_it;
			return *this;
		}

		//iterator++
		//The post-increment version (2) returns the value *this had before the call.
		ReverseIterator<Iter> operator++(int) {
			ReverseIterator<Iter> tmp(*this);
			--this->_it;
			return tmp;
		}

		//--iterator
		ReverseIterator<Iter>	&operator--() {
			++_it;
			return *this;
		}

		//iterator--
		ReverseIterator<Iter> operator--(int) {
			ReverseIterator<Iter> tmp(*this);
			++_it;
			return tmp;
		}

		// Returns an iterator which is advanced by n positions.
		// Internally, the function applies the binary operator- on the base iterator and returns a reverse iterator constructed with the resulting iterator value.
		ReverseIterator<Iter> operator+( difference_type n ) const{
			_it -= n;
			return ReverseIterator(_it);
		}

		//Returns an iterator which is advanced by -n positions.
		// Internally, the function applies the binary operator+ on the base iterator and returns a reverse iterator constructed with the resulting iterator value.
		ReverseIterator<Iter> operator-( difference_type n ) const{
			_it += n;
			return ReverseIterator(_it);
		}

		//*** operator+= and operator-= Advances the iterator by n or -n positions respectively.
		//+=
		ReverseIterator<Iter> &operator+=( difference_type n ){
			_it -= n;
			return *this;
		}

		//-=
		ReverseIterator<Iter> &operator-=( difference_type n ){
			_it += n;
			return *this;
		}

		//// *** Non-member functions ***

		//booleans
		bool operator==(const ReverseIterator<Iter>& rhs)
		{
			return (_it.base() == rhs.base());
		}

		bool	operator<(ReverseIterator<Iter> const & rhs) const {
			return _it > rhs.base();
		}

		bool	operator>(ReverseIterator<Iter> const & rhs) const {
			return _it < rhs.base();
		}

		bool	operator<=(ReverseIterator<Iter> const & rhs) const {
			return _it >= rhs.base();
		}

		bool	operator>=(ReverseIterator<Iter> const & rhs) const {
			return _it <= rhs.base();
		}

	};

	////*** Relational Operators ***

	template <class Iter1, class Iter2>
	bool operator==(const ReverseIterator<Iter1>& lhs, const ReverseIterator<Iter2>& rhs)
	{
		return (lhs.base() == rhs.base());
	}

	template <class Iter1, class Iter2>
	bool operator!=(const ReverseIterator<Iter1> & lhs, const ReverseIterator<Iter2> & rhs)
	{
		return (lhs.base() != rhs.base());
	}

	template <typename Iter1, typename Iter2>
	bool operator<(const ReverseIterator<Iter1>& lhs, const ReverseIterator<Iter2>& rhs)
	{
		return (lhs.base() > rhs.base());
	}

	template <typename Iter1, typename Iter2>
	bool operator<=(const ReverseIterator<Iter1>& lhs, const ReverseIterator<Iter2>& rhs)
	{
		return (lhs.base() >= rhs.base());
	}

	template <typename Iter1, typename Iter2>
	bool operator>(const ReverseIterator<Iter1>& lhs, const ReverseIterator<Iter2>& rhs)
	{
		return (lhs.base() < rhs.base());
	}

	template <typename Iter1, typename Iter2>
	bool operator>=(const ReverseIterator<Iter1>& lhs, const ReverseIterator<Iter2>& rhs)
	{
		return (lhs.base() <= rhs.base());
	}

	template <typename Iter>
	ReverseIterator<Iter> operator+(typename ReverseIterator<Iter>::difference_type n, const ReverseIterator<Iter>& it)
	{
		ReverseIterator<Iter> tmp(it.base() - n);
		return (tmp);
	}

	template <typename Iter>
	typename ReverseIterator<Iter>::difference_type operator-(const ReverseIterator<Iter>& lhs, const ReverseIterator<Iter>& rhs)
	{
		return (rhs.base() - lhs.base());
	}
}

#endif //FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP
