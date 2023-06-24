#ifndef DOG_HPP
#define DOG_HPP
#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	protected:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);

		Dog &operator=(const Dog&);

		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;

		virtual void makeSound(void) const;
};
#endif