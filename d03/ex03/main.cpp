#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap ct("Dimka");

	FragTrap ft("Zhenia");
	// ft.vaulthunter_dot_exe("Nastya");

	ScavTrap st("Nastya");
	// st.challengeNewcomer();
	
	NinjaTrap nt("Killer");
	nt.ninjaShoebox(ct);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);

	return (0);
}