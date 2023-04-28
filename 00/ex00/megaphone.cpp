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
			for (int k=0; argv[i][k]; k++)
			{
				if (argv[i][k] >= 97 && argv[i][k] <= 122)
					std::cout << (char)(argv[i][k] - 32);
				else
					std::cout << (argv[i][k]);
			}
		}
		std::cout << "\n";
	}
}