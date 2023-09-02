#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
    public:
        PresidentialPardonForm(void);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm&);

        PresidentialPardonForm& operator=(const PresidentialPardonForm&);

        void	execute(const Bureaucrat&);
};

#endif
