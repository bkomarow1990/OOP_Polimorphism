#include "WildAnimal.h"

WildAnimal::WildAnimal(const size_t& age, const size_t& weight)
	:Animal(age,weight)
{
}

void WildAnimal::type() const
{
	cout << "This is wild animal" << endl;
}

void WildAnimal::print() const
{
	cout << "Wild Animal " << endl;
	cout << "Age: " << age << " Weight: " << weight << endl;
}
