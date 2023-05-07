#pragma once
#include <iostream>
#include <string>
#include "contact.hpp"
#include <cctype> // for isspace()
#include <cstdlib> // for system()
class phoneBook
{
	public:
		contact *contactArray[8];
		int i;

		// construct
		phoneBook(){
			for (int k = 0; k < 8; k++)
				this->contactArray[k] = new contact();
			this->i = 0;
		}

		// deconstruct
		~phoneBook(){
			for (int k = 0; k < 8; k++)
				delete this->contactArray[k];

		}
		void doAdd(void);
		void doSearch(void);
		void printFullTable(void);
		void printContact(void);
};
void printSizedMessage(std::string message);
void clear(void);
bool onlySpaces(std::string input);