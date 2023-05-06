#pragma once
#include <iostream>
#include <string>
#include "contact.hpp"

class phoneBook
{
	public:
		contact *contactArray[8];
		int8_t i;



		// construct
		phoneBook(){
			for (int k = 0; k < 8; k++)
				this->contactArray[k] = new contact();
			this->i = 0;
		}

		// deconstruct
		~phoneBook(){
			for (int k = 0; k < 8; k++)
			{
				// if (this->contactArray[i]->firstName)
					delete this->contactArray[k];
			}
		}
		void doAdd(void);
};