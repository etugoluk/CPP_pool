#include "Brain.hpp"
#include "Human.hpp"

Brain		Human::getBrain()
{
	return (this->_brain);
}

std::string Human::identify()
{
	return (this->_brain.identify());
}
