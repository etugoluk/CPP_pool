#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & ft);
	~FragTrap();

	FragTrap & operator =(FragTrap const & ft);

	void vaulthunter_dot_exe(std::string const & target);

	void BlightBot(std::string const & target);
	void Funzerking(std::string const & target);
	void Mechromagician(std::string const & target);
	void RubberDucky(std::string const & target);
	void Shhh__trap(std::string const & target);
	void Miniontrap(std::string const & target);
	void MeatUnicycle(std::string const & target);
	void Medbot(std::string const & target);
	void SenselessSacrifice(std::string const & target);

};

#endif