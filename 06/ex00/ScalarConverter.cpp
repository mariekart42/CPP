#include "ScalarConverter.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <limits>
# include <cmath>
ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &){}
ScalarConverter::~ScalarConverter(){}

ScalarConverter&  ScalarConverter::operator=(const ScalarConverter&)
{
    return *this;
}





void ScalarConverter::convert(std::string literal)
{
    if (isInt(literal))
    {
        int i = ScalarConverter::convertInt(literal);
        ScalarConverter::convertToAll(i);
    }
    else if (isChar(literal))
    {
        char c = ScalarConverter::convertChar(literal);
        ScalarConverter::convertToAll(c);
    }
    else if (isDouble(literal))
    {
        double d = ScalarConverter::convertDouble(literal);
        ScalarConverter::convertToAll(d);
    }
    else if (isFloat(literal))
    {
        float f = ScalarConverter::convertFloat(literal);
        ScalarConverter::convertToAll(f);
    }
    else
    {
        std::cout << "It's not a valid C++ literal" << std::endl;
    }
}

bool ScalarConverter::isChar(std::string literal)
{
    if (literal.length() == 1 || (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\''))
        return (true);
    return (false);
}

bool ScalarConverter::isInt(std::string literal)
{
    try
    {
        size_t pos = 0;
        std::stoi(literal, &pos);
        if (pos == literal.length())
            return (true);
        else
            return (false);
    }
    catch(const std::exception& e)
    {
        return (false);
    }
}

bool ScalarConverter::isFloat(std::string literal)
{
    try
    {
        size_t pos = 0;
        std::stof(literal, &pos);
        if (pos == literal.length())
            return (true);
        else if (pos == literal.length() -1 && literal[pos] == 'f')
            return (true);
        else
            return (false);
    }
    catch(const std::exception& e)
    {
        return (false);
    }
}

bool ScalarConverter::isDouble(std::string literal)
{
    try
    {
        size_t pos = 0;
        std::stod(literal, &pos);
        if (pos == literal.length())
            return (true);
        else
            return (false);
    }
    catch(const std::exception& e)
    {
        return (false);
    }
}

int  ScalarConverter::convertInt(std::string literal)
{
    return (stoi(literal));
}

char ScalarConverter::convertChar(std::string literal)
{
    if (literal.length() == 1)
        return (literal[0]);
    return (literal[1]);
}

double ScalarConverter::convertDouble(std::string literal)
{
    return (stod(literal));
}

float ScalarConverter::convertFloat(std::string literal)
{
    return (stof(literal));
}

template<typename T>
void ScalarConverter::convertToAll(const T& value)
{
    if (isnan(value) || isinf(value))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << value << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1); // nachkommastellen
        if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(static_cast<char>(value)))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        if (static_cast<int>(value) > std::numeric_limits<int>::max() || static_cast<int>(value) < std::numeric_limits<int>::min())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        if ((static_cast<float>(value) > std::numeric_limits<float>::max() || static_cast<float>(value) < std::numeric_limits<float>::min()) && static_cast<float>(value) != 0)
            std::cout << "float: impossible" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        if ((static_cast<double>(value) > std::numeric_limits<double>::max() || static_cast<double>(value) < std::numeric_limits<double>::min()) && static_cast<double>(value) != 0)
            std::cout << "double: impossible" << std::endl;
        else
            std::cout << "double: " << static_cast<double>(value) << std::endl;
    }
}