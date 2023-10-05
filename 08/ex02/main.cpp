#include "MutantStack.hpp"

//int main( void )
//{
//	// test from subject file
//	{
//		MutantStack<int> mstack;
//		mstack.push(5);
//		mstack.push(17);
//
//		mstack.pop();
//		std::cout <<RESET<<YELLOW<< "MutantStack size: "<<mstack.size() <<RESET<< std::endl;
//		std::cout << "Removed first element (17) with .pop()"<<std::endl;
//
//		mstack.push(3);
//		mstack.push(5);
//		mstack.push(737);
//		mstack.push(0);
//		std::cout <<YELLOW<< "MutantStack size: "<<mstack.size() <<RESET<< std::endl;
//		std::cout << "Added 4 more values to the vector with .push()"<<std::endl;
//
//		MutantStack<int>::iterator start = mstack.begin();
//		MutantStack<int>::iterator end = mstack.end();
//		++start;
//		--start;
//		while (start != end)
//		{
//			std::cout << *start << std::endl;
//			++start;
//		}
//
//		std::stack<int> copy(mstack);
//
//	}
//}


// EXTRA TESTS

int main (void)
{
	std::string partition(70, '-');

	{
		std::cout << partition << std::endl;
		std::cout << RESET<<"Scope 0: Subject test" << std::endl;
		std::cout << partition << std::endl;

		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout <<"number on top: "<< mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Removed top element (17) with .pop()"<<std::endl;
		std::cout << "stack size: " << mstack.size() << std::endl<< std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> s(mstack);
		MutantStack<int>::iterator it = s.begin();
		MutantStack<int>::iterator ite = s.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "stack:  "BLUE<<*it <<RESET<< std::endl;
			++it;
		}

	}
std::cout<<std::endl<<std::endl;
	{
		std::cout << partition << std::endl;
		std::cout << "Scope 1: Subject test but with LIST" << std::endl;
		std::cout << partition << std::endl;

		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout <<"number at last: "<< mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "Removed last element (17) with .pop_back()"<<std::endl;
		std::cout <<"list size: "<< mstack.size() << std::endl<< std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "list:  "BLUE<<*it <<RESET<< std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout<<std::endl<<std::endl;
	std::cout << partition << std::endl;
	std::cout << "Scope 3: Own tests" << std::endl;
	std::cout << partition << std::endl;

	MutantStack<int> k;
	std::stack<int> j;

	std::cout << "MutantStack size before: " << k.size() << std::endl;
	std::cout << "Stack size before: " << j.size() << std::endl<< std::endl;
	std::cout << "added " << GREEN"19"RESET<< std::endl;k.push(19);
	std::cout << "added " << "8" << std::endl;k.push(8);
	std::cout << "added " << "9" << std::endl;k.push(9);
	std::cout << "added " << "10"<< std::endl;k.push(10);
	std::cout << "added " << "32"<< std::endl;k.push(32);
	std::cout << "added " << BLUE"99"RESET<< std::endl<< std::endl;k.push(99);
	std::cout << "MutantStack size after adding elements: ";
	std::cout << k.size() << std::endl<< std::endl;
	std::cout << "First element: "GREEN;
	std::cout << *(k.begin()) <<RESET<< std::endl;
	std::cout << "Last element:  "BLUE;
	std::cout << *(k.end() - 1)<<RESET<< std::endl;

	return 0;
}
