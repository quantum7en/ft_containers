//
// Created by Phylicia Melinda on 6/17/21.
//

#include <iostream>
#include <vector>
#include <string>
#include "ft_vector.hpp"
#include "classes.hpp"

#define lib ft
#define con Vector

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

void ft_defoult_constructor() {
	std::cout << "\ndefoult_constructor\n" << std::endl;
	lib::con<Test> useless;

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;
	std::cout << "capacity: " << useless.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < useless.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << useless[i].some_ << " ";
	}
	std::cout << std::endl;
}

void ft_n_constructor() {
	std::cout << "\nn_constructor\n" << std::endl;
	lib::con<Test> useless(20);
	for (size_t i = 0; i < useless.size(); ++i) {
		useless[i].some_ = i;
	}

	std::cout << "empty() : " << useless.empty()    << std::endl;
	std::cout << "size    : " << useless.size()     << std::endl;
	std::cout << "capacity: " << useless.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < useless.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << useless[i].some_ << " ";
	}
	std::cout << std::endl;
}

void ft_n_val_constructor() {
	std::cout << "\nn_val_constructor\n" << std::endl;
	lib::con<Test> useless(128, 2);

	std::cout << "size    : " << useless.size()     << std::endl;
	std::cout << "capacity: " << useless.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < useless.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << useless[i].some_ << " ";
	}
	std::cout << std::endl;

}

void ft_copy_constructor() {
	std::cout << "\ncopy_constructor\n" << std::endl;
	lib::con<Test> base(128);
	for (size_t i = 0; i < base.size(); ++i) {
		base[i].some_ = i;
	}

	lib::con<Test> copy(base);

	std::cout << "size    : " << copy.size()     << std::endl;
	std::cout << "capacity: " << copy.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < copy.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << copy[i].some_ << " ";
	}
	std::cout << std::endl;

}

int		main(){

}