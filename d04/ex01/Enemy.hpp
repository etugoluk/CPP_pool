#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
protected:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & e);
	virtual ~Enemy();

	Enemy & operator = (Enemy const & e);

	std::string getType() const;
	int getHP() const;
	void setHP(int hp);

	virtual void takeDamage(int n);
 };


#endif