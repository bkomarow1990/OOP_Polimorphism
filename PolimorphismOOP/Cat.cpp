#include "Cat.h"

Cat::Cat(const size_t& age, const size_t weight, const string& owner, const size_t& wool_lenght)
	:DomesticAnimal(age, weight, owner), wool_lenght(wool_lenght)
{
}

void Cat::sound() const
{
	cout << "Meow Meow" << endl;
}

void Cat::eat() const
{
	cout << "Fish, Chicken and other" << endl;
}

void Cat::type() const
{
	DomesticAnimal::type();
	cout << "Cat" << endl;
}

void Cat::print() const
{
	cout << "Cat: " << endl;
	DomesticAnimal::print();
	cout << "Wool lenght: " << wool_lenght << endl;
	sound();
	eat();
}

void Cat::setWoolLenght(const size_t& length)
{
	if (length!=0)
	{
		wool_lenght = length;
	}
}
