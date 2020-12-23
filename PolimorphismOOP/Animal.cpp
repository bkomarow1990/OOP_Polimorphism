#include "Animal.h"

Animal::Animal(const size_t& age, const size_t& weight)
	:age(age),weight(weight)
{
}

void Animal::print() const
{	
	type();
	cout << "Animal, age: " << age << endl;
	cout << "Weight: " << weight << endl;
	eat();
	sound();

}

void Animal::setAge(const size_t& age)
{
	if (age!=0)
	{
		this->age = age;
	}
}

void Animal::setWeight(const size_t& weight)
{
	if (weight!=0)
	{
		this->weight = weight;
	}
}
