#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"
#include "Zoo.h"
using namespace std;
int main() {
	Animal* a = new Dog(3, 8, "Vadim Beliy", "simple");
	a->print();
	vector<Animal*>animals = { a };
	/*for (auto& i : animals)
	{
		i->sound();
	}*/
	cout << "Cat" << endl;
	Animal* b = new Cat(3, 8, "Vadim Beliy", 10);
	b->print();
	cout << "CW" << endl;

	return 0;
}