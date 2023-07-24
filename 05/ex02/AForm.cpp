#include "AForm.hpp"

AForm::AForm(void):
	_name("unnamed AForm"),
	_isSigned(false),
	_signGrade(1),
	_executeGrade(1),
	_target("unspezified")
{}

AForm::AForm(std::string name, int signGrade, int executeGrade, std::string target):
	_name(name),
	_isSigned(false),
	_signGrade(signGrade),
	_executeGrade(executeGrade),
	_target(target)
{
	checkGradeBounds();
}
AForm::AForm(const AForm& src):
	_name(src._name),
	_signGrade(src._signGrade),
	_executeGrade(src._executeGrade),
	_target(src._target)
{
	*this = src;
	checkGradeBounds();
}

AForm::~AForm()
{}

void AForm::checkGradeBounds(void)
{
	if (_signGrade < 1 || _executeGrade < 1)
	{
		this->~AForm();
		throw AForm::GradeTooHighException();
	}
	if (_signGrade > 150 || _executeGrade > 150)
	{
		this->~AForm();
		throw AForm::GradeTooLowException();
	}
}

//   GETTERS
const std::string AForm::getName() const {
	return _name;
}
bool AForm::getIsSigned() const {
	return _isSigned;
}
int AForm::getSignGrade() const {
	return _signGrade;
}
int AForm::getExecuteGrade() const {
	return _executeGrade;
}
std::string AForm::getTarget() const {
	return _target;
}


// SETTERS
void AForm::setIsSigned(bool isSigned) {
	_isSigned = isSigned;
}
void AForm::setTarget(std::string target) {
	_target = target;
}

AForm& AForm::operator=(const AForm& src)
{
	// only isSigned cause everthing else is const
	_isSigned = src._isSigned;
	_target = src._target;
	return *this;
}

void AForm::beSigned(const Bureaucrat& burr)
{
	std::cout << "current grade: " << getSignGrade()<< ", sign grade: " << _signGrade << std::endl;
	if (burr.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	_isSigned = true;
	std::cout << getName() << " was signed by " << burr.getName() << std::endl;
}

// new in ex02
void AForm::beExecuted(const Bureaucrat& bur)
{
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (bur.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException();
	execute(bur);
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade too high!";
}
const char* AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade too low!";
}
const char* AForm::FormNotSignedException::what(void) const throw()
{
	return "Form is not signed!";
}

std::ostream& operator<<(std::ostream& o, const AForm& AForm)
{
	std::cout	<< (AForm.getIsSigned() ? "Signed AForm " : "Unsigned AForm ")\
				<< AForm.getName()\
				<< ", required grade to sign: " << AForm.getSignGrade()\
				<< ", required grade to execute: " << AForm.getExecuteGrade()\
				<< ".";
	return o;
}