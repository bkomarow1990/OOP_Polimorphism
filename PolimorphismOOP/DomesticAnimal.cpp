#include "DomesticAnimal.h"

DomesticAnimal::DomesticAnimal(const size_t& age, const size_t& weight, const string& owner)
	:Animal(age, weight),owner(owner)
{
}

void DomesticAnimal::type() const
{
	cout << "It`s domestic animal" << endl;
}

void DomesticAnimal::print() const
{
	cout << "Owner : " << owner << endl;
	Animal::print();
}
