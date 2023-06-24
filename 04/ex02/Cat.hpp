#ifndef CAT_HPP
#define CAT_HPP

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal 
{
	protected:
		Brain *_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat&);
		Cat &operator=(const Cat&);

		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;

		virtual void makeSound(void) const;

};
#endif