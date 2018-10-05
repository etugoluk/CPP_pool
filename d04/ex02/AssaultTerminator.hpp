#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &at);
	~AssaultTerminator();

	AssaultTerminator & operator = (AssaultTerminator const &at);

	void				battleCry();
	void				rangedAttack();
	void				meleeAttack();
};

#endif