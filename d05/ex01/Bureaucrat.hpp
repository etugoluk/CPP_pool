// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 17:15:30 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/08 17:15:31 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "main.hpp"

class Form;

class Bureaucrat
{
	std::string const	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & b);
	~Bureaucrat();
	
	Bureaucrat & operator=(Bureaucrat const & b);

	std::string getName() const;
	int			getGrade() const;
	void		plusGrade();
	void		minusGrade();
	void		signForm(Form const &f);

	class GradeTooLowException :public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(Bureaucrat::GradeTooLowException const & g);
		~GradeTooLowException() throw ();
		
		Bureaucrat::GradeTooLowException & operator=(Bureaucrat::GradeTooLowException const & g);

		virtual const char    *what() const throw();
	};

	class GradeTooHighException :public std::exception{
	public:
		GradeTooHighException();
		GradeTooHighException(Bureaucrat::GradeTooHighException const & g);
		~GradeTooHighException() throw();
		
		Bureaucrat::GradeTooHighException & operator=(Bureaucrat::GradeTooHighException const & g);

		virtual const char    *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#endif