// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:05:26 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:05:27 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieHeap()
{
	ZombieEvent z_e;

	z_e.setZombieType("heap");
	Zombie *z_h = z_e.newZombie("guy");
	z_h->announce();
	delete z_h;
}

void	ZombieStack()
{
	Zombie z_s("stack", "guy");
	z_s.announce();
}

void	randomZombie()
{
	ZombieEvent z_e;

	z_e.setZombieType("random");
	z_e.randomChump();
}

int main()
{
	std::cout << "--------------------------\n";
	std::cout << "Welcome to Zombie factory!\n";
	std::cout << "--------------------------\n\n";
	ZombieHeap();
	std::cout << std::endl;
	ZombieStack();
	std::cout << std::endl;
	randomZombie();
	std::cout << std::endl;
	return (0);
}
