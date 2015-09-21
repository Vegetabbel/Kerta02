#include "Person.h"


Person::Person(std::string name, unsigned int age)
	: name(name), age(age)
{
	/* this->name = name;
	this->age = age; */
}


Person::~Person()
{
}

void Person::setName(std::string name)
{
	this->name = name;
}

std::string Person::getName()
{
	return name;
}