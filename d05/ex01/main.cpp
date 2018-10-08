// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 17:15:47 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/08 17:15:47 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "main.hpp"

int main() {
	Bureaucrat good("Professional", 2);
	Bureaucrat bad("Looser", 149);

	std::cout << good;
	std::cout << bad;

	try {
		good.plusGrade();
		std::cout << good;
		good.plusGrade();
		std::cout << good;
	}
	catch (Bureaucrat::GradeTooHighException &g)
	{
		std::cout << g.what() << std::endl;
	}

	try {
		bad.minusGrade();
		std::cout << bad;
		bad.minusGrade();
		std::cout << bad;
	}
	catch (Bureaucrat::GradeTooLowException &g)
	{
		std::cout << g.what() << std::endl;
	}

	Form f = Form();
	std::cout << f;

	try {
		f.beSigned(bad);
		std::cout << f;
	}
	catch (Form::GradeTooLowException &g)
	{
		std::cout << g.what() << std::endl;
	}

	try {
		f.beSigned(good);
		std::cout << f;
	}
	catch (Form::GradeTooLowException &g)
	{
		std::cout << g.what() << std::endl;
	}

	return (0);
}