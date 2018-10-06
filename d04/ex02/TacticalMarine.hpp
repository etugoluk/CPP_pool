#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	int add;
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &tm);
	~TacticalMarine();

	TacticalMarine & operator = (TacticalMarine const &tm);

	int							getAdd() const;
	virtual ISpaceMarine*		clone() const;
	virtual void				battleCry() const;
	virtual void				rangedAttack() const;
	virtual void				meleeAttack() const;
};

#endif