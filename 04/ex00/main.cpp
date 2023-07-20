#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::string partition(30, '-');
	
	std::cout << std::endl << partition << std::endl<< "Scope 1: Subject" << std::endl<< partition << std::endl;

		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		animal->makeSound();
		delete animal;
		delete dog;
		delete cat;

	std::cout << std::endl << partition << std::endl<< "Scope 2: WrongAnimal" << std::endl<< partition << std::endl;

		WrongAnimal wrongAnimal;
		std::cout << wrongAnimal.getType() << std::endl;
		wrongAnimal.makeSound();

		WrongAnimal* wrongcat = new WrongCat;
		std::cout << wrongcat->getType() <<std::endl;
		wrongcat->makeSound();
		delete wrongcat;

	return 0;
}