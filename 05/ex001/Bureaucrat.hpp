#ifndef BUREARUCRAT_HPP
#define BUREARUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();

		Bureaucrat&  operator=(const Bureaucrat&);

		const std::string getName() const;
		int getGrade() const;
		void setGrade(int);
		void incrementGrade();
		void decrementGrade();

		// only change compared to ex00:
		void signForm(Form&);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

};
std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif