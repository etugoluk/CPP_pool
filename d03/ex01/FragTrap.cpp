#include "FragTrap.hpp"

FragTrap::FragTrap() : 
	hit_points(100),
	max_hit_points(100), 
	energy_points(100),
	max_energy_points(100),
	level(1), 
	name("Incognito"),
	melee_attack_damage(30),
	ranged_attack_damage(20),
	armor_damage_reduction(5)
{
	srand(time(0));
	std::cout << "♥♥♥ Unknown FR4G-TP robot is borned ♥♥♥" << std::endl;
}

FragTrap::FragTrap(std::string name) :
	hit_points(100),
	max_hit_points(100), 
	energy_points(100),
	max_energy_points(100),
	level(1), 
	name(name),
	melee_attack_damage(30),
	ranged_attack_damage(20),
	armor_damage_reduction(5)
{
	srand(time(0));
	std::cout << "♥♥♥ FR4G-TP robot " << name << " is borned ♥♥♥" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft) {
	std::cout << "♥♥♥ FR4G-TP robot " << name << " is cloned ♥♥♥" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap()
{
	std::cout << "XXX FR4G-TP robot " << name << " is died XXX" << std::endl;
}

FragTrap & FragTrap::operator =(FragTrap const & ft) {

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

int FragTrap::get_hit_points() const {
	return (this->hit_points);
}

int FragTrap::get_max_hit_points() const {
	return (this->max_hit_points);
}

int FragTrap::get_energy_points() const {
	return (this->energy_points);
}

int FragTrap::get_max_energy_points() const {
	return (this->max_energy_points);
}

int FragTrap::get_level() const {
	return (this->level);
}

std::string FragTrap::get_name() const {
	return (this->name);
}

int FragTrap::get_melee_attack_damage() const {
	return (this->melee_attack_damage);
}

int FragTrap::get_ranged_attack_damage() const {
	return (this->ranged_attack_damage);
}

int FragTrap::get_armor_damage_reduction() const {
	return (this->armor_damage_reduction);
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP robot named " << this->name << " attacks " << target << 
	" at range, causing " << this->ranged_attack_damage << "points of damage !" << std::endl;

}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP robot named " << this->name << " attacks " << target << 
	" at melee, causing " << this->melee_attack_damage << "points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (this->hit_points - (int)amount < 0)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "Now, FR4G-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->hit_points + (int)amount > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	else
		this->hit_points += amount;
	std::cout << "Now, FR4G-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}

void FragTrap::BlightBot(std::string const &target)
{
	std::cout << "\033[31mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Blight Bot" << std::endl;
	std::cout << "Burn, my servant\033[0m" << std::endl;
}

void FragTrap::Funzerking(std::string const &target)
{
	std::cout << "\033[32mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Funzerking" << std::endl;
	std::cout << "I can't stop it. SHOOT!\033[0m" << std::endl;
}

void FragTrap::Mechromagician(std::string const &target)
{
	std::cout << "\033[33mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Mechromagician" << std::endl;
	std::cout << "So cool, but so inaccurate!\033[0m" << std::endl;
}

void FragTrap::RubberDucky(std::string const &target)
{
	std::cout << "\033[34mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Rubber Ducky" << std::endl;
	std::cout << "Random jumping and reflection of bullets!\033[0m" << std::endl;	
}

void FragTrap::Shhh__trap(std::string const &target)
{
	std::cout << "\033[35mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Shhhh.....trap" << std::endl;
	std::cout << "Let the hologram / Invisible be cool / Not many or syllables?\033[0m" << std::endl;
}

void FragTrap::Miniontrap(std::string const &target)
{
	std::cout << "\033[36mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Miniontrap" << std::endl;
	std::cout << "You have a servant!\033[0m" << std::endl;
}

void FragTrap::MeatUnicycle(std::string const &target)
{
	std::cout << "\033[37mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Meat Unicycle" << std::endl;
	std::cout << "No shooting! Hand-to-hand fight!\033[0m" << std::endl;
}

void FragTrap::Medbot(std::string const &target)
{
	std::cout << "\033[31mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Medbot" << std::endl;
	std::cout << "Lasers - for the treatment!\033[0m" << std::endl;
}

void FragTrap::SenselessSacrifice(std::string const &target)
{
	std::cout << "\033[32mFR4G-TP robot " << this->name << " attacks " << target << 
	" using Senseless Sacrifice" << std::endl;
	std::cout << "You're awesome!\033[0m" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->energy_points < 25)
	{
		std::cout << "Not enough energy, oops" << std::endl;
		return ;
	}

	this->energy_points -= 25;

	void (FragTrap::*ptr[9])(std::string const & target);
	ptr[0] = &FragTrap::BlightBot;
	ptr[1] = &FragTrap::Funzerking;
	ptr[2] = &FragTrap::Mechromagician;
	ptr[3] = &FragTrap::RubberDucky;
	ptr[4] = &FragTrap::Shhh__trap;
	ptr[5] = &FragTrap::Miniontrap;
	ptr[6] = &FragTrap::MeatUnicycle;
	ptr[7] = &FragTrap::Medbot;
	ptr[8] = &FragTrap::SenselessSacrifice;

	int i = rand() % 9;
	(this->*(ptr[i]))(target);
}

