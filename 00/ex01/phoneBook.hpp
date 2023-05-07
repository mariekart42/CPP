#pragma once
#include <iostream>
#include <string>
#include "contact.hpp"
#include <cctype> // for isspace()
#include <cstdlib> // for system()

class contact;

class phoneBook
{
	public:
		contact *contactArray[8];
		int i;

		phoneBook();
		~phoneBook();
		void doAdd(void);
		void doSearch(void);
		void printContact(void);
		void printFullTable(void);
};
void printSizedMessage(std::string message);
void clear(void);
bool onlySpaces(std::string input);