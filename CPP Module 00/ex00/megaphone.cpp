#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (isalpha(av[i][j]) > 0 && islower(av[i][j]) > 0)
					av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}