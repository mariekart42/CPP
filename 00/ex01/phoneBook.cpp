#include "phoneBook.hpp"
#include "contact.hpp"


int main(void)
{
	phoneBook myPhoneBook;
	contact contactArray[8];

std::string str;

	myPhoneBook.name = "Yoshi";
	myPhoneBook.name = "Yoshi 2";
	std::cout << myPhoneBook.name << std::endl;
	contactArray[0].name = "contact uno";
	contactArray[1].name = "contact dos";
	contactArray[2].name = "contact tres";
	// str = contactArray[0];
	// contactArray[1] = "contact dos";
	// contactArray[2] = "contact tres";
	std::cout << contactArray[0].name << std::endl;
	std::cout << contactArray[1].name << std::endl;
	std::cout << contactArray[2].name << std::endl;
	// std::cout << contactArray[1] << std::endl;
	// std::cout << contactArray[2] << std::endl;

}