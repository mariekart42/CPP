#pragma once
#include <iostream>
#include <string>
#include "contact.hpp"

class phoneBook
{
	public:
	contact *contactArray[8];



	// construct
	phoneBook(){
		for (int i = 0; i < 8; i++)
			this->contactArray[i] = new contact();
	}

	// deconstruct
	~phoneBook(){
		for (int i = 0; i < 8; i++)
			delete this->contactArray[i];
	}	
};