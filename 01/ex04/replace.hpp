#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Replace
{
    private:
        std::ifstream infile;
        std::ofstream outfile;
        // std::string &fileName;
    public:
        std::string replace;
        std::string with;
        bool initSuccess;
        Replace(int ac, char **&av);
        ~Replace();
        void throwError(std::string message);
        void read(void);
};

