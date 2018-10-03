// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:31:43 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:31:44 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

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