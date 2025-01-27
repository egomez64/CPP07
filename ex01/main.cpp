#include "iter.hpp"
#include <iostream>

template <typename T>
void add(T &var)
{
	var++;
}

template <typename T>
void display(T val)
{
	std::cout << val << " ";
}

int main()
{
	int tab1[] = {0, 1, 2, 3, 4, 5};
	double tab2[] = {0.5, 1.5, 2.5, 3.5, 4.5, 5.5};
	char tab3[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	std::cout << "tab1 before add : ";
	::iter<int>(tab1, 6, display<int>);
	std::cout << std::endl;
	std::cout << "tab1 after add : ";
	::iter<int>(tab1, 6, add<int>);
	::iter<int>(tab1, 6, display<int>);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << "tab2 before add : ";
	::iter<double>(tab2, 6, display<double>);
	std::cout << std::endl;
	std::cout << "tab2 after add : ";
	::iter<double>(tab2, 6, add<double>);
	::iter<double>(tab2, 6, display<double>);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << "tab3 before add : ";
	::iter<char>(tab3, 6, display<char>);
	std::cout << std::endl;
	std::cout << "tab3 after add : ";
	::iter<char>(tab3, 6, add<char>);
	::iter<char>(tab3, 6, display<char>);
	std::cout << std::endl;
}