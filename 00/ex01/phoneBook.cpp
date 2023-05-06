#include "phoneBook.hpp"
#include "contact.hpp"

std::string getContent(std::string msg)
{
	std::string input = "";
	std::cout << "\033[33m" << "enter " << msg << ": " << "\033[0m"<< std::endl;
	while(input == "")
		std::getline(std::cin, input);
	return (input);
}

void phoneBook::doAdd(void)
{
	std::cout << "\033[33m" << "ADD" << "\033[0m" << std::endl;
	contactArray[i%8]->firstName = getContent("fist name");
	contactArray[i%8]->lastName = getContent("last name");
	contactArray[i%8]->nickName = getContent("nickname");
	contactArray[i%8]->secret = getContent("secret");
	contactArray[i%8]->phoneNumber = getContent("phonenumber");
	i++;
}

int main(void)
{
	phoneBook myPhoneBook;
	std::string input;

	while (1)
	{
		std::cout << "use ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
		{
			myPhoneBook.doAdd();
		}
		else if (input == "SEARCH" || input == "search")
			std::cout << "\033[34m" << "SEARCH" << "\033[0m" << std::endl;
		else if (input == "EXIT" || input == "exit")
		{
			std::cout << "\033[31m" << "EXIT" << "\033[0m" << std::endl;
			break;
		}
		else
			std::cout << "Invalid Input: " << "\"" << "\033[35m" << input << "\033[0m" << "\"" << "!\n";

	}
	std::cout << myPhoneBook.contactArray[0]->firstName << std::endl;
	std::cout << myPhoneBook.contactArray[1]->firstName << std::endl;
	std::cout << myPhoneBook.contactArray[2]->firstName << std::endl;

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