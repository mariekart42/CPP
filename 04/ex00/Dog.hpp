#ifndef DOG_HPP
#define DOG_HPP
#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	protected:
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);

		Dog &operator=(const Dog&);

		virtual void makeSound(void) const;
};
#endif