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
	type();
	cout << "Age: " << age << " Weight: " << weight << " Owner: " << owner << endl;
}

void DomesticAnimal::setOwner(const string& owner)
{
	if (!owner.empty())
	{
		this->owner = owner;
	}
}
