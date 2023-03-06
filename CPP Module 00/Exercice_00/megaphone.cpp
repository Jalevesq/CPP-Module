#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            int j = 0;
            while (argv[i][j] != '\0')
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}