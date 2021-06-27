//
// Created by Phylicia Melinda on 6/17/21.
//

#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include "ft_vector.hpp"
#include "classes.hpp"

#define lib ft
#define con Vector

/*
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


void ft_reserve_test() {
	std::cout << "\nreserve_test\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty[i].some_ << " ";
	}
	std::cout << std::endl;

	mouse.reserve(0);
	empty.reserve(0);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty[i].some_ << " ";
	}
	std::cout << std::endl;

	mouse.reserve(42);
	empty.reserve(42);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty[i].some_ << " ";
	}
	std::cout << std::endl;

	mouse.reserve(256);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;

	try {
		mouse.reserve(mouse.max_size() + 10);

	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty[i].some_ << " ";
	}
	std::cout << std::endl;


}

void ft_operator_assignment() {
	std::cout << "\noperator_assignment\n" << std::endl;
	lib::con<Test> base(128);
	for (size_t i = 0; i < base.size(); ++i) {
		base[i].some_ = i;
	}

	lib::con<Test> copy;
	copy = base;

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

// =============================================================================

// Iterators ===================================================================


void ft_iterator_test() {
	std::cout << "\niterator_test\n" << std::endl;
	lib::con<Test> mouse(128);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse[i].some_ << " ";
	}
	std::cout << std::endl;
	std::cout << (*mouse.begin()).some_      << std::endl;
	std::cout << (*(mouse.end() - 1)).some_  << std::endl;
	std::cout << (*mouse.rbegin()).some_     << std::endl;
	std::cout << (*(mouse.rend() - 1)).some_ << std::endl;
}

// =============================================================================

// Element access ==============================================================

void ft_el_access_test() {
	std::cout << "\nel_access_test\n" << std::endl;
	lib::con<Test> one(1, 2);
	lib::con<Test> mouse(128);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	try {
		std::cout << mouse.at(1042).some_ << std::endl;

	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << one.front().some_   << std::endl;
	std::cout << mouse.front().some_ << std::endl;

	std::cout << one.back().some_   << std::endl;
	std::cout << mouse.back().some_ << std::endl;
}

// =============================================================================

// Modifiers ===================================================================

void ft_assign_iter_iter_leaks_test() {
	std::cout << "\nassign_iter_iter\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	empty2.reserve(1023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> fat_mouse(344);
	for (size_t i = 0; i < fat_mouse.size(); ++i) {
		fat_mouse[i].some_ = i + 1000;
	}

	lib::con<Test> small_mouse(5);
	for (size_t i = 0; i < small_mouse.size(); ++i) {
		small_mouse[i].some_ = i + 500;
	}

	empty.assign(mouse.begin() + 5, mouse.end() - 5);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(fat_mouse.begin(), fat_mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.assign(small_mouse.begin(), small_mouse.end());

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_assign_iter_iter_1280b_leaks_test() {
	std::cout << "\nassign_iter_iter_1280_leaks\n" << std::endl;
	lib::con<Test> mouse(128);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> fat_mouse(344);
	for (size_t i = 0; i < fat_mouse.size(); ++i) {
		fat_mouse[i].some_ = i + 1000;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(mouse.begin(), mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(mouse.begin() + 5, mouse.end() - 5);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(fat_mouse.begin(), fat_mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(fat_mouse.begin(), fat_mouse.begin() + 10);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	try {
		mouse.assign(fat_mouse.begin() + 10, fat_mouse.begin());
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	try {
		mouse.assign(fat_mouse.begin(), (fat_mouse.begin() + fat_mouse.max_size()));
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

}

void ft_assign_n_val_test() {
	std::cout << "\nassign_n_val\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	empty2.reserve(1023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	empty.assign(1024, 7);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.assign(1024, 7);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.assign(812, 7);

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;

}

void ft_push_back_test() {
	std::cout << "\npush_back\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	empty2.reserve(1023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	empty.push_back(7);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.push_back(mouse[127]);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.push_back(mouse[127]);

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;

}

void ft_pop_back_test() {
	std::cout << "\npop_back\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	empty2.reserve(1023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	for (size_t i = 0; i < 10; ++i) {
		mouse.pop_back();
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_val_test() {
	std::cout << "\ninsert_iter_val\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> fat_mouse(1023);
	lib::con<Test> small_mouse(11);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	lib::con<Test> big_empty;
	big_empty.reserve(2023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	mouse.insert(mouse.begin(), 100);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.end(), 100);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	big_empty.insert(big_empty.begin(), 88);

	std::cout << "size    : " << big_empty.size()     << std::endl;
	std::cout << "capacity: " << big_empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty.insert(empty.begin(), 9);
	empty.insert(empty.begin(), 7);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty.insert(empty.begin(), empty[0]);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.push_back(1);
	empty2.insert(empty2.begin(), empty2[0]);

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;
}
void ft_insert_iter_n_val_test() {
	std::cout << "\ninsert_iter_n_val\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> fat_mouse(1023);
	lib::con<Test> small_mouse(11);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	lib::con<Test> big_empty;
	big_empty.reserve(2023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}

	mouse.insert(mouse.begin(), 20, 100);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.end(), 15, 100);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	big_empty.insert(big_empty.begin(), 19, 88);

	std::cout << "size    : " << big_empty.size()     << std::endl;
	std::cout << "capacity: " << big_empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty.insert(empty.begin(), 3, 9);
	empty.insert(empty.begin(), 4, 7);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty.insert(empty.begin(), 26, empty[0]);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.push_back(1);
	empty2.insert(empty2.begin(), 19, empty2[0]);

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_iter_iter_test() {
	std::cout << "\niter_iter_iter\n" << std::endl;
	lib::con<Test> mouse(128);
	lib::con<Test> empty;
	lib::con<Test> empty2;
	empty2.reserve(1023);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> fat_mouse(344);
	for (size_t i = 0; i < fat_mouse.size(); ++i) {
		fat_mouse[i].some_ = i + 1000;
	}

	lib::con<Test> small_mouse(5);
	for (size_t i = 0; i < small_mouse.size(); ++i) {
		small_mouse[i].some_ = i + 500;
	}

	empty.insert(empty.begin(), mouse.begin() + 5, mouse.end() - 5);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.end(), fat_mouse.begin(), fat_mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty2.insert(empty2.begin(), small_mouse.begin(), small_mouse.end());

	std::cout << "size    : " << empty2.size()     << std::endl;
	std::cout << "capacity: " << empty2.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty2.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty2.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_insert_iter_iter_iter_8390_leaks_test() {
	std::cout << "\nassign_iter_iter_1280_leaks\n" << std::endl;
	lib::con<Test> mouse(128);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> fat_mouse(344);
	for (size_t i = 0; i < fat_mouse.size(); ++i) {
		fat_mouse[i].some_ = i + 1000;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.begin() + 10, mouse.begin(), mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.end(), mouse.begin() + 5, mouse.end() - 5);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.begin(), fat_mouse.begin(), fat_mouse.end());

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.insert(mouse.begin() + 7, fat_mouse.begin(), fat_mouse.begin() + 10);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	try {
		mouse.insert(mouse.begin(), fat_mouse.begin() + 10, fat_mouse.begin());
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	try {
		mouse.insert(mouse.begin(), fat_mouse.begin(), (fat_mouse.begin() + fat_mouse.max_size()));
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

}

void ft_erase_2540_leaks_test() {
	std::cout << "erase_2540_leaks_test" << std::endl;
	lib::con<Test> mouse(129);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> big_mouse(1023);
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		big_mouse[i].some_ = i + 1000;
	}

	std::cout << mouse.erase(mouse.begin())->some_ << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.erase(mouse.end() - 1);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.erase(mouse.begin() + 100);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	big_mouse.erase(big_mouse.begin() + 100, big_mouse.end() - 100);

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	big_mouse.erase(big_mouse.begin(), big_mouse.end());

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		// if (i != 0 && i % 32 == 0)
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_swap_test() {
	std::cout << "swap_test" << std::endl;
	lib::con<Test> mouse(129);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> big_mouse(1023);
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		big_mouse[i].some_ = i + 1000;
	}

	big_mouse.swap(mouse);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	mouse.swap(big_mouse);

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_clear_test() {
	std::cout << "clear_test" << std::endl;
	lib::con<Test> empty;
	lib::con<Test> big_empty;
	lib::con<Test> mouse(129);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i].some_ = i;
	}
	lib::con<Test> big_mouse(1023);
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		big_mouse[i].some_ = i + 1000;
	}
	big_empty.reserve(190);

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_empty.size()     << std::endl;
	std::cout << "capacity: " << big_empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	empty.clear();
	big_empty.clear();
	mouse.clear();
	big_mouse.clear();

	std::cout << "size    : " << empty.size()     << std::endl;
	std::cout << "capacity: " << empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_empty.size()     << std::endl;
	std::cout << "capacity: " << big_empty.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_empty.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_empty.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << mouse.size()     << std::endl;
	std::cout << "capacity: " << mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;

	std::cout << "size    : " << big_mouse.size()     << std::endl;
	std::cout << "capacity: " << big_mouse.capacity() << std::endl;
	std::cout << "arr     :" << std::endl;
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		if (i != 0 && i % 32 == 0)
			std::cout << std::endl;
		std::cout << big_mouse.at(i).some_ << " ";
	}
	std::cout << std::endl;
}

void ft_relational_operators() {
	std::cout << "relational_operators" << std::endl;
	lib::con<int> empty;
	lib::con<int> big_empty;
	lib::con<int> mouse(129);
	for (size_t i = 0; i < mouse.size(); ++i) {
		mouse[i] = i;
	}
	lib::con<int> big_mouse(1023);
	for (size_t i = 0; i < big_mouse.size(); ++i) {
		big_mouse[i] = i + 1000;
	}
	big_empty.reserve(190);
	std::cout << (empty     == empty)     << std::endl;
	std::cout << (big_empty == big_empty) << std::endl;
	std::cout << (mouse     == mouse)     << std::endl;
	std::cout << (big_mouse == big_mouse) << std::endl;

	std::cout << (empty     != empty)     << std::endl;
	std::cout << (big_empty != big_empty) << std::endl;
	std::cout << (mouse     != mouse)     << std::endl;
	std::cout << (big_mouse != big_mouse) << std::endl;

	std::cout << (empty     > big_empty)     << std::endl;
	std::cout << (big_empty > empty) << std::endl;
	std::cout << (mouse     > big_mouse)     << std::endl;
	std::cout << (big_mouse > mouse) << std::endl;

	std::cout << (empty     < big_empty)     << std::endl;
	std::cout << (big_empty < empty) << std::endl;
	std::cout << (mouse     < big_mouse)     << std::endl;
	std::cout << (big_mouse < mouse) << std::endl;

	std::cout << (empty     >= big_empty)     << std::endl;
	std::cout << (big_empty >= empty) << std::endl;
	std::cout << (mouse     >= big_mouse)     << std::endl;
	std::cout << (big_mouse >= mouse) << std::endl;

	std::cout << (empty     <= big_empty)     << std::endl;
	std::cout << (big_empty <= empty) << std::endl;
	std::cout << (mouse     <= big_mouse)     << std::endl;
	std::cout << (big_mouse <= mouse) << std::endl;
}


void relational_operators() {
	std::cout << "relational_operators" << std::endl;
	lib::con<int> def;
	for (int i = 0; i < 20; i += 2) {
		def.push_back(2);
	}
	lib::con<int> def2;
	for (int i = 1; i < 20; i += 2) {
		def2.push_back(2);
	}
	std::cout << (def >  def2) << std::endl;
	std::cout << (def >= def2) << std::endl;
	std::cout << (def <  def2) << std::endl;
	std::cout << (def <= def2) << std::endl;
	std::cout << (def == def2) << std::endl;
	std::cout << (def != def2) << std::endl;
}


void ft_modifiers_test() {

	ft_assign_n_val_test();
	ft_push_back_test();
	ft_pop_back_test();
	ft_insert_iter_val_test();
	ft_insert_iter_n_val_test();
	ft_insert_iter_iter_iter_test();

	ft_erase_2540_leaks_test();
	ft_swap_test();
	ft_clear_test();
	ft_relational_operators();
}


void std_constructors_capacity_test() {
	ft_defoult_constructor();
	ft_n_constructor();
	ft_n_val_constructor();
	ft_copy_constructor();
	ft_reserve_test();
}

void std_operator_assignment_test() {
	std::cout << "\noperator_assignment\n" << std::endl;
	lib::con<Test> base(128);
	for (size_t i = 0; i < base.size(); ++i) {
		base[i].some_ = i;
	}

	lib::con<Test> copy;
	copy = base;

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
*/

int		main(){
	
//	std_constructors_capacity_test();
//	std_operator_assignment_test();
//	ft_iterator_test();
//	ft_el_access_test();
//	ft_modifiers_test();
//	relational_operators();
	std::cout << "end\n";
	sleep(10);
}