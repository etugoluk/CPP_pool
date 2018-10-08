// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 17:15:39 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/08 17:15:40 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "main.hpp"

Bureaucrat::Bureaucrat() : name("default") {
	grade = 75;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b) {
	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & b) {
	if (this != &b)
	{
		if (b.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		if (b.getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = b.getGrade();
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int			Bureaucrat::getGrade() const {
	return grade;
}

void		Bureaucrat::plusGrade() {
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void		Bureaucrat::minusGrade() {
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void		Bureaucrat::signForm(Form const &f) {
	if (f.getSign())
		std::cout << name << " signs " << f.getName() << std::endl;
	else
		std::cout << name << " cannot sign " << f.getName() << "because" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b) {
	std::cout << b.getName() << " bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & g) {
	*this = g;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & g) {
	*this = g;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

const char    *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Value of grade is too low");
}

const char    *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Value of grade is too high");
}









