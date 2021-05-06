#include <iostream>
#include <vector>

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

	std::vector<int> vec;
	for(int i = 0; i < 7; i++){
		vec.push_back(i);
		std::cout << vec[i] <<"\t";
		}
	std::cout << *(vec.end()) <<"\t";
	std::cout << *(vec.end()) <<"\t";
}
