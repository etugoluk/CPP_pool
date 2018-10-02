#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & ft);
	~NinjaTrap();

	NinjaTrap & operator =(NinjaTrap const & ft);

	void ninjaShoebox(ClapTrap const & ct);
	void ninjaShoebox(FragTrap const & ft);
	void ninjaShoebox(ScavTrap const & st);
	void ninjaShoebox(NinjaTrap const & nt);
};

#endif