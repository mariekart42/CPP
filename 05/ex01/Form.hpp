#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
	public:
		Form();
		~Form();
		Form(std::string, int, int);

		std::string getName(void) const;
		bool getIsSigned(void);
		int getSignGrade(void) const;
		int getExecGrade(void) const;

		void signForm(const Bureaucrat&);

		void beSigned(const Bureaucrat&);

		Form& operator=(const Form&);

		class GradeTooHighException : public std::exception {
			public:
				 const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				 const char* what() const throw();
		};
};
std::ostream & operator<<(std::ostream &, const Form &);
#endif