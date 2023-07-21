#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _isSigned;				// indicator if form is signed or not (at construction it’s not)
		const int _signGrade;		// grade required to sign it.
		const int _executeGrade;		// grade required to execute it.
	public:
		Form(void);
		Form(std::string, int, int);
		Form(const Form&);
		~Form();

		void checkGradeBounds(void);
		
		Form&  operator=(const Form&);

		const std::string getName(void) const;
		bool getIsSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;

		void beSigned(const Bureaucrat&);

		// same as for Bureaucrats:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream&, const Form&);

#endif