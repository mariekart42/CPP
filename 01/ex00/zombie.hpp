#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie()
		{
			name = "pissnelke";
			announce();
		}
		Zombie(std::string name_)
		{
			name = name_;
			announce();
		}
		~Zombie() {}	
		void announce(void);
};