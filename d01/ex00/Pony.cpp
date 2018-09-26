#include "Pony.hpp"

Pony::Pony() :name("noname"), age(0)
{
	std::cout << "Default Constructor" << std::endl;
}

Pony::Pony(std::string name, int age) :name(name), age(age)
{
	std::cout << "Constructor of Pony with name: " << this->name <<
	", age: " << this->age << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor of Pony with name: " << this->name <<
	", age: " << this->age << std::endl;
}
