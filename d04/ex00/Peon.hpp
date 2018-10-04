#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	Peon();
public:
	Peon(std::string name);
	Peon(Peon const & p);
	~Peon();
	
	Peon & operator =(Peon const & p);

	void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, Peon const & p);

#endif