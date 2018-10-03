// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:14:54 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:14:55 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	horde = new Zombie[N];
	n = N;
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
	{
		this->horde[i].announce();
	}
}