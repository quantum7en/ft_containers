#include <iostream>
#include <vector>
#include <string>
#include "classes.hpp"

#define DarkGreen "\033[32m"
#define Red "\033[31m"
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define RESET "\033[0m"

void ListTest(){
	std::cout << DarkGreen << "List test" << RESET << std::endl;

}

int main() {

	ListTest();

	example ex;
	ex.setStr("hello");
	//std::ostream &operator<<(std::ostream &os, const example &ex);
	std::vector<class example> vec;
	for(int i = 0; i < 7; i++){
		ex.setStr(i+"qwertyuiopasdfghjkl");
		vec.push_back(ex);
		std::cout << vec[i] <<"\t";
		}
	std::cout << *(vec.end()) <<"a\t";
	std::cout << *(vec.end()) <<"a\t";


	std::cout << "end\n";
}
