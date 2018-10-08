// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 20:58:23 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/08 20:58:23 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "main.hpp"

class Bureaucrat;

class Form
{
	std::string const	name;
	bool				sign;
	int			const	gradeSign;
	int			const	gradeExec;

public:
	Form();
	Form(std::string const name, bool sign, int const gradeSign, int const gradeExec);
	Form(Form const & f);
	~Form();
	
	Form & operator=(Form const & f);

	std::string getName() const;
	bool		getSign() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		beSigned(Bureaucrat const & b);

	class GradeTooLowException :public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(Form::GradeTooLowException const & g);
		~GradeTooLowException() throw ();
		
		Form::GradeTooLowException & operator=(Form::GradeTooLowException const & g);

		virtual const char    *what() const throw();
	};

	class GradeTooHighException :public std::exception{
	public:
		GradeTooHighException();
		GradeTooHighException(Form::GradeTooHighException const & g);
		~GradeTooHighException() throw();
		
		Form::GradeTooHighException & operator=(Form::GradeTooHighException const & g);

		virtual const char    *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, Form const & f);

#endif