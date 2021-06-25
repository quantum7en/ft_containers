//
// Created by Phylicia Melinda on 6/21/21.
//

#include <iostream>
#include <map>
#include <string>
#include "RBTree.hpp"
#include "ft_map.hpp"
#include "classes.hpp"
#include <utility>

class Test {
public:
	Test() : some_(0) {
		// std::cout << "Test created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	Test(int s) : some_(s) {
		// std::cout << "Test " << this->some_ << " created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	Test(Test const & x) : some_(x.some_) {
		// std::cout << "Copy Test " << this->some_ << " created" << std::endl;
		this->str_ = (char*)malloc(10);
	}

	~Test() {
		if (this->str_ != 0)
			free(this->str_);
		this->some_ = 0;
		this->str_  = 0;
		// std::cout << "Test deleted" << std::endl;
	}

	Test &operator=(Test const & x) {
		// std::cout << "Test operator =" << std::endl;
		if (this == &x)
			return (*this);
		this->str_ = (char*)malloc(10);
		this->some_ = x.some_;
		return (*this);
	}

	bool operator==(const Test & x) {
		return this->some_ == x.some_;
	}
	bool operator==(int & val) {
		return this->some_ == val;
	}
	int   some_;
	char* str_;

};

int		main(){


		ft::Map<int, int > bst;
		std::map<int, int> orig;


for(int i = 1; i < 15; i++)
	bst.insert(std::make_pair(i, i+1));

	bst.insert(std::make_pair(10, 18888));
bst[15] = 100;
bst[15] = 500;
bst[15] = -99;
bst[16]= -5;
	std::cout <<"15 elem "<< bst.findNodeKey(15)->data.second <<"\n";
	std::cout <<"10 elem "<< bst.findNodeKey(10)->data.second <<"\n";

	bst.erase(1);
	bst.erase(12);
	bst.erase(10);
	bst.erase(2);

std::cout << bst.max_size() << " - max\n";


	for(int i = 1; i < 15; i++)
		orig.insert(std::make_pair(i, i+1));
// todo fix insert, rend
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

//	bst.insert(-1);
//	bst.insert(0);
//	bst.insert(-15);
//	bst.insert(-2);


ft::Map<int, int>::iterator it;
it = bst.begin();
//it++;
std::cout <<"Begin "<< it->first <<" "<< it->second << "\n";

std::cout <<"Origin Begin "<< orig.begin()->first <<" "<<orig.begin()->second << "\n";


ft::Map<int, int>::iterator ite = bst.end();
std::cout << "End UB "<<  ite->first <<" "<< ite->second << "\n";

//std::cout << "Origin End "<<  orig.end()->first <<" "<< orig.end()->second << "\n";

ft::Map<int, int>::reverse_iterator  rit = bst.rbegin();
	std::cout <<"Rbegin " <<rit->first <<" "<< rit->second << "\n";
	std::cout <<"Origin  Rbegin " <<orig.rbegin()->first <<" "<< orig.rbegin()->second << "\n";


	ft::Map<int, int>::reverse_iterator  rit1 = bst.rend();
	std::cout <<"Rend " <<rit1->first <<" "<< rit1->second << "\n";
//	std::cout <<"Origin Rend " <<orig.rend()->first <<" "<< orig.rend()->second << "\n";

//		bst.deleteNode(1);
		bst.show();
		bst.traversal();

//		cout << endl
//			 << "After deleting" << endl;
//		bst.deleteNode(40);
//		bst.printTree();


	return 0;
};