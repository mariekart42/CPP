#ifndef CAT_HPP
#define CAT_HPP

#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal 
{
	protected:

	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat&);
		Cat &operator=(const Cat&);

		virtual void makeSound(void) const;

};
#endif