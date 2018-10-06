#include "Squad.hpp"

Squad::Squad() {
	count = 0;
	arr = NULL;
}

Squad::Squad(int count) : count(count) {}

Squad::Squad(Squad const &s) {
	*this = s;
}

Squad::~Squad() {
	t_marines		*tmp;
	
	while (arr)
	{
		tmp = arr;
		arr = arr->next;
		delete tmp->value;
		delete tmp;
	}
}

Squad & Squad::operator = (Squad const &s) {
	if (this != &s)
	{
		count = s.getCount();

		for (int i = 0; i < count; i ++)
	    {
	        push(s.getUnit(i));
	    }
	}
	return *this;
}

int Squad::getCount() const {
	return count;
}

ISpaceMarine* Squad::getUnit(int N) const {

	t_marines		*arr_tmp = arr;
	for (int i = 0; i < N; i ++)
    {
		arr_tmp = arr_tmp->next;
    }
	return arr_tmp->value;
}

int Squad::push(ISpaceMarine* im) {
	
	if (!arr)
	{
		arr = new t_marines();
		arr->value = im->clone();
		arr->next = NULL;
	}
	else
	{
		t_marines		*tmp = arr;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next= new t_marines();
		tmp->next->value = im->clone();
		tmp->next->next = NULL;
	}
	count++;
	return (count);
}