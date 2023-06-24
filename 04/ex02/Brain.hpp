#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain(void);

		void setIdea(int index, std::string idea);
		std::string getIdea(int index);
};

#endif