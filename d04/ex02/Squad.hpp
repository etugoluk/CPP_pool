#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	Squad*	arr;
	int 	count;
public:
	Squad();
	Squad(int count);
	Squad(Squad const &s);
	~Squad();

	Squad & operator = (Squad const &s);

	int getCount() const;
	ISpaceMarine* getUnit(int N) const;
	int push(ISpaceMarine*);
};

#endif