#include "Zoo.h"

Zoo::~Zoo()
{
	clear();
}

void Zoo::add()
{
	cout << "ADD MENU" << endl;
	cout << "1. Cat" << endl;
	cout << "2. Dog" << endl;
	cout << "3. Parrot" << endl;
	cout << "4. Hamster" << endl;
	cout << "0. Exit" << endl;
	size_t answer,weight,age;
	string owner,breed;
	cin >> answer;
	switch (answer)
	{
	case 1:
		size_t wool_l;
		cout << "Enter Wool lenght: " << endl;
		cin >> wool_l;
		cout << "Enter Age: " << endl;
		cin >> age;
		cout << "Enter Owner: " << endl;
		cin >> owner;
		cout << "Enter Weight: " << endl;
		cin >> weight;
		domestic_list.push_back(new Cat(age,weight,owner,wool_l));
		break;
	case 2:
		cout << "Enter breed: " << endl;
		cin >> breed;
		cout << "Enter Age: " << endl;
		cin >> age;
		cout << "Enter Owner: " << endl;
		cin >> owner;
		cout << "Enter Weight: " << endl;
		cin >> weight;
		domestic_list.push_back(new Dog(age, weight, owner, breed));
		break;
	case 3:
		cout << "Enter Age: " << endl;
		cin >> age;
		cout << "Enter Owner: " << endl;
		cin >> owner;
		cout << "Enter Weight: " << endl;
		cin >> weight;
		domestic_list.push_back(new Parrot(age, weight, owner));
		break;
	case 4:
		cout << "Enter Age: " << endl;
		cin >> age;
		cout << "Enter Owner: " << endl;
		cin >> owner;
		cout << "Enter Weight: " << endl;
		cin >> weight;
		domestic_list.push_back(new Hamster(age, weight, owner));
		break;
	default:
		break;
	}
}

void Zoo::print() const
{
	cout << "Zoo" << endl;
	for (auto& i : domestic_list)
	{
		i->print();
	}
}



void Zoo::edit(const size_t&index, const size_t & age,const size_t& weight,const string& owner)
{
	if (domestic_list.empty() || !isCorrectIndex(index))
	{
		return;
	}
	domestic_list[index]->setAge(age);
	domestic_list[index]->setWeight(weight);
	domestic_list[index]->setOwner(owner);
}

const bool Zoo::isCorrectIndex(const size_t& index) const
{
	return index<domestic_list.size() && 0<=index;
}


void Zoo::clear()
{
	for (vector<DomesticAnimal*>::iterator it = domestic_list.begin(); it != domestic_list.end(); ++it)
		delete* it;
}
