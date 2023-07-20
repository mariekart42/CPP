#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void):
	_name("noname"),
	_grade(150)
{
	// std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
	_name(name)
{
	// std::cout << "Bureaucrat Constructor" << std::endl;
	try {
		setGrade(grade);
	}
	catch(const std::exception& e) {
		std::cerr << "  EXCEPTION: " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	// std::cout << "Bureaucrat copy Constructor" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	_grade = src._grade;
	_name = src._name;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << ", grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Bureaucrat Deconstructor" << std::endl;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

const std::string Bureaucrat::getName() const {
	return _name;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
		_grade = 1;
	}
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
		_grade = 150;
	}
	_grade = grade;
}


void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "\033[31mGrade too high!!\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "\033[31mGrade too low!!\033[0m";
}

void Bureaucrat::signForm(const Form& form)
{
	try
	{
		form.i
		// std::cout << bure.getName() << " signed " << this->_name << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " could not sign because " << e.what() << std::endl;
	}

}