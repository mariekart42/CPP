#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <limits>
# include <cmath>
#include <cfloat>
#include <float.h>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter & operator=(const ScalarConverter&);
    ~ScalarConverter();

    static bool isChar(std::string);
    static bool isInt(std::string);
    static bool isFloat(std::string);
    static bool isDouble(std::string);
    static int  convertInt(std::string);
    static char convertChar(std::string);
    static double convertDouble(std::string);
    static float convertFloat(std::string);
    template<typename T>
    static void convertToAll(const T& value);

public:
    static void convert(std::string literal);
};

#endif