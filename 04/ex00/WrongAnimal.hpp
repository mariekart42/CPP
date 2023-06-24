#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		WrongAnimal &operator=(const WrongAnimal&);
		~WrongAnimal(void);

		void makeSound(void) const;

		std::string getType(void);
};

#endif