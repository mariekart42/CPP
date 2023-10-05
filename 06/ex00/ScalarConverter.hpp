#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <iomanip>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter & operator=(const ScalarConverter&);
    ~ScalarConverter();

    static bool isChar(const std::string&);
    static bool isInt(const std::string&);
    static bool isFloat(const std::string&);
    static bool isDouble(const std::string&);
    static int  convertInt(const std::string&);
    static char convertChar(std::string);
    static double convertDouble(const std::string&);
    static float convertFloat(const std::string&);
    template<typename T>
    static void convertToAll(const T& value);

public:
    static void convert(const std::string& literal);
};

#endif
