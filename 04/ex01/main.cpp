#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::string partition(50, '-');
	
	std::cout << std::endl<< partition << std::endl<< "Scope 1: Subject test" << std::endl<< partition << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j; //should not create a leak
		delete i;

	
	std::cout << std::endl << partition << std::endl<< "Scope 2: Proof of deep copy" << std::endl<< partition << std::endl;

		Cat a;
		Cat b(a);

		std::cout << a.getIdea(1) << std::endl;
		std::cout << b.getIdea(1) << std::endl;
		a.setIdea(1, "\033[34m ... Annoy my human.\033[0m");
		b.setIdea(1, "\033[34m ... Push stuff off of the coffee table.\033[0m");
		std::cout << a.getIdea(1) << std::endl;
		std::cout << b.getIdea(1) << std::endl;
		b = a;
		std::cout << b.getIdea(1) << std::endl;

	
	std::cout << std::endl<< partition << std::endl<< "Scope 3: Deleting Cats and Dogs as Animals" << std::endl<< partition << std::endl;

		Animal *zoo[10];
		for (int i = 0; i < 5; i++) {
			zoo[i] = new Cat;
			zoo[i + 5] = new Dog;
		}
		zoo[1]->makeSound();
		zoo[5]->makeSound();
		for (int i = 0; i < 10; i++)
			delete zoo[i];

	return 0;
}