#include "ScalarConverter.hpp"

void printRange()
{
    std::cout << "\nRANGE: ---------------------------------------------------"<< std::endl;
    std::cout << "|  char:\tmin:  32\t\tmax: 126\t  |"<<std::endl;
    std::cout << "|  int:\t\tmin: "<<std::numeric_limits<int>::min()<<"\tmax: "<<std::numeric_limits<int>::max()<<"\t  |"<< std::endl;
    std::cout << "|  float:\tmin: "<<" "<<std::numeric_limits<float>::min()<<"\tmax: "<<std::numeric_limits<float>::max()<<"  |"<< std::endl;
    std::cout << "|  double:\tmin: "<<" "<<std::numeric_limits<double>::min()<<"\tmax: "<<std::numeric_limits<double>::max()<<" |"<< std::endl;
    std::cout << " ---------------------------------------------------------"<< std::endl<< std::endl;
}

int main(int ac, char *av[])
{
    printRange();
    if (ac != 2)
        return (std::cout << "Provide ONE argument!" << std::endl, 1);

    ScalarConverter::convert(av[1]);
    return 0;
}