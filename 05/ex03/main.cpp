#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// Colour shit
# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define RESET "\x1B[0m"

int main()
{
//    Intern someRandomIntern;
//    AForm* rrf;
//    rrf = someRandomIntern.makeForm("Unnamed ", "Bender");
//    if (rrf)
//    {
//        std::cout << rrf->getName()<<std::endl;
//        delete rrf;
//    }

    std::string partition(50, '-');

    std::cout << partition << std::endl;
    std::cout << "Scope 1: Shrubbery" << std::endl;
    std::cout << partition << std::endl;
    {
        Intern	intern1;
        AForm*	form1;

        form1 = intern1.makeForm("Unnamed Shrubbery", "schrubbschrubb");
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
    }
    std::cout << std::endl;

    std::cout << partition << std::endl;
    std::cout << "Scope 2: Unknown form" << std::endl;
    std::cout << partition << std::endl;
    {
        Intern	intern1;
        AForm*	form1;

        form1 = intern1.makeForm("what? i do not exist", "sheeeeesh");
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
    }
    std::cout << std::endl;


    std::cout << partition << std::endl;
    std::cout << "Scope 3: Robotomy form" << std::endl;
    std::cout << partition << std::endl;
    {
        Intern	intern1;
        AForm*	form1;

        form1 = intern1.makeForm("Unnamed Robotomy", "roflxd");
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
    }
    std::cout << std::endl;

    std::cout << partition << std::endl;
    std::cout << "Scope 4: Pardon form" << std::endl;
    std::cout << partition << std::endl;
    {
        Intern	intern1;
        AForm*	form1;

        form1 = intern1.makeForm("Unnamed President", "imma president");
        if (form1)
        {
            std::cout << *form1 << std::endl;
            delete form1;
        }
    }
    std::cout << std::endl;
}