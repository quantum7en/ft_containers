//
// Created by Phylicia Melinda on 6/21/21.
//

//  clang++ -Wall -Wextra -Werror -std=c++98 -o tree test_map.cpp

#include <iostream>
#include <map>
#include <string>
#include "RBTree.hpp"
#include "ft_map.hpp"
#include "enable_if.hpp"
#include "classes.hpp"
#include <utility>
#include <unistd.h>

#define lib ft
#define con Map

/*
template <class KEY, class VAL>
void print_map(lib::con<int, int> & map) {
	typename lib::con<int, int>::iterator it(map.begin());

	std::cout
			<< "empty: " << map.empty()
			<< " size: "  << map.size() << "\n"
			<< "map:\n";
	size_t i = 0;
	ft::Map<int, int>::iterator ite = map.end();
	// std::cout << "END: "  << (*ite).first << std::endl;
	//ite--;
	while (it != ite) {
		if (i != 0 && i % 8 == 0) {
			std::cout << "\n";
		}
		std::cout << "key: "  << (*it).first
				  << " | ";
		++i;
		++it;
	}
	std::cout << std::endl;
}

void default_constructor() {
	std::cout << "default_constructor" << std::endl;
	lib::con<int, int> def;

	print_map<int, int>(def);
}

void constructor_first_last() {
	std::cout << "constructor_first_last" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
//		src.push_back((std::pair<int, int>(i, i * 2)));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());
//	def.show();
//	def.traversal();
	print_map<int,int>(def);

}

void copy_constructor() {
	std::cout << "copy_constructor" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());
	lib::con<int, int> copy_def(def);

	print_map<int, int>(copy_def);
}

void brackets() {
	std::cout << "brackets" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	for (size_t i = 0; i < def.size(); ++i) {
		std::cout << " ";
	}
	std::cout << std::endl;

}


void insert_val() {
	std::cout << "insert_val" << std::endl;
	lib::con<int, int>           def;
	lib::con<int, int>::iterator it;

	for (int i = 0; i < 20; ++i) {
		if (i != 0 && i % 8 == 0) {
			std::cout << std::endl;
		}
		it = def.insert(std::pair<int, int>(i, i)).first;
		std::cout
				<< "key: "  <<  (*it).first
				<< " | ";
		def.insert(std::pair<int, int>(i, i));
	}
	std::cout << std::endl;

	print_map<int, int>(def);
}

void insert_position_val() {
	std::cout << "insert_position_val" << std::endl;
	lib::con<int, int>           def;
	lib::con<int, int>::iterator it;

	for (int i = 0; i < 20; ++i) {
		if (i != 0 && i % 8 == 0) {
			std::cout << std::endl;
		}
		it = def.insert(def.begin(), std::pair<int, int>(i, i));
		it = def.insert(def.begin(), std::pair<int, int>(i, i));
		std::cout
				<< "key: "  <<  (*it).first
				<< " | ";
		def.insert(std::pair<int, int>(i, i));
	}
	std::cout << std::endl;

	print_map<int, int>(def);

}

void insert_first_last() {
	std::cout << "insert_first_last" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def;

	def.insert(src.begin(), src.end());
	print_map<int, int>(def);

}

void erase_position() {
	std::cout << "erase_position" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int>           def(src.begin(), src.end());

	def.erase(def.begin());

	lib::con<int, int>::iterator it(def.begin());

	++it; ++it; ++it;
	def.erase(it);
	it = def.end();
	--it;
	def.erase(it);
	print_map<int, int>(def);
}

void erase_key() {
	std::cout << "erase_key" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int>           def(src.begin(), src.end());

	for (int i = 0; i < 20 ; i += 2) {
		std::cout << def.erase(i) << std::endl;
	}

//	def.traversal();
//	def.show();
	print_map<int, int>(def);

}

void erase_firts_last() {
	std::cout << "erase_firts_last" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int>           def(src.begin(), src.end());
	lib::con<int, int>::iterator first(def.begin());
	lib::con<int, int>::iterator last(def.end());

	++first; ++first; ++first; ++first;
	--last; --last; --last; --last;

	def.erase(first, last);
	print_map<int, int>(def);

}

void swap() {
	std::cout << "swap" << std::endl;
	std::vector<std::pair<int, int> > src;
	std::vector<std::pair<int, int> > src2;

	for (int i = 0; i < 20; i += 2) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	for (int i = 1; i < 20; i += 2) {
		src2.push_back(std::pair<int, int>(i, i));
		src2.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int>           def(src.begin(), src.end());
	lib::con<int, int>           def2(src2.begin(), src2.end());

	def.swap(def2);
	print_map<int, int>(def);
	print_map<int, int>(def2);

}

void clear() {
	std::cout << "clear" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 3; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	def.show();
	def.traversal();
	def.clear();

	std::cout
			<< "empty: " << def.empty()
			<< " size: "  << def.size() << "\n"
			<< "map:\n";
}

void find() {
	std::cout << "find" << std::endl;
	std::vector<std::pair<int, int> > src;

	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	std::cout << (*def.find(0)).second << std::endl;
	std::cout << (*def.find(15)).second << std::endl;
	std::cout << (def.end() == def.find(99)) << std::endl;

}

void count() {
	std::cout << "count" << std::endl;
	std::vector<std::pair<int, int> > src;
	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	std::cout << def.count(0) << std::endl;
	std::cout << def.count(15) << std::endl;
	std::cout << def.count(99) << std::endl;
}

void lower_bound() {
	std::cout << "lower_bound" << std::endl;
	std::vector<std::pair<int, int> > src;
	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	def.show();
	def.traversal();

	ft::Map<int, int>::iterator ite = def.end();
	std::cout << (*def.lower_bound(0)).second << std::endl;
	std::cout << (*def.lower_bound(15)).second << std::endl;
}

void upper_bound() {
	std::cout << "upper_bound" << std::endl;
	std::vector<std::pair<int, int> > src;
	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int> def(src.begin(), src.end());

	std::cout << (*def.upper_bound(0)).second << std::endl;
	std::cout << (*def.upper_bound(15)).second << std::endl;
}

void reverse_iterator() {
	std::cout << "reverse_iterator" << std::endl;
	std::vector<std::pair<int, int> > src;
	for (int i = 0; i < 20; ++i) {
		src.push_back(std::pair<int, int>(i, i));
		src.push_back(std::pair<int, int>(i, i));
	}

	lib::con<int, int>                   def(src.begin(), src.end());
	lib::con<int, int>::reverse_iterator rit(def.rbegin());

	while (rit != def.rend()) {
		std::cout << (*rit).second << " ";
		++rit;
	}
	std::cout << std::endl;
}
*/

