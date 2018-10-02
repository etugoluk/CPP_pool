#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap ft("Zhenia");
	ft.vaulthunter_dot_exe("Nastya");

	ScavTrap st("Nastya");
	st.challengeNewcomer();
	
	return (0);
}