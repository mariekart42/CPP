#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm::AForm("Robotomy unnamed", 72, 45, "unspecified")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm::AForm("Robotomy unnamed", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src):
	AForm::AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	setIsSigned(src.getIsSigned());
	setTarget(src.getTarget());
	return *this;
}

bool RobotomyRequestForm::random() 
{
    // Create a random device to obtain random seed
    std::random_device rd;

    // Create a Mersenne Twister random number generator using the random seed
    std::mt19937 gen(rd());

    // Create a uniform integer distribution with range [0, 1]
    std::uniform_int_distribution<> dis(0, 1);

    // Generate and return a random boolean (true or false)
    return dis(gen) == 1;
}

void RobotomyRequestForm::execute(const Bureaucrat& burr)
{
	std::cout << getName() << " was executed by " << burr.getName() << std::endl;
	// bool result = random();
	std::string msg1 = getTarget() + " has been robotomized successfully!";
	std::string msg2 = "Sorry, the robotomy failed!";
	std::cout << getTarget();
    std::cout << (random() ? msg1 : msg2) << std::endl;
}
