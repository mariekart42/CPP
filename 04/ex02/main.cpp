#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::string partition(50, '-');
	std::cout << partition << std::endl;
	std::cout << "Scope 1: Cats and Dogs don't care - " << std::endl;
	std::cout << partition << std::endl;
	{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j; //should not create a leak
	delete i;
	Dog doggo;
	Cat catto;
	}
	
	std::cout << partition << std::endl;
	std::cout << "Scope 2: but pure Animals can no longer be there!" << std::endl;
	std::cout << partition << std::endl;
	{
		//Animal velociraptor;
	}
	return 0;
}