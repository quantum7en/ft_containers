#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
#include "classes.hpp"
#include "ft_list.hpp"
#include <map>

#define DarkGreen "\033[32m"
#define Red "\033[31m"
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define RESET "\033[0m"

void ListTest(){
	std::cout << DarkGreen << "std:: List test" << RESET << std::endl;
	std::list<int> first;
	std::list<int>::iterator it = first.begin();
	std::cout << *it << "   here\n";
	std::list<int> second (4,100);

	std::cout << DarkGreen << "ft:: List test" << RESET << std::endl;
}

int main() {

	ListTest();

	example ex;
	ex.setStr("hello");


	std::vector<class example> vec;
	for(int i = 0; i < 7; i++){
		ex.setStr(i+"qwertyuiopasdfghjkl");
		vec.push_back(ex);
		std::cout << vec[i] <<"\t";
		}
	std::cout << *(vec.end()) <<"a\t";
	std::cout << *(vec.end()) <<"a\t";

	//std::stack stk(vec, <vector>);

/*	size_type max_size() const throw(){
//#if defined (__APPLE__) || defined (_WIN32)
		return std::numeric_limits<size_type>::max() / sizeof(value_type);
	}
*/
	std::cout << "end\n";
}
