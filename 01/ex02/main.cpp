#include <iostream>

/*  // just a string
        std::string string = "HI THIS IS BRAIN";
        std::cout << "original string: " << string << std::endl;

// POINTER TO A STRING
    // creating pointer that points to and shares the same 
    // memory address of ptr
        std::string *ptr1 = &string;
        std::cout << "value of ptr1:   " << ptr1 << std::endl;
        std::cout << "addr of ptr1:    " << &ptr1 << std::endl;
        std::cout << "addr of string:  " << &string << std::endl<<std::endl;

// REFERENCE OF A STRING
    // creating pointer that stores the content of ptr but
    // has its own memory address
        std::string &ptr2 = string;
        std::cout << "value of ptr2:   " << ptr2 << std::endl;
        std::cout << "addr of ptr2:    " << &ptr2 << std::endl;
        std::cout << "addr of string:  " << &string << std::endl;
*/

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    // MEMORY ADDRESS of string:
    std::cout << "addr. of string [\033[33m" << &string << "\033[0m] by:" << std::endl;
    std::cout << "      \033[35mstringPTR\033[0m: \033[33m" << stringPTR << "\033[0m" << std::endl; 
    std::cout << "     \033[33m&\033[35mstringREF\033[0m: \033[33m" << &stringREF << "\033[0m" << std::endl<<std::endl; 

    // VALUE of string:
    std::cout << "value of string [\033[33m" << string << "\033[0m] by:" << std::endl;
    std::cout << "     \033[33m*\033[35mstringPTR\033[0m: \033[33m" << *stringPTR << "\033[0m" << std::endl; 
    std::cout << "      \033[35mstringREF\033[0m: \033[33m" << stringREF << "\033[0m" << std::endl<<std::endl; 
    return 0;
}