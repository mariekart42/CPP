#include "Form.hpp"

Form::Form(void):
	_name("unnamed Form"),
	_isSigned(false),
	_signGrade(1),
	_executeGrade(1)
{}

Form::Form(std::string name, int signGrade, int executeGrade):
	_name(name),
	_isSigned(false),
	_signGrade(signGrade),
	_executeGrade(executeGrade)
{
	checkGradeBounds();
}
Form::Form(const Form& src):
	_name(src._name),
	_signGrade(src._signGrade),
	_executeGrade(src._executeGrade)
{
	*this = src;
	checkGradeBounds();
}

Form::~Form()
{}

void Form::checkGradeBounds(void)
{
	if (_signGrade < 1 || _executeGrade < 1)
	{
		this->~Form();
		throw Form::GradeTooHighException();
	}
	if (_signGrade > 150 || _executeGrade > 150)
	{
		this->~Form();
		throw Form::GradeTooLowException();
	}
}

//   GETTERS
const std::string Form::getName() const {
	return _name;
}
bool Form::getIsSigned() const {
	return _isSigned;
}
int Form::getSignGrade() const {
	return _signGrade;
}
int Form::getExecuteGrade() const {
	return _executeGrade;
}


Form& Form::operator=(const Form& src)
{
	// only isSigned cause everthing else is const
	_isSigned = src._isSigned;		
	return *this;
}

void Form::beSigned(const Bureaucrat& burr)
{
	if (burr.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "Grade too high!";
}
const char* Form::GradeTooLowException::what(void) const throw()
{
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& o, const Form& form)
{
	std::cout	<< (form.getIsSigned() ? "Signed form " : "Unsigned form ")\
				<< form.getName()\
				<< ", required grade to sign: " << form.getSignGrade()\
				<< ", required grade to execute: " << form.getExecuteGrade()\
				<< ".";
	return o;
}