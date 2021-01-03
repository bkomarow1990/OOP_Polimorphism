#pragma once
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class DomesticAnimal  : public Animal
{
public:
	DomesticAnimal(const size_t & age = 0,const size_t & weight=1,const string& owner="NoName");
	void type() const override;
	void print() const override;
	void setOwner(const string& owner);
private:
	string owner;
};

