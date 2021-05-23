//
// Created by Phylicia Melinda on 5/23/21.
//

#ifndef FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP
#define FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP

namespace ft {
	template < class Iterator>
	class ReverseIterator{
	private:
		Iterator _it;
		ReverseIterator();
	public:
		typedef Iterator					iterator_type;

		typedef typename Iterator::iterator_category	iterator_category;
		typedef typename Iterator::value_type			value_type;
		typedef typename Iterator::difference_type		difference_type;
		typedef typename Iterator::pointer				pointer;
		typedef typename Iterator::reference			reference;
		//TODO fullfill all fields here

		explicit ReverseIterator(iterator_type it) :
	};


}

#endif //FT_CONTAINERS_FT_REVERSE_ITERATOR_HPP
