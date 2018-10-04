#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
protected:
	std::string name;
	std::string title;
private:
	Sorcerer();

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & s);
	~Sorcerer();
	
	Sorcerer & operator =(Sorcerer const & s);

	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const &v) const;
};

std::ostream & operator << (std::ostream &os, Sorcerer const & s);

#endif