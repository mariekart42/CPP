#include "easyfind.hpp"
#define FIND_ME 69

int main()
{
    try // VECTOR
    {
        std::cout<<"TEST 1:   Find "<<FIND_ME <<" in a vector"<<std::endl;

        std::vector<int> vec;
        vec.push_back(16);
        vec.push_back(12);
        vec.push_back(2);
        vec.push_back(5);
        vec.push_back(FIND_ME);

        std::vector<int>::iterator result = easyfind(vec, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;
    try
    {
        std::cout<<"TEST 2:   DONT Find "<<FIND_ME <<" in a vector"<<std::endl;

        std::vector<int> vec;
        vec.push_back(16);
        vec.push_back(12);
        vec.push_back(2);
        vec.push_back(5);
        vec.push_back(-1);

        std::vector<int>::iterator result = easyfind(vec, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;


//---------------------------------------------------------------------------------------------
    try // DEQUE
    {
        std::cout<<"TEST 3:   Find "<<FIND_ME <<" in a deque"<<std::endl;

        std::deque<int> deq;
        deq.push_back(16);
        deq.push_back(12);
        deq.push_back(FIND_ME);
        deq.push_back(5);
        deq.push_back(-1);

        std::deque<int>::iterator result = easyfind(deq, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;
    try
    {
        std::cout<<"TEST 4:   DONT Find "<<FIND_ME <<" in a deque"<<std::endl;

        std::deque<int> deq;
        deq.push_back(16);
        deq.push_back(12);
        deq.push_back(2);
        deq.push_back(5);
        deq.push_back(-1);

        std::deque<int>::iterator result = easyfind(deq, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;


//---------------------------------------------------------------------------------------------
    try // LIST
    {
        std::cout<<"TEST 5:   Find "<<FIND_ME <<" in a list"<<std::endl;

        std::list<int> list;
        list.push_back(16);
        list.push_back(12);
        list.push_back(FIND_ME);
        list.push_back(5);
        list.push_back(-1);

        std::list<int>::iterator result = easyfind(list, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;
    try
    {
        std::cout<<"TEST 6:   DONT Find "<<FIND_ME <<" in a list"<<std::endl;

        std::deque<int> list;
        list.push_back(16);
        list.push_back(12);
        list.push_back(2);
        list.push_back(5);
        list.push_back(-1);

        std::deque<int>::iterator result = easyfind(list, FIND_ME);
        std::cout << GRN"I found: "RESET << *result << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl << std::endl;
}
