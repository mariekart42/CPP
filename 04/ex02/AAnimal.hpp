#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#pragma once

#include <iostream>

class AAnimal 
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		virtual ~AAnimal(void) = 0;
		AAnimal(const AAnimal&);
		AAnimal &operator=(const AAnimal&);

// =0 -> makes a function pure virtual=not accessable outside of class anymore
		virtual void makeSound() const = 0;

		std::string getType(void) const;
};
#endif