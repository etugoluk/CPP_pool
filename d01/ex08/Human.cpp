// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:32:13 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:32:13 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack to " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidating of " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string arr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	void (Human::*ptr[3])(std::string const & target);
	ptr[0] = &Human::meleeAttack;
	ptr[1] = &Human::rangedAttack;
	ptr[2] = &Human::intimidatingShout;

	for (int i = 0; i < 3; i++)
	{
		if (!action_name.compare(arr[i]))
			(this->*(ptr[i]))(target);
	}
}