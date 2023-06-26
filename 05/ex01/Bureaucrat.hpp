#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat
{
	protected:
		std::string _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat(void);
		Bureaucrat&  operator=(const Bureaucrat&);

		void signForm(const Form&);

		void setGrade(int);
		void incrementGrade(void);
		void decrementGrade(void);

		int getGrade(void) const;
		const std::string getName(void) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};
std::ostream & operator<<(std::ostream &, Bureaucrat const &);

#endif