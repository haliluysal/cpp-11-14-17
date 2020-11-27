#include <iostream>
#include "Add.h"


int main()
{
	int x, y;

	std::cout << "Enter first number: ";
	std::cin >> x;
	std::cout << "Enter second number: ";
	std::cin >> y;

	int result = Add(x, y);

	return 0;
}

