#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
protected:
	std::string name;
	Victim();
public:
	Victim(std::string name);
	Victim(Victim const & v);
	~Victim();
	
	Victim & operator =(Victim const & v);

	std::string getName() const;

	void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, Victim const & v);

#endif