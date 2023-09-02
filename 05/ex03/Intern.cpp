#include "Intern.hpp"

Intern::Intern(void)
{
    return;
}

Intern::~Intern(void)
{
    return;
}

Intern::Intern(const Intern& src)
{
    *this = src;
}

Intern& Intern::operator=(const Intern& src)
{
    (void)src;
    return *this;
}


AForm* Intern::makeForm(std::string formtype, std::string target)
{
    AForm*		formList[4] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target), NULL};

    int i;
    for (i = 0; formList[i] != NULL; i++)
    {
        if (formList[i]->getName() == formtype)
            break;
        else
            delete formList[i]; // Delete unused form instances
    }
    for (int k = (i+1) ; k < 3; k++)
    {
        delete formList[k];
    }
    if (formList[i])
        return formList[i];

    std::cout << "Sorry don't know this formtype, try another one"<< std::endl;
    std::cout << "I know the types: <Unnamed Shrubbery> <Unnamed Robotomy> <Unnamed President>"<< std::endl;

    return NULL;
}