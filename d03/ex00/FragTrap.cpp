#include "FragTrap.hpp"

int const FragTrap::max_hit_points = 100;
int const FragTrap::energy_points = 100;

FragTrap::FragTrap() : hit_points(100),energy_points(100), level(1), name("Incognito"), 
						melee_attack_danage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "Unknown FR4G-TP robot is borned" << std::endl;
}

FragTrap::FragTrap(std::string name) : hit_points(100),energy_points(100), level(1), name(name), 
						melee_attack_danage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "FR4G-TP robot named " << name << " is borned" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft)
{
	std::cout << "FR4G-TP robot named " << name << " is cloned" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP robot named " << name << " is died" << std::endl;
}

FragTrap & FragTrap::operator =(FragTrap const & ft);

void FragTrap::rangedAttack(std::string const & target);
void FragTrap::meleeAttack(std::string const & target);
void FragTrap::takeDamage(unsigned int amount);
void FragTrap::beRepaired(unsigned int amount);
void vaulthunter_dot_exe(std::string const & target);
