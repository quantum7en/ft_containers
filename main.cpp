#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
#include "classes.hpp"
#include "ft_list.hpp"
//#include "ft_map.hpp"
#include <map>

#define lib ft
#define con List

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

template < typename iterator >
void            printValues(iterator begin, iterator end)
{
	std::cout << YELLOW " \\" RESET "Tail -> ";
	while (begin != end)
		std::cout << *begin++ << " -> ";
	PRINT("Tail");
}


void ListTest(){

	lib::con<Test>           empty;
	lib::con<Test>           mouse;
	lib::con<Test>           fat_mouse;
	lib::con<Test>::iterator it;
	for (int i = 0; i < 10; ++i) {
		mouse.push_back(i + 10);
	}
	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}
	it = mouse.begin();
	++it; ++it;

	std::cout << "HERE" << std::endl;

	mouse.splice(it, fat_mouse);

	std::cout << "HERE" << std::endl;

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.begin(), fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; ++i) {
		fat_mouse.push_back(i + 100);
	}

	mouse.splice(mouse.end(), fat_mouse);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;
	std::cout << "fat_mouse:" << std::endl;
	std::cout << "size:"  << fat_mouse.size()  << std::endl;
	std::cout << "empty:" << fat_mouse.empty() << std::endl;
	for (it = fat_mouse.begin(); it != fat_mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;

	mouse.splice(mouse.begin(), empty);

	std::cout << "mouse:" << std::endl;
	std::cout << "size:"  << mouse.size()  << std::endl;
	std::cout << "empty:" << mouse.empty() << std::endl;
	for (it = mouse.begin(); it != mouse.end(); ++it) {
		std::cout << it->some_ << " ";
	}
	std::cout << std::endl;


//	std::cout << DarkGreen << "std:: List test" << RESET << std::endl;
//	std::list<std::string> first;
//	std::list<std::string>::iterator it = first.end();
//	std::cout << *it << "here\n";
//	std::list<int> second (7,100777);
//	int x = 0;
//	for(std::list<int>::iterator it = second.begin(); it != (second.end()); it++, x++) {
//		std::cout << *it << "\t";




//	PRINT("\n ---| from int |---");
//	int     tmp[] = {5,-10,21,42,78, -290};
//	std::list<int>  test;
//	for(int i = 0; i < 7; i++)
//		test.push_back(i);
//	std::cout << test.max_size() << "\n";
//	for(std::list<int>::iterator iter = test.begin(); iter != (test.end()); iter++)
//		std::cout << *iter << "\n";
//		//std::cout << test.empty()std::cout <<
//		//std::cout <<  test.size() << "\t";}
//
//
//	for(std::list<int>::reverse_iterator iter = test.rbegin(); iter != (test.rend()); iter++) {
//		std::cout << *iter << "\t";
//		//std::cout << test.empty() << "\t";
//		//std::cout <<  test.size() << "\t";
//	}
//	//TEST_LIST
//
//PRINT("\n ---| from iterator |---");
//std::list<int>  test_std_list(5,10);
//PRINT("list")
////TEST_LIST
//PRINT("ft_list")
//std::list<int>::iterator    it1 = test_std_list.begin();
//// std::list<int>::iterator end = test.end();
//std::list<int>      ft_test(it1, it1.operator--(45));
//// it.operator--(45)    ==  it--
//// it.operator--()      ==  --it
////TEST(ft_test);
//// std::list<std::string>::iterator it;
//// it = test.begin();
//
//	std::cout << DarkGreen << "ft:: List test" << RESET << std::endl;
}

int main() {

	ListTest();

//	example ex;
//	ex.setStr("hello");
//
//
//	std::vector<class example> vec;
//	for(int i = 0; i < 7; i++){
//		ex.setStr(i+"qwertyuiopasdfghjkl");
//		vec.push_back(ex);
//		std::cout << vec[i] <<"\t";
//		}
//	std::cout << *(vec.end()) <<"a\t";
//	std::cout << *(vec.end()) <<"a\t";

	//std::stack stk(vec, <vector>);

/*	size_type max_size() const throw(){
//#if defined (__APPLE__) || defined (_WIN32)
		return std::numeric_limits<size_type>::max() / sizeof(value_type);
	}
*/
	std::cout << "end\n";
}
