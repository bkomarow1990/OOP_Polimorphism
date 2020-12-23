#include "Zoo.h"

void Zoo::add( Animal* animal)
{
	zoo_list.push_back(animal);
}

void Zoo::print() const
{
	for (auto& i : zoo_list)
	{
		i->print();
	}
}

void Zoo::edit(const size_t&index, const size_t & age,const size_t& weight)
{
	if (zoo_list.empty())
	{
		return;
	}
	if (0>index || index>zoo_list.size())
	{
		return;
	}
	zoo_list[index]->setAge(age);
	zoo_list[index]->setWeight(weight);
}
