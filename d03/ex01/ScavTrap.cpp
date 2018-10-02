#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
	hit_points(100),
	max_hit_points(100), 
	energy_points(50),
	max_energy_points(50),
	level(1), 
	name("Incognito"),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	srand(time(0));
	std::cout << "♥♥♥ Unknown SC4V-TP robot is borned ♥♥♥" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	hit_points(100),
	max_hit_points(100), 
	energy_points(50),
	max_energy_points(50),
	level(1), 
	name(name),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	srand(time(0));
	std::cout << "♥♥♥ SC4V-TP robot " << name << " is borned ♥♥♥" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ft) {
	std::cout << "♥♥♥ SC4V-TP robot " << name << " is cloned ♥♥♥" << std::endl;
	*this = ft;
}

ScavTrap::~ScavTrap()
{
	std::cout << "XXX SC4V-TP robot " << name << " is died XXX" << std::endl;
}

ScavTrap & ScavTrap::operator =(ScavTrap const & ft) {

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

int ScavTrap::get_hit_points() const {
	return (this->hit_points);
}

int ScavTrap::get_max_hit_points() const {
	return (this->max_hit_points);
}

int ScavTrap::get_energy_points() const {
	return (this->energy_points);
}

int ScavTrap::get_max_energy_points() const {
	return (this->max_energy_points);
}

int ScavTrap::get_level() const {
	return (this->level);
}

std::string ScavTrap::get_name() const {
	return (this->name);
}

int ScavTrap::get_melee_attack_damage() const {
	return (this->melee_attack_damage);
}

int ScavTrap::get_ranged_attack_damage() const {
	return (this->ranged_attack_damage);
}

int ScavTrap::get_armor_damage_reduction() const {
	return (this->armor_damage_reduction);
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP robot named " << this->name << " attacks " << target << 
	" at range, causing " << this->ranged_attack_damage << "points of damage !" << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP robot named " << this->name << " attacks " << target << 
	" at melee, causing " << this->melee_attack_damage << "points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (this->hit_points < amount)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "Now, SC4V-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->hit_points + (int)amount > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	else
		this->hit_points += amount;
	std::cout << "Now, SC4V-TP robot " << this->name << " has " << this->hit_points << " hit points!" << std::endl;
}

void ScavTrap::BottleFlip()
{
	std::cout << "\033[31m_______________Bottle Flip CHALLENGE________________" << std::endl;
	std::cout << " mmm\n )-(\n(   )\n|   |\n|   |\n|___|" << std::endl;
	std::cout << "DAB IT\033[0m" << std::endl;
}

void ScavTrap::ChubbyBunny()
{
	std::cout << "\033[32m_______________Chubby Bunny CHALLENGE_______________" << std::endl;
	std::cout << "\\ \\     / /\n  \\ \\_/ /\n  ( -.- )\n(,,) . (,,)\n(\" _)-(_ \")" << std::endl;
	std::cout << "I'll never eat marshmallows again!!!\033[0m" << std::endl;
}

void ScavTrap::DrawMyLife()
{
	std::cout << "\033[33m_______________Draw my life CHALLENGE_______________" << std::endl;
	std::cout << "  __,_,\n  [_|_/\n  //\n _//    __\n(_|)   |@@|\n  \\ \\__ \\--/ __\n  \\o__|----|  |   __\n    \\ }{ /\\ )_ / _\\\n      /\\__/\\ \\__O (__\n     (--/\\--)    \\__/\n     _)(  )(_\n    `---''---`" << std::endl;
    std::cout << "My maximum, sorry ;3 \033[0m" << std::endl;
}

void ScavTrap::_100LayersOfScotch()
{
	std::cout << "___________100 Layers of scotch CHALLENGE___________" << std::endl;
	std::cout << "I can't write anything, heelp!" << std::endl;
}

void ScavTrap::InMyFeelings()
{
	std::cout << "\033[36m______________In my feelings CHALLENGE______________" << std::endl;
	std::cout << "Kiki, do you love me?\nAre you riding?\033[0m" << std::endl;
}


void ScavTrap::challengeNewcomer() {
	if (this->energy_points < 10)
	{
		std::cout << "Not enough energy, oops" << std::endl;
		return ;
	}

	this->energy_points -= 10;

	void (ScavTrap::*ptr[5])();
	ptr[0] = &ScavTrap::BottleFlip;
	ptr[1] = &ScavTrap::ChubbyBunny;
	ptr[2] = &ScavTrap::DrawMyLife;
	ptr[3] = &ScavTrap::_100LayersOfScotch;
	ptr[4] = &ScavTrap::InMyFeelings;

	int i = rand() % 5;
	(this->*(ptr[i]))();
}

