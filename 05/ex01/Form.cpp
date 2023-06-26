#include "Form.hpp"

Form::Form(void) :
	_name("noname Form"),
	_isSigned(false),
	_signGrade(1),
	_execGrade(1)
{

}

Form::Form(std::string name, int signGrade, int execGrade) :
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
}

Form::~Form(void) {}

void Form::beSigned(const Bureaucrat& bure)
{
	if (bure.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_isSigned = true;
}




std::string Form::getName(void) const {
	return _name;
}
bool Form::getIsSigned(void) {
	return _isSigned;
}
int Form::getSignGrade(void) const {
	return _signGrade;
}
int Form::getExecGrade(void) const {
	return _execGrade;
}



const char* Form::GradeTooHighException::what(void) const throw() {
	return "\033[31mGrade too high!!\033[0m";
}
const char* Form::GradeTooLowException::what(void) const throw() {
	return "\033[31mGrade too low!!\033[0m";
}



Form& Form::operator=(const Form &src) {
	_isSigned = src._isSigned;
	return *this;
}
std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form " << form.getName() << ", required grade to sign: " << form.getSignGrade() << ", required grade to execute: " << form.getExecGrade() << std::endl;
	return out;
}