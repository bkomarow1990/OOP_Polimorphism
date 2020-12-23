#pragma once
#include <iostream>
#include "DomesticAnimal.h"
using namespace std;
class Cat: public DomesticAnimal
{
public:
	Cat(const size_t& age = 0, const size_t weight = 0, const string& owner = "NoName", const size_t& wool_lenght = 1);
	void sound() const override;
	void eat() const override;
	void type() const override;
	void print()const override;
	void setWoolLenght(const size_t& length);
private:
	size_t wool_lenght;
};

