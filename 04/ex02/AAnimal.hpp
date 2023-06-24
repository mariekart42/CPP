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
		virtual ~AAnimal(void);
		AAnimal(const AAnimal&);
		AAnimal &operator=(const AAnimal&);
		virtual void makeSound() const = 0;

		std::string getType(void) const;
};
#endif