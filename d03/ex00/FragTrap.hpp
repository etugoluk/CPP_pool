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