#include "Brain.hpp"
#include "Human.hpp"

Brain const &Human::getBrain() const
{
	return (this->_brain);
}

std::string Human::identify() const
{
	return (this->_brain.identify());
}
