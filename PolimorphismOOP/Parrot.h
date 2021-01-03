#pragma once
#include "DomesticAnimal.h"
class Parrot : public DomesticAnimal
{
public:
	Parrot(const size_t& age=1, const size_t& weight=1,const string& owner="NoName");
	void sound() const override {
		cout << "Kesha Durak :)" << endl;
	}
	void eat() const override {
		cout << "Fead" << endl;
	}
	void type() const override {
		cout << "Parrot from : " << endl;
		DomesticAnimal::type();
	}
	void print()const override {
		cout << "Parrot : " << endl;
		DomesticAnimal::print();
		sound();
		eat();
	}
private:
};

