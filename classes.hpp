//
// Created by Phylicia Melinda on 5/7/21.
//

#ifndef FT_CONTAINERS_CLASSES_HPP
#define FT_CONTAINERS_CLASSES_HPP

#include <iostream>
#include <ostream>
#include <vector>
#include <string>

class example{
public:
	example(){};
	~example(){};
	std::string str;
	void setStr(std::string const &s){str=s;}
	std::string const &getStr()const {return this->str;}

};

std::ostream &operator<<(std::ostream &os, const example &ex){
	os <<  ex.getStr() << std::endl;
	return os;
}

#endif //FT_CONTAINERS_CLASSES_HPP
