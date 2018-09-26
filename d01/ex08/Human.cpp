#include "Human.hpp"

void meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack" << std::endl;
}

void rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack" << std::endl;
}

void intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout" << std::endl;
}

void action(std::string const & action_name, std::string const & target)
{
	std::string arr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void (Human::*pn[3])(std::string const & target);
	pn[0] = &Human::meleeAttack;
	pn[1] = &Human::rangedAttack;
	pn[2] = &Human::intimidatingShout;
	// typedef void (Human::*Actions)(std::string const & target);
	// Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	// for (int i = 0; i < 3; i++)
	// {
	// 	if (action_name.compare(arr[i]))
	// 		(this->*(actions[i]))(target);
	// }
}