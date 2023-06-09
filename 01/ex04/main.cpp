#include "replace.hpp"

void clear(void){system("clear");}

void Replace::throwError(std::string message)
{
    clear();
    std::string buf;
    std::cout << "❌  "<< message << std::endl<< std::endl;
    std::cout << "\033[31mEXIT\033[0m 🤟"<<std::endl;
    initSuccess = false;
}

Replace::Replace(int ac, char **&av)
{
    this->initSuccess = true;
    if (ac != 4)
        throwError("Invalid amount of arguments!\n ./replace  <file>  <str>  <str>");
    else
    {
        // open file that was provided as argument
        this->infile.open(av[1]);
        if (!this->infile.is_open())
            throwError("Unable to access provided file!");
        else
        {
            // creating file for output
            std::string out;
            this->outfile.open(out.append(av[1]).append(".replace"));
            if (!this->outfile.is_open())
                throwError("Unable to create output file!");
        }
    }
    this->replace = av[2];
    this->with = av[3];
}

Replace::~Replace()
{
    if (this->infile.is_open())
        this->infile.close();
    if (this->outfile.is_open())
        this->outfile.close();
}

void Replace::read(void)
{
    std::string read;
    size_t found;

    while (std::getline(this->infile, read))
    {
        // std::cout << read << std::endl;
        while ((found = read.find(this->replace)) != std::string::npos)
        {
            read.erase(found, this->replace.size());
            read.insert(found, this->with);
        }
        this->outfile << read << std::endl;
        if (this->infile.eof())
            break;
    }
}


int main(int ac, char **av)
{
    Replace obj(ac, av);

    if (obj.initSuccess == false)
        return (69);
    // std::cout<<"gut"<<std::endl;
    obj.read();
}