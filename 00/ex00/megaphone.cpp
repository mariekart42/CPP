#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i=1; i < argc; i++)
		{
			std::string str = argv[i];
			for (size_t k=0; k < str.length(); k++)
			{
				str[k] = toupper(str[k]);
				std::cout << str[k];
			}
		}
		std::cout << "\n";
	}
}
