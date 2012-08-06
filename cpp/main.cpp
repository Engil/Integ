#include "calcul.h"
#include <sstream>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = 0;
        std::stringstream(argv[1]) >> n;

        std::string calculs = Calcul::calcul(n);

        std::cout << calculs;
    }
    else
    {
        std::cerr << ".." << std::endl;
    }
}
