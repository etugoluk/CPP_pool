#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(int hp, std::string const & type);
	SuperMutant(SuperMutant const & sm);
	virtual ~SuperMutant();

	SuperMutant & operator = (SuperMutant const & sm);

	void takeDamage(int n);
 };


#endif