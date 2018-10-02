#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & ft);
	~ScavTrap();

	ScavTrap & operator =(ScavTrap const & ft);

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

	void BottleFlip();
	void ChubbyBunny();
	void DrawMyLife();
	void _100LayersOfScotch();
	void InMyFeelings();

	void challengeNewcomer();

private:
	unsigned int hit_points;
	unsigned int max_hit_points;
	unsigned int energy_points;
	unsigned int max_energy_points;
	unsigned int level;
	std::string name;
	unsigned int melee_attack_damage;
	unsigned int ranged_attack_damage;
	unsigned int armor_damage_reduction;
};

#endif