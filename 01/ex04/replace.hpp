#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Replace
{
    private:
        std::fstream infile;
        // std::ofstream outfile;
        // std::string &fileName;
        bool initSuccess;
    public:
        Replace(int ac, char **av);
        ~Replace();
        void throwError(std::string message);
};