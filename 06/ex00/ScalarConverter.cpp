#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &){}
ScalarConverter::~ScalarConverter(){}

ScalarConverter&  ScalarConverter::operator=(const ScalarConverter&)
{
    return *this;
}





void ScalarConverter::convert(const std::string& literal)
{
    if (isInt(literal))
    {
        int i = ScalarConverter::convertInt(literal);
        ScalarConverter::convertToAll(i);
    }
    else if (isFloat(literal))
    {
        float f = ScalarConverter::convertFloat(literal);
        ScalarConverter::convertToAll(f);
    }
    else if (isDouble(literal))
    {
        double d = ScalarConverter::convertDouble(literal);
        ScalarConverter::convertToAll(d);
    }
    else if (isChar(literal))
    {
        char c = ScalarConverter::convertChar(literal);
        ScalarConverter::convertToAll(c);
    }
    else
        std::cout << "It's not a valid C++ literal" << std::endl;
}





bool ScalarConverter::isChar(const std::string& str)
{
    return str.length() == 1;
}

bool ScalarConverter::isInt(const std::string& str)
{
    std::istringstream iss(str);
    int num;
    iss >> num;
    return !iss.fail() && iss.eof();
}

bool ScalarConverter::isFloat(const std::string& str)
{
    // Remove the 'f' suffix if it exists
    std::string input = str;
    if (!input.empty() && input[input.length() - 1] == 'f')
        input = input.substr(0, input.length() - 1);

    std::istringstream iss(input);
    float num;
    iss >> num;
    return !iss.fail() && iss.eof();
}

bool ScalarConverter::isDouble(const std::string& str)
{
    std::istringstream iss(str);
    double num;
    iss >> num;
    return !iss.fail() && iss.eof();
}





int  ScalarConverter::convertInt(const std::string& literal)
{
    return (atoi(literal.c_str()));
}

char ScalarConverter::convertChar(std::string literal)
{
    if (literal.length() == 1)
        return (literal[0]);
    return (literal[1]);
}

double ScalarConverter::convertDouble(const std::string& literal)
{
    return (stod(literal));
}

float ScalarConverter::convertFloat(const std::string& literal)
{
    return (atof(literal.c_str()));
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
