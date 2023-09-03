#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <unistd.h>

Base* generate()
{
    srand((unsigned) time(NULL));
    sleep(1);
    switch (rand() % 3)
    {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
        default:
            return NULL;
    }
}

// Reference
void identify(Base &p)
{
    std::cout << "Reference dynamic cast: ";
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << GREEN"Type is A"RESET << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << GREEN"Type is B"RESET << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << GREEN"Type is C"RESET << std::endl;
        else
            throw "Error: Reference Dynamic Cast not detectable";
    }
    catch(const std::exception& e)
    {
        return;
    }
}

// dynamic Pointer
void identify(Base *p)
{
    A*	try_a = dynamic_cast<A*>(p);
    B*	try_b = dynamic_cast<B*>(p);
    C*	try_c = dynamic_cast<C*>(p);

    std::cout << "Pointer dynamic cast: ";
    if (try_a)
        std::cout << YELLOW"Type is A"RESET << std::endl<<std::endl;
    else if (try_b)
        std::cout << YELLOW"Type is B"RESET << std::endl<<std::endl;
    else if (try_c)
        std::cout << YELLOW"Type is C"RESET << std::endl<<std::endl;
    else
    {
        std::cerr << "dynamic_cast returned NULL!"<<std::endl;
        exit(69);
    }
}

int main() {
    Base* obj = generate();
    identify(obj);
    Base* obj2 = generate();
    identify(obj2);

    Base* obj3 = generate();
    identify(obj3);

std::cout<<std::endl;
    A objA = A();
    identify(objA);

    B objB = B();
    identify(objB);

    C objC = C();
    identify(objC);

    delete obj;
    return (0);
}