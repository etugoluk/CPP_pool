#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title) {
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & s){
	*this = s;
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator =(Sorcerer const & s){
	if (this != &s)
	{
		this->name = s.getName();
		this->title = s.getTitle();
	}
	return *this;
}

std::string Sorcerer::getName() const {
	return this->name;
}

std::string Sorcerer::getTitle() const {
	return this->title;
}

std::ostream & operator << (std::ostream &os, Sorcerer const & s) {
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}