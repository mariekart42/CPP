#include "HarlFilter.hpp"

int initComplain(char *&avComplain)
{
	std::string complainArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int x = 0; x<4; x++)
		if (complainArray[x] == (std::string)avComplain)
			return (x);
	return (69);
}

int main(int ac, char **av)
{
	HarlFilter obj(ac);

	if (obj.getInitSuccess() == false)
		return (69);
	int complain = initComplain(av[1]);

	switch (complain)
	{
		case (0):
			obj.complain("DEBUG");
		case (1):
			obj.complain("INFO");
		case (2):
			obj.complain("WARNING");
		case (3):
			obj.complain("ERROR");
			break;
		default:
			obj.throwError("[ Probably complaining about insignificant problems ]");
	}
}