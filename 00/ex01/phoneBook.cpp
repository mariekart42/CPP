#include "phoneBook.hpp"
#include "contact.hpp"


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
	std::cout << "FIRST NAME: " << contactArray[i%8]->firstName << std::endl;
	std::cout << "LAST NAME:  " << contactArray[i%8]->lastName << std::endl;
	std::cout << "NICK NAME:  " << contactArray[i%8]->nickName << std::endl;
		std::cout << "gut"<<std::endl;
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

void clear(void){system("clear");}

bool onlySpaces(std::string input)
{
	for (size_t x = 0; x<input.size(); x++)
		if (!std::isspace(input[x]))
			return (false);
	return (true);
}

int main(void)
{
	phoneBook myPhoneBook;
	std::string input;
	clear();
	while (1)
	{
		std::cout << std::endl << "use \033[33mADD\033[0m, \033[34mSEARCH\033[0m or \033[31mEXIT\033[0m: ";
		std::getline(std::cin, input);
		if      (input == "ADD" || input == "add") myPhoneBook.doAdd();
		else if (input == "SEARCH" || input == "search") myPhoneBook.doSearch();
		else if (input == "EXIT" || input == "exit") break;
		else if (onlySpaces(input) == true) clear();
		else     std::cout << "Invalid Input: \"\033[35m" << input << "\033[0m\"!\n";
	}
	std::cout << "\033[31mEXIT\033[0m" << std::endl;
}