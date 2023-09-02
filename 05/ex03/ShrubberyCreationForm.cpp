#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm::AForm("Unnamed Shrubbery", 145, 137, "unspecified")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm::AForm("Unnamed Shrubbery", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src):
	AForm::AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget())
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	setIsSigned(src.getIsSigned());
	setTarget(src.getTarget());
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& burr)
{
	std::ofstream outfile((getTarget() + "_shrubbery").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Shrubbery Creation Form: outfile error" << std::endl;
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		outfile << "        *" << std::endl\
				<< "       / \\" << std::endl\
				<< "      /  *\\" << std::endl\
				<< "     /     \\" << std::endl\
				<< "    /  *    \\" << std::endl\
				<< "   *    *  * *" << std::endl\
				<< "  / \\    *  / \\" << std::endl\
				<< " *   *     *   *" << std::endl\
				<< "      |   |" << std::endl\
				<< "      |   |" << std::endl << std::endl;
	}
	outfile.close();
	std::cout << getName() << " was executed by " << burr.getName() << std::endl;
}