int		main(){

//	// Constructors
//	default_constructor();
//	constructor_first_last();
//	copy_constructor();
//	// ------------
//
//	// Element access
//	brackets();
//
////	// ------------
////
//	//Modifiers
//	insert_val();
//	insert_position_val();
//	insert_first_last();
//	erase_position();
//	erase_key();
//	erase_firts_last();
//	swap();
//	clear();
//////	// ------------
//////
//////	// Operations
//	find();
//	count();
//	lower_bound();
//	upper_bound();
//////	// ------------
	//reverse_iterator();

	ft::Map<int, int > bst;
	std::map<int, int> orig;
	for(int i = 1; i < 15; i++)
		bst.insert(std::make_pair(i, i+1));

	bst.insert(std::make_pair(10, 18888));
	bst[15] = 100;
	bst[15] = 500;
	bst[15] = -99;
	bst[16]= -5;

	std::cout <<"MAP 15 elem "<< bst.findNodeKey(15)->data.second <<"\n";
	std::cout <<"MAP 10 elem "<< bst.findNodeKey(10)->data.second <<"\n";

	bst.erase(1);
	bst.erase(12);
	bst.erase(10);
	bst.erase(2);

	std::cout << bst.max_size() << " - max\n";

	std::cout << bst.size() << " CUR SIZE \n";

	for(int i = 1; i < 15; i++)
		orig.insert(std::make_pair(i, i+1));

	orig.insert(std::make_pair(10, 18888));

	orig[15]= 100;
	orig[15]= 500;
	orig[15]= -99;
	orig[16]= -5;

	std::cout <<"ORIGIN 15 elem "<< orig.find(15)->second<<"\n";
	std::cout <<"ORIGIN 10 elem "<< orig.find(10)->second <<"\n";

	orig.erase(1);
	orig.erase(12);
	orig.erase(10);
	orig.erase(2);
	std::cout << orig.max_size() << " - max orig\n";
	std::cout << orig.size() << " ORIG CUR SIZE \n";


	ft::Map<int, int>::iterator it;
	it = bst.begin();
	//it++;
	std::cout <<"Begin "<< it->first <<" "<< it->second << "\n";

	std::cout <<"Origin Begin "<< orig.begin()->first <<" "<<orig.begin()->second << "\n";


	ft::Map<int, int>::iterator ite = bst.end();
	std::cout << "End UB "<<  ite->first <<" "<< ite->second << "\n";

	//std::cout << "Origin End "<<  orig.end()->first <<" "<< orig.end()->second << "\n";


	ft::Map<int, int>::reverse_iterator  rit1 = bst.rend();
	--rit1;
	std::cout <<"Rend " <<rit1->first <<" "<< rit1->second << "\n";
	std::cout <<"Origin Rend " << (--orig.rend())->first <<" "<< (--orig.rend())->second << "\n";

	std::cout << " it erasing " << it->first << std::endl;
	bst.erase(it);
	orig.erase(orig.begin());


	orig[10]= -5;
	bst[10]= -5;
	std::cout << " Checking again brackets: new key value 10 -> " << bst.find(10)->first << std::endl;
	std::cout << " ORIGIN Checking again brackets: new key value 10 -> " << orig.find(10)->first << std::endl;

	std::cout << " FINAL SIZE MY MAP " <<bst.size() << std::endl;
	std::cout << " FINAL SIZE ORIGIN MAP "<<orig.size() << std::endl;

	std::cout << " 				**** Visualised ****"<< std::endl;
	bst.show();
	bst.traversal();

	bst.printing();

	sleep(10);
	return 0;
};