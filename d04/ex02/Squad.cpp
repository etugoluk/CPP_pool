#include "Squad.hpp"

Squad::Squad() {

}

Squad::Squad(int count) {

}

Squad::Squad(Squad const &s) {
	*this = s;
}

Squad::~Squad() {
	for (int i = 0; i < count; ++i)
	{
		delete arr[i];
	}
	delete [] arr;
}

Squad & Squad::operator = (Squad const &s) {
	if (this != &s)
	{
		count = s.getCount();
	}
	return *this;
}

int Squad::getCount() {
	return count;
}

ISpaceMarine* Squad::getUnit(int N) const {
	return arr[N];
}