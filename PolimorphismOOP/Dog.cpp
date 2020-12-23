#include "Dog.h"

Dog::Dog(const size_t& age, const size_t weight, const string& owner, const string& breed)
	:DomesticAnimal(age, weight, owner), breed(breed)
{
}

void Dog::sound() const
{
	cout << "Wow-Wow " << endl;
}

void Dog::eat() const
{
	cout << "Meat" << endl;
}

void Dog::type() const
{
	cout << "Dog from: " << endl;
	DomesticAnimal::type();
}

void Dog::print() const
{
	DomesticAnimal::print();
	cout << "Breed of dog: " << breed << endl;
}

void Dog::setBreed(const string& breed) 
{
	if (breed.length()!=1)
	{
		this->breed = breed;
	}
}
