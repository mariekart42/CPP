#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#pragma once

#include <iostream>

class Animal 
{
	protected:
		std::string _type;

	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal&);
		Animal &operator=(const Animal&);
	
		virtual void makeSound() const;

		std::string getType(void) const;
};
#endif