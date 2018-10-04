#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character {

	std::string name;
	int			ap;
	AWeapon*	aw;

public:
	Character();
	Character(std::string const & name);
	Character(Character const & ch);
	~Character();

	Character & operator = (Character const & ch);

	void recoverAP();
	void equip(AWeapon* aw);
	void attack(Enemy* e);
	std::string virtual getName() const;
 };

std::ostream & operator <<(std::ostream &os, Character const &ch);

#endif