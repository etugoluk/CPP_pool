// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:18:22 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:18:22 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &s_ref = s;
	std::string *s_ptr = &s;
	std::cout << "Ptr string: " << *s_ptr << std::endl;
	std::cout << "Ref string: " << s_ref << std::endl;
	return (0);
}
