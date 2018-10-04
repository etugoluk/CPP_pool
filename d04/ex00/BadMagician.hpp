#ifndef BAD_MAGICIAN_HPP
# define BAD_MAGICIAN_HPP

#include "Sorcerer.hpp"

class BadMagician : public Sorcerer
{
public:
	BadMagician(std::string name, std::string title);
	~BadMagician();
	
	void Crucio(Victim &v);
	void Crucio(Sorcerer &s);
};

#endif