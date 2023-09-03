#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct data
{
    int dataInt;
    char dataChar;
    std::string dataStr;

} Data;

class Serializer
{
    private:
        Serializer();
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif
