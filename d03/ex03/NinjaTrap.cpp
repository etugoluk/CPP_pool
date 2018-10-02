
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << "♥♥♥ INAC robot " << name << " is borned ♥♥♥" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ft) {
	std::cout << "♥♥♥ INAC robot " << name << " is cloned ♥♥♥" << std::endl;
	*this = ft;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "XXX INAC robot " << name << " is died XXX" << std::endl;
}

NinjaTrap & NinjaTrap::operator =(NinjaTrap const & ft) {

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

void NinjaTrap::ninjaShoebox(ClapTrap const & ct)
{
	std::cout << "INAC robot " << name << " kills ClapTrap robot " << ct.get_name() << " HOHOHO" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & ft)
{
	std::cout << "INAC robot " << name << " kills FragTrap robot " << ft.get_name() << " HEHEHE" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & st)
{
	std::cout << "INAC robot " << name << " kills ScavTrap robot " << st.get_name() << " HAHAHA" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & nt)
{
	std::cout << "INAC robot " << name << " kill NinjaTrap robot " << nt.get_name() << " HIHIHI" << std::endl;
}
