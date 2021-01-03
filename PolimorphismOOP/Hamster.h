#pragma once
#include "DomesticAnimal.h"
class Hamster : public DomesticAnimal
{
public:
	Hamster(const size_t& age = 1, const size_t& weight = 1, const string& owner = "NoName");
	void sound() const override {
		cout << "Only rustling" << endl;
	}
	void eat() const override {
		cout << "Fead and leafs" << endl;
	}
	void type() const override {
		cout << "Hamster from : " << endl;
		DomesticAnimal::type();
	}
	void print()const override {
		cout << "Hamster : " << endl;
		sound();
		eat();
		DomesticAnimal::print();
	}
private:
};
inline Hamster::Hamster(const size_t& age, const size_t& weight, const string& owner)
	:DomesticAnimal(age,weight,owner)
{
}