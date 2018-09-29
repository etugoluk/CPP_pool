#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & ft);
	~FragTrap();

	FragTrap & operator =(FragTrap const & ft);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

private:
	int hit_points;
	int energy_points;
	int level;
	std::string name;
	int melee_attack_danage;
	int ranged_attack_damage;
	int armor_damage_reduction;

	static int const max_hit_points;
	static int const energy_points;
};

#endif