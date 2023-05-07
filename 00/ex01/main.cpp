#include "phoneBook.hpp"

int main(void)
{
	phoneBook myPhoneBook;
	std::string input;
	clear();
	while (1)
	{
		std::cout << std::endl << "use \033[33mADD\033[0m, \033[34mSEARCH 🔎\033[0m or \033[31mEXIT\033[0m: ";
		std::getline(std::cin, input);
		if      (input == "ADD" || input == "add") myPhoneBook.doAdd();
		else if (input == "SEARCH" || input == "search") myPhoneBook.doSearch();
		else if (input == "EXIT" || input == "exit") break;
		else if (onlySpaces(input) == true) clear();
		else     std::cout << "Invalid Input: \"\033[35m" << input << "\033[0m\"!\n";
	}
	std::cout << "\033[31mEXIT\033[0m" << std::endl;
}