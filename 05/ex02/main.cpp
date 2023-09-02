#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define YEL   "\x1B[33m"
# define RESET "\x1B[0m"

int main()
{
    std::string partition(50, '-');

    std::cout << partition << std::endl;
    std::cout << "Scope 1: Shrubbery" << std::endl;
    std::cout << partition << std::endl;
    {
        Bureaucrat bur;
        ShrubberyCreationForm form("Shrubbery target");

        std::cout << YEL "expected output:\n<default name> failed to execute <default form>: Form is not signed!"RESET << std::endl;
        try
        {
            form.beExecuted(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout<<std::endl;
        std::cout << YEL "expected output:\n<default name> failed to sign <default form>: Grade too low!"RESET << std::endl;
        try
        {
            form.beSigned(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout<<std::endl;
        std::cout << YEL "expected output:\n<bigboiii> failed to execute <default form>: Form is not signed!"RESET << std::endl;
        Bureaucrat big("bigboiii", 1); // required grade to sign: 145, to execute: 137.
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout<<std::endl;
        std::cout << YEL "expected output:\n<default Form> was signed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beSigned(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout<<std::endl;
        std::cout <<std::endl<< YEL "expected output:\n<default Form> was executed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout<<std::endl;
    }

    std::cout << partition << std::endl;
    std::cout << "Scope 2: Robotomy" << std::endl;
    std::cout << partition << std::endl;
    {
        Bureaucrat bur;
        RobotomyRequestForm form("Robotomy target");

        std::cout << YEL "expected output:\n<default name> failed to execute <default Form>: Form is not signed!"RESET << std::endl;
        try
        {
            form.beExecuted(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default name> failed to sign <default Form>: Grade too low!"RESET << std::endl;
        try
        {
            form.beSigned(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }

        std::cout <<std::endl<< YEL "expected output:\n<bigboiii> failed to execute <default Form>: Form is not signed!"RESET << std::endl;
        Bureaucrat big("bigboiii", 45); // required grade to sign: 72, to execute: 45.
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default name> was signed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beSigned(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default name> was executed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << partition << std::endl;
    std::cout << "Scope 3: Pardon" << std::endl;
    std::cout << partition << std::endl;
    {
        Bureaucrat bur;
        PresidentialPardonForm form("Pardoning target");
        std::cout << YEL "expected output:\n<default name> failed to execute <default Form>: Form is not signed!"RESET << std::endl;
        try
        {
            form.beExecuted(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default name> failed to sign <default Form>: Grade too low!"RESET << std::endl;
        try
        {
            form.beSigned(bur);
        }
        catch(std::exception& e)
        {
            std::cout << bur.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<bigboiii> failed to execute <default Form>: Form is not signed!"RESET << std::endl;
        Bureaucrat big("bigboiii", 5); // required grade to sign: 25, to execute: 5.
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default Form> was signed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beSigned(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to sign " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
        std::cout <<std::endl<< YEL "expected output:\n<default Form> was executed by <bigboiii>"RESET << std::endl;
        try
        {
            form.beExecuted(big);
        }
        catch(std::exception& e)
        {
            std::cout << big.getName() << " failed to execute " << form.getName() << ": ";
            std::cout << e.what() << std::endl;
        }
    }
}