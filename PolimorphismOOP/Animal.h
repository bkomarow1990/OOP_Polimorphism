#pragma once
#include <iostream>
using namespace std;
class Animal 
{
public:
	Animal(const size_t & age=0, const size_t & weight=1);
	virtual void eat() const abstract;
	virtual void sound() const =  0;
	virtual void type() const abstract;
	virtual void print()const ;
	void setAge(const size_t& age);
	void setWeight(const size_t& weight);
protected:
	size_t age;
	double weight;
private:
	
	//string type;
};

