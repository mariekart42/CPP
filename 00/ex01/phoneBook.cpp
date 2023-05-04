#include "phoneBook.hpp"
#include "contact.hpp"

void doAdd()
{
	phoneBook *pBook = NULL;
	int32_t i = 0;
	while (pBook->array+i)
		i++;
	std::cout << "i: " << i << std::endl;
	pBook->(array+i).
}

int main(void)
{
	std::string input;

	while (1)
	{
		std::cout << "use ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		// std::cout << "\033[35m\033[47m" << "noice u enterd:" << "\033[0m" << " " << input << std::endl;
		if (input == "ADD" || input == "add")
		{

			doAdd();
			// std::cout << "thats ADD" << std::endl;
		}
		else if (input == "SEARCH" || input == "search")
			std::cout << "thats SEARCH" << std::endl;
		else if (input == "EXIT" || input == "exit")
		{
			std::cout << "thats EXIT" << std::endl;
			break;
		}
		else
			std::cout << "\033[35m" << "\"" << input << "\"" << "\033[0m" << " Inavlid Input, try again: ";

	}

//  std::cout << "\033[32m\033[42m" << "SOMETHING" << "\033[0m" << std::endl;
// 	phoneBook myPhoneBook;
// 	contact contactArray[8];

// std::string str;

// 	myPhoneBook.name = "Yoshi";
// 	myPhoneBook.name = "Yoshi 2";
// 	std::cout << myPhoneBook.name << std::endl;
// 	contactArray[0].name = "contact uno";
// 	contactArray[1].name = "contact dos";
// 	contactArray[2].name = "contact tres";
// 	// str = contactArray[0];
// 	// contactArray[1] = "contact dos";
// 	// contactArray[2] = "contact tres";
// 	std::cout << contactArray[0].name << std::endl;
// 	std::cout << contactArray[1].name << std::endl;
// 	std::cout << contactArray[2].name << std::endl;
// 	// std::cout << contactArray[1] << std::endl;
// 	// std::cout << contactArray[2] << std::endl;

}