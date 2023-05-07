#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name_);
		~Zombie();
		void announce(void);
};