#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

class RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(int hp, std::string const & type);
	RadScorpion(RadScorpion const & rs);
	~RadScorpion();

	RadScorpion & operator = (RadScorpion const & rs);

	// std::string virtual getType() const;
	// int getHP() const;
	// virtual void takeDamage(int);
 };


#endif