#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():
	_name("unnamed"),
	_grade(0)
{
	std::cout << "\033[32m - - default Constructor - -\033[0m" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[33m - - default Deconstructor - -\033[0m" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
	_name(name)
{
	setGrade(grade);
	std::cout << "\033[32m - - mod Constructor - -\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src):
	_name(src._name)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	setGrade(src._grade);
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	setGrade(_grade - 1);
}
void Bureaucrat::decrementGrade()
{
	setGrade(_grade + 1);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

void Bureaucrat::signForm(Form &form)
{
	std::cout << _name;
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << " couldn’t sign " << form.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
	std::cout << " signed form " << form.getName() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bur)
{
	std::cout << "Bureaucrat " << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return o;
}