#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & ft);
	~ScavTrap();

	ScavTrap & operator =(ScavTrap const & ft);

	void BottleFlip();
	void ChubbyBunny();
	void DrawMyLife();
	void _100LayersOfScotch();
	void InMyFeelings();

	void challengeNewcomer();
};

#endif