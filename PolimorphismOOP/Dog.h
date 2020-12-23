#pragma once
#include "DomesticAnimal.h"
class Dog : public DomesticAnimal
{
public:
	Dog(const size_t& age = 0, const size_t weight = 0, const string& owner = "NoName", const string& breed = "No breed");
	void sound() const override;
	void eat() const override;
	void type() const override;
	void print()const override;
	void setBreed(const string& breed);
private:
	string breed;
};

