#include "Single.h"

Single::Single()
{
	age = 0;
	name = "";
}

Single::Single(int age,string name)
{
	this->age = age;
	this->name = name;
}

Single::~Single()
{
}

int Single::getAge() const
{
	return age;
}

string Single::getName() const
{
	return name;
}
