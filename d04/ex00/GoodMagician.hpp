#ifndef GOOD_MAGICIAN_HPP
# define GOOD_MAGICIAN_HPP

#include "Sorcerer.hpp"

class GoodMagician : public Sorcerer
{
public:
	GoodMagician(std::string name, std::string title);
	~GoodMagician();
	
	void SalvioHexia(Victim const & v);
};

#endif