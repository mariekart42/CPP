#include "PresidentialPardonForm.hpp"

# define YEL   "\x1B[33m"
# define RESET "\x1B[0m"


PresidentialPardonForm::PresidentialPardonForm(void):
        AForm::AForm("Unnamed Presidential Pardon Form", 25, 5, "unspecified")

{
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
        AForm::AForm("Unnamed Presidential Pardon Form", 25, 5, target)

{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src):
        AForm::AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget())
{
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    setIsSigned(src.getIsSigned());
    setTarget(src.getTarget());
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& bur)
{
    std::cout << getName() << " was executed by " << bur.getName() << "." << std::endl;
    std::cout <<std::endl<< YEL "expected output:\n<target> was pardoned by Zaphod Beeblebrox!"RESET << std::endl;
    std::cout << getTarget() << " was pardoned by Zaphod Beeblebrox!" << std::endl;
}
