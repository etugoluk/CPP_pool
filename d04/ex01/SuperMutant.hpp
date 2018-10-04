#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

class SuperMutant : public Enemy{
public:
	SuperMutant();
	SuperMutant(int hp, std::string const & type);
	SuperMutant(SuperMutant const & sm);
	~SuperMutant();

	SuperMutant & operator = (SuperMutant const & sm);

	// std::string virtual getType() const;
	// int getHP() const;
	// virtual void takeDamage(int);
 };


#endif