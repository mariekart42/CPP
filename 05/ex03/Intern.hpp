#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <stddef.h>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern&);

        Intern& operator=(const Intern&);

        AForm* makeForm(std::string formtype, std::string target);
};

#endif
