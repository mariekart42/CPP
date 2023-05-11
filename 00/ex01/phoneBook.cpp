#include "phoneBook.hpp"
#include "contact.hpp"

phoneBook::phoneBook()
{
	for (int k = 0; k < 8; k++)
		this->contactArray[k] = new contact();
	this->i = 0;
}

phoneBook::~phoneBook()
{
	for (int k = 0; k < 8; k++)
		delete this->contactArray[k];
}

std::string getContent(std::string msg)
{
	std::string input = "";
	while(input == "")
	{
		std::cout <<  "enter \033[33m" << msg << ": \033[0m";
		std::getline(std::cin, input);
	}
	return (input);
}

void phoneBook::doAdd(void)
{
	clear();
	std::cout << std::endl << "\033[30m\033[43m ADD \033[0m" << std::endl;
	contactArray[i%8]->firstName   = getContent(" fist name  ");
	contactArray[i%8]->lastName    = getContent(" last name  ");
	contactArray[i%8]->nickName    = getContent(" nickname   ");
	contactArray[i%8]->secret      = getContent(" secret     ");
	contactArray[i%8]->phoneNumber = getContent(" phonenumber");
	std::cout << std::endl;
	clear();
	i++;
}

void printSizedMessage(std::string message)
{
	if (message.size() < 10)
	{
		std::cout << message;
		for (int x = message.size(); x<10; x++)
			std::cout << " ";
	}
	else
	{
		for (int x = 0; x<9; x++)
			std::cout << message[x];
		std::cout << ".";
	}
}

void phoneBook::printFullTable(void)
{
	for (int x = 0; x<8; x++)
	{
		std::cout << "  \033[36m" << x << "\033[0m    | ";
		printSizedMessage(contactArray[x]->firstName);
		std::cout << " | ";
		printSizedMessage(contactArray[x]->lastName);
		std::cout << " | ";
		printSizedMessage(contactArray[x]->nickName);
		std::cout << std::endl;
	}
}

void phoneBook::printContact(void)
{
	std::string input;
	while (1)
	{
		std::cout << "enter \033[36mINDEX\033[0m: ";
		std::getline(std::cin, input);
		if (input.size() == 1 && input[0] >= 48 && input[0] <= 57)
			break;
		std::cout << "Invalid Index: \"\033[36m" << input << "\033[0m\"!   --> must be a number from 0 to 7!" <<std::endl<<std::endl;
	}
	clear();
	std::cout << std::endl << "\033[30m\033[45m CONTACT \033[0m" << std::endl<<std::endl;
	std::cout << "fist name  :  \033[35m" << contactArray[input[0]-48]->firstName << "\033[0m" << std::endl;
	std::cout << "last name  :  \033[35m" << contactArray[input[0]-48]->lastName << "\033[0m"<< std::endl;
	std::cout << "nickname   :  \033[35m" << contactArray[input[0]-48]->nickName << "\033[0m"<< std::endl;
	std::cout << "dark secret:  \033[35m" << contactArray[input[0]-48]->secret << "\033[0m"<< std::endl;
	std::cout << "phonenumber:  \033[35m" << contactArray[input[0]-48]->phoneNumber << "\033[0m"<< std::endl<<std::endl;
	std::cout << " - press ENTER to go back -" << std::endl;
	std::getline(std::cin, input);
	clear();
}

void phoneBook::doSearch(void)
{
	clear();
	std::string input;
	std::cout << std::endl << "\033[30m\033[44m SEARCH \033[0m" << std::endl << std::endl;
	std::cout << " \033[36mINDEX\033[0m | FIRST NAME |  LASTNAME  |  NICKNAME  " << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	printFullTable();
	std::cout << "----------------------------------------------" << std::endl << std::endl;
	printContact();
}
