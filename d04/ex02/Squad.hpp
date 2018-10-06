#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct 			s_marines {
	ISpaceMarine		*value;
	struct s_marines	*next;
}						t_marines;

class Squad : public ISquad
{
	// ISpaceMarine	*arr;
	t_marines		*arr;
	int 			count;
public:
	Squad();
	Squad(int count);
	Squad(Squad const &s);
	~Squad();

	Squad & operator = (Squad const &s);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int N) const;
	virtual int push(ISpaceMarine*);
};

#endif