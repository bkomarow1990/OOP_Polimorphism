#pragma once
#include "Animal.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
#include "Parrot.h"
#include <iostream>
#include <vector>
using namespace std;
class Zoo
{
public:
	Zoo() = default;
	~Zoo();
	void add();
	void print()const;
	void edit(const size_t& index, const size_t& age, const size_t& weight, const string& owner); // edit age or weight
	const bool isCorrectIndex(const size_t & index)const;
private:
	void clear();
	vector <DomesticAnimal* > domestic_list;
};

