#include "Base.hpp"

Base* Base::generate()
{
    return new A;
}

void Base::identify(Base &p) {}

void Base::identify(Base *p) {}