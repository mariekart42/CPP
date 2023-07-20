#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::string partition(50, '-');
	
	std::cout << std::endl<< partition << std::endl<< "Scope 1: Subject test" << std::endl<< partition << std::endl;

		const AAnimal *j = new Dog();
		const AAnimal* i = new Cat();
		delete j; //should not create a leak
		delete i;

	
	std::cout << std::endl << partition << std::endl<< "Scope 2: access to AAnimal denied" << std::endl<< partition << std::endl;

	// Its still possible to create a pointer to the AAnimal class
	//  but its not possible anymore to instantiable it correctly
		// AAnimal animal;  //NOPE
		// AAnimal *animal; //YEEE

	return 0;
}