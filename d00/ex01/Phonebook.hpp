// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:28:06 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/02 17:28:07 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	Contact	contacts[8];
	int		count;
public:
	Phonebook();
	void add();	
	void search();
};

#endif
