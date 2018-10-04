#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name) : name(name) {
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & v){
	*this = v;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator =(Victim const & v){
	if (this != &v)
	{
		this->name = v.getName();
	}
	return *this;
}

std::string Victim::getName() const {
	return this->name;
}

std::ostream & operator << (std::ostream &os, Victim const & v) {
	os << "I am " << v.getName() << " and I like otters !" << std::endl;
	return os;
}

void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}