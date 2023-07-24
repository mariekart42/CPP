#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

// A class that contains at least one pure virtual function becomes an abstract class, 
// and you cannot create objects of that class
// pure virtual function: virtual && =0
// -> making deconstructor pure virtual

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;				// indicator if AForm is signed or not (at construction it’s not)
		const int _signGrade;		// grade required to sign it.
		const int _executeGrade;		// grade required to execute it.
		std::string _target;		// new for ex02
	public:
		AForm(void);
		AForm(std::string, int, int, std::string);
		AForm(const AForm&);
		virtual ~AForm();
		// ~AForm();

		void checkGradeBounds(void);
		
		AForm&  operator=(const AForm&);

		const std::string getName(void) const;
		bool getIsSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;
		std::string getTarget(void) const;

		void setIsSigned(bool);
		void setTarget(std::string);

		void beSigned(const Bureaucrat&);

		void beExecuted(Bureaucrat const&);
		virtual	void		execute(const Bureaucrat&) = 0;

		// same as for Bureaucrats:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream&, const AForm&);

#endif