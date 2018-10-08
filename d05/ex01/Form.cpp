// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 20:58:19 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/08 20:58:19 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "main.hpp"

Form::Form() : name("default"), sign(false), gradeSign(75), gradeExec(75) {}

Form::Form(std::string const name, bool sign, int const gradeSign, int const gradeExec) : name(name), sign(sign), gradeSign(gradeSign), gradeExec(gradeExec) {
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & f) : name(f.getName()), sign(f.getSign()), gradeSign(f.getGradeSign()), gradeExec(f.getGradeExec()) {}

Form::~Form() {}

Form & Form::operator=(Form const & f) {
	if (this != &f)
	{
		if (f.getGradeSign() < 1 || f.getGradeExec() < 1)
			throw Form::GradeTooHighException();
		if (f.getGradeSign() > 150 || f.getGradeExec() > 150)
			throw Form::GradeTooLowException();
	}
	return *this;
}

std::string Form::getName() const {
	return name;
}

bool		Form::getSign() const {
	return sign;
}

int			Form::getGradeSign() const {
	return gradeSign;
}

int			Form::getGradeExec() const {
	return gradeExec;
}

void		Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() <= gradeSign)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, Form const & f) {
	if (f.getSign())
		std::cout << "Signed " << f.getName() << " grade required to sign it " << f.getGradeSign()
		<< " grade required to execute it " << f.getGradeExec() << std::endl;
	else
		std::cout << "Not signed " << f.getName() << " grade required to sign it " << f.getGradeSign()
		<< " grade required to execute it " << f.getGradeExec() << std::endl;
	return os;
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & g) {
	*this = g;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & g) {
	*this = g;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const & g) {
	if (this != &g)
		return *this;
	return *this;
}

const char    *Form::GradeTooLowException::what() const throw() {
	return ("Value of grade is too low");
}

const char    *Form::GradeTooHighException::what() const throw() {
	return ("Value of grade is too high");
}