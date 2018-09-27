#include "Human.hpp"

int main()
{
	Human h1, h2;

	h1.action("intimidatingShout", "h2");
	h2.action("meleeAttack", "h1");
	h1.action("rangedAttack", "h2");
	h2.action("rangedAttack", "h1");
	h1.action("meleeAttack", "h2");
	h2.action("intimidatingShout", "h1");
	
	return (0);
}