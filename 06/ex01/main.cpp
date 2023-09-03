#include "Serializer.hpp"

# define  GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define BLUE  "\033[36m"
# define RED    "\033[0;31m"
# define  RESET "\x1B[0m"

int main()
{
    Data            data;
    Data*           data_copy;
    uintptr_t       intptr;

    data.dataInt = 42;
    data.dataChar = 'a';
    data.dataStr = "bananenbrot";

    std::cout << "Address of data: "YELLOW << &data << RESET"\n Int: " << data.dataInt << "\n Char: " << data.dataChar << "\n Str: " << data.dataStr << std::endl<< std::endl;

    intptr = Serializer::serialize(&data);
    std::cout << "intptr: " << intptr << ", intptr in hex: "YELLOW"0x" << std::hex << intptr << std::dec <<""RESET<< std::endl<< std::endl;

    data_copy = Serializer::deserialize(intptr);
    std::cout << "data_copy points to: "YELLOW << data_copy << RESET"\n Int: " << data_copy->dataInt << "\n Char: " << data_copy->dataChar << "\n Str: " << data_copy->dataStr << std::endl;

}