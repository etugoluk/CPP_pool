#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(int hp, std::string const & type);
	RadScorpion(RadScorpion const & rs);
	virtual ~RadScorpion();

	RadScorpion & operator = (RadScorpion const & rs);

 };


#endif