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

Replace::Replace(int ac, char **av)
{
    // std::cout <<"compiling"<<std::endl;
    this->initSuccess = true;
    if (ac != 4)
        throwError("Invalid amount of arguments!");
    else
    {
        // file.open(av[1], std::ios::in);
        this->infile.open(av[1], std::ios::in);
        std::string buf;
        getline(this->infile, buf);
        std::cout << buf<<std::endl;
        getline(this->infile, buf);
        std::cout << buf<<std::endl;
    }
    // init class variables
    // std::string typecast;
    // typecast = av[1];
    std::cout << "before"<<std::endl;
    std::cout<<av[0]<<std::endl;

    // std::string typecastAvFile = std::string(avFile);
    // this->infile.open(avFile, std::ios::in);
    // this->outfile()
}
Replace::~Replace() {}

int main(int ac, char **av)
{
    Replace obj(ac, av);
// }
    // // creating fstream object
    // std::fstream file;


    // // creating ofstream object -> new file
    // std::ofstream fileRplace;

    // std::string buf;



    // using open function, second param means that we receiving input
    // file.open(av[1], std::ios::in);
    // fileRplace.open((std::string(av[1])).append(".replace"));

// std::cout << "file: "<< buf << std::endl;

//     file.close();

    (void)ac;
    std::cout <<"compiling"<<std::endl;
}