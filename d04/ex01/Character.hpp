#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

	std::string name;
	int			ap;
	AWeapon*	aw;

public:
	Character();
	Character(std::string const & name);
	Character(std::string const & name, int ap, AWeapon* aw);
	Character(Character const & ch);
	~Character();

	Character & operator = (Character const & ch);

	void recoverAP();
	void equip(AWeapon* aw);
	void attack(Enemy* e);
	std::string getName() const;
	int			getAp () const;
	AWeapon*	getAweapon() const;
 };

std::ostream & operator <<(std::ostream &os, Character const &ch);

#endif