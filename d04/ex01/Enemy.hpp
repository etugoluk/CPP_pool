#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy {
private:
	int hp;
	std::string type;
	int damage;
public:

	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & e);
	virtual ~Enemy();

	Enemy & operator = (Enemy const & e);

	std::string virtual getType() const;
	int getHP() const;
	virtual void takeDamage(int);
 };


#endif