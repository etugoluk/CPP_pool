#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &tm);
	~TacticalMarine();

	TacticalMarine & operator = (TacticalMarine const &tm);

	TacticalMarine &	clone();
	void				battleCry();
	void				rangedAttack();
	void				meleeAttack();
};

#endif