#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	srand(time(0));
	std::cout << "♥♥♥ Unknown CL4P-TP robot is borned ♥♥♥" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: name(name)
{
	srand(time(0));
	std::cout << "♥♥♥ CL4P-TP robot " << name << " is borned ♥♥♥" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ft) {
	std::cout << "♥♥♥ CL4P-TP robot " << name << " is cloned ♥♥♥" << std::endl;
	*this = ft;
}

ClapTrap::~ClapTrap()
{
	std::cout << "XXX CL4P-TP robot " << name << " is died XXX" << std::endl;
}

ClapTrap & ClapTrap::operator =(ClapTrap const & ft) {

	this->hit_points = ft.get_hit_points();
	this->max_hit_points = ft.get_max_hit_points();
	this->energy_points = ft.get_energy_points();
	this->max_energy_points = ft.get_hit_points();
	this->level = ft.get_level();
	this->name = ft.get_name();
	this->melee_attack_damage = ft.get_melee_attack_damage();
	this->ranged_attack_damage = ft.get_ranged_attack_damage();
	this->armor_damage_reduction = ft.get_armor_damage_reduction();

	return (*this);
}

int ClapTrap::get_hit_points() const {
	return (this->hit_points);
}

int ClapTrap::get_max_hit_points() const {
	return (this->max_hit_points);
}

int ClapTrap::get_energy_points() const {
	return (this->energy_points);
}

int ClapTrap::get_max_energy_points() const {
	return (this->max_energy_points);
}

int ClapTrap::get_level() const {
	return (this->level);
}

std::string ClapTrap::get_name() const {
	return (this->name);
}

int ClapTrap::get_melee_attack_damage() const {
	return (this->melee_attack_damage);
}

int ClapTrap::get_ranged_attack_damage() const {
	return (this->ranged_attack_damage);
}

int ClapTrap::get_armor_damage_reduction() const {
	return (this->armor_damage_reduction);
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "CL4P-TP robot named " << this->name << " attacks " << target << 
	" at range, causing " << this->ranged_attack_damage << "points of damage !" << std::endl;

}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "CL4P-TP robot named " << this->name << " attacks " << target << 
	" at melee, causing " << this->melee_attack_damage << "points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_points - (int)amount < 0)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "Now, CL4P-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points + (int)amount > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	else
		this->hit_points += amount;
	std::cout << "Now, CL4P-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}
