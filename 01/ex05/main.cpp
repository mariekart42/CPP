#include "Harl.hpp"

int main(void)
{
	Harl obj;
	std::string str = "DEBUG";

	obj.complain("INFO");
	obj.complain("WARNING");
	obj.complain("INFO");
	obj.complain(str);
}