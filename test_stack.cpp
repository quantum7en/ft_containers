//
// Created by Phylicia Melinda on 6/14/21.
//

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
#include "classes.hpp"
#include "ft_stack.hpp"
#include "ft_list.hpp"
#include "ft_reverse_iterator.hpp"

#define lib ft


void test_stack(){
	lib::Stack<int> def;

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;

	for (int i = 0; i < 10; ++i) {
		def.push(i);
	}

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << def.top() << " ";
		def.pop();
	}

	std::cout << def.empty() << std::endl;
	std::cout << def.size() << std::endl;

}

int main(){
	test_stack();
}