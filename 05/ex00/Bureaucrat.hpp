#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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

		void setGrade(int);
		void incrementGrade(void);
		void decrementGrade(void);

		int getGrade(void) const;
		const std::string getName(void) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "\033[31mGrade too high!!\033[0m";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "\033[31mGrade too low!!\033[0m";
				}
		};
};
std::ostream & operator<<(std::ostream &, Bureaucrat const &);

#endif