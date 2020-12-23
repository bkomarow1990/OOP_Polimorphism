#pragma once
#include "Animal.h"
#include <iostream>
#include <vector>
using namespace std;
class Zoo
{
public:
	Zoo() = default;
	void add(Animal* animal);
	void print()const;
	void edit(const size_t& index, const size_t& age, const size_t& weight); // edit age or weight
private:
	vector <Animal* > zoo_list;
};

