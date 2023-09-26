#include "Array.hpp"

/* if OUT_OF_RANGE is greater than SIZE_OF_ARRAY
 * program should throw out_of_range exception */
#define SIZE_OF_ARRAY 15
#define OUT_OF_RANGE 4

int main()
{
    try
    {
        Array<int> A = Array<int>(SIZE_OF_ARRAY);
        Array<int> B;

        A[1] = 2;

        for (int i = 0; i < SIZE_OF_ARRAY; i++)
            A[i] = i + 1;

        std::cout << GREEN"sizeof Array: "RESET << A.size()<< GREEN"\nsizeof range: "RESET << OUT_OF_RANGE << "\n____________________________________" << std::endl;

        for (int i = 0; i < OUT_OF_RANGE; i++)
        {
            if (A[i] == OUT_OF_RANGE)
                std::cout << A[i] << " --> out of range"<<std::endl;
            else
                std::cout << A[i] <<std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }
}