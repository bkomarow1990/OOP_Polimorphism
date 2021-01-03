#pragma once
#include <iostream>
#include "Animal.h"
class WildAnimal : public Animal
{
public:
	WildAnimal(const size_t& age = 0, const size_t& weight = 1);
	void type() const override;
	void print() const override;
	virtual void live() const = 0;
private:
};


