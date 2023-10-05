#include "Span.hpp"

Span::Span(int N)
{
	if (N < 0)
		throw std::invalid_argument("Size cant be negative!");
	_N = N;
	_elements.resize(_N); // compiler makes the vector of this size and fills it with zeros.
}

Span::Span(Span const& other) :
	_N()
{
	*this = other;
}

Span::~Span() {}



void Span::addNumber(long num)
{
	if (_elements.size() >= _N)
		throw std::out_of_range("you cant add more numbers");
	else if (num > INT_MAX || num < INT_MIN)
		throw std::out_of_range("Not an Integer! pls smoller");
	else
		_elements.push_back(static_cast<int>(num));
}

long Span::shortestSpan()
{
	if (_elements.size() <= 1)
		throw std::out_of_range("Not enough numbers for this operation");
	long maxValue = 4294967295;
	long shortestSpan = maxValue; // 2 times INT_MAX (cause -INT_MAX till INT_MAX would overflow otherwise)

	std::sort(_elements.begin(), _elements.end());

	for (size_t i = 1; i < _elements.size(); i++)
	{
		long span = abs(static_cast<long>(_elements[i]) - static_cast<long>(_elements[i-1]));
		if (span > maxValue)
			throw std::out_of_range("Span is too big, provide smoler numbers");
		if (span < shortestSpan)
			shortestSpan = span; // Update shortestSpan if a smaller span is found
	}
	return shortestSpan;
}

long Span::longestSpan()
{
	if (_elements.size() <= 1)
		throw std::out_of_range("Not enough numbers for this operation");

	std::vector<int> tmp = _elements;

	std::vector<int>::iterator min_num = std::min_element(tmp.begin(), tmp.end());
	std::vector<int>::iterator max_num = std::max_element(tmp.begin(), tmp.end());
	return static_cast<long>(*max_num) - static_cast<long>(*min_num);
}


int Span::RandomNumber () { return (std::rand()%100); }


void Span::add_many_more()
{
	if (_N < 0)
		throw std::invalid_argument("number cant be smoler than 0");
	std::generate(_elements.begin(), _elements.end(), Span::RandomNumber);
}


void Span::print()
{
	if (_elements.empty())
		throw std::invalid_argument("nothing to print");
	std::cout <<std::endl<< BLU"        VECTOR"<< RESET <<"\n--------------------------"<<std::endl;
	for (size_t i = 0; i < _elements.size(); i++) {
		std::cout << BLU"vec.at("<< i << "):   "RESET <<_elements[i] << std::endl;
	}
	std::cout << "--------------------------"<<std::endl<<std::endl;
}



Span& Span::operator=(Span const& other)
{
	if (other._N != 0)
	{
		this->_elements.clear();
		this->_N = other._N;
		this->_elements = other._elements;
	}
	return *this;
}

std::vector<int> Span::getSpan() const
{
	return _elements;
}
