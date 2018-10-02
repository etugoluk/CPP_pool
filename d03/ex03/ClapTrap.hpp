#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & ft);
	~ClapTrap();

	ClapTrap & operator =(ClapTrap const & ft);

	int get_hit_points() const;
	int get_max_hit_points() const;
	int get_energy_points() const;
	int get_max_energy_points() const;
	int get_level() const;
	std::string get_name() const;
	int get_melee_attack_damage() const;
	int get_ranged_attack_damage() const;
	int get_armor_damage_reduction() const;

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;
};

#endif