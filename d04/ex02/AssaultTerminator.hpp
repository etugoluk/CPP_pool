#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	int add;
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &at);
	~AssaultTerminator();

	AssaultTerminator & operator = (AssaultTerminator const &at);

	int							getAdd() const;
	virtual void				battleCry() const;
	virtual void				rangedAttack() const;
	virtual void				meleeAttack() const;
	virtual ISpaceMarine 		*clone( void ) const;
};

#endif