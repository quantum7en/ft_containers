#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
#include "classes.hpp"
//#include "ft_list.hpp"
#include <map>

#define DarkGreen "\033[32m"
#define Red "\033[31m"
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define RESET "\033[0m"

# define TEST_VAL(x)    printValues(x.begin(), x.end());
# define TEST_SIZE(x)   PRINT(CLR_GRN "#print values: " CLR_END << "Size: " << x.size());
# define TEST_HB(x)     PRINT(CLR_GRN "|" CLR_END << "Head: " << x.front() << " | " << x.back() << " :Back");
# define TEST_LIST      TEST_SIZE(test) TEST_HB(test)   TEST_VAL(test)
# define TEST(x)        TEST_SIZE(x)    TEST_HB(x)      TEST_VAL(x)
# define TEST_ITER(x,y) PRT_BLU(x) TEST_VAL(y)

# define PRINT(x)		std::cout<< x <<"\n";


template < typename iterator >
void            printValues(iterator begin, iterator end)
{
	std::cout << YELLOW " \\" RESET "Tail -> ";
	while (begin != end)
		std::cout << *begin++ << " -> ";
	PRINT("Tail");
}


void ListTest(){
	std::cout << DarkGreen << "std:: List test" << RESET << std::endl;
	std::list<std::string> first;
	std::list<std::string>::iterator it = first.end();
	std::cout << *it << "here\n";
	std::list<int> second (7,100777);
	int x = 0;
	for(std::list<int>::iterator it = second.begin(); it != (second.end()); it++, x++) {
		std::cout << *it << "\t";
	}

	PRINT("\n ---| from int |---");
	int     tmp[] = {5,10,21,42};
	std::list<int>  test(tmp, tmp + 4);
	//TEST_LIST

PRINT("\n ---| from iterator |---");
std::list<int>  test(5,10);
PRINT("list")
//TEST_LIST
PRINT("ft_list")
std::list<int>::iterator    it = test.begin();
// std::list<int>::iterator end = test.end();
std::list<int>      ft_test(it, it.operator--(45));
// it.operator--(45)    ==  it--
// it.operator--()      ==  --it
//TEST(ft_test);
// std::list<std::string>::iterator it;
// it = test.begin();

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
