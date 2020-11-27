#include <iostream>
#include "pointer-functions.h"

int main()
{
	int x = 10;

	std::cout << &x << std::endl; // address of operator

	int* ptr{ &x }; // void pointer can void to any type

	std::cout << ptr << std::endl;

	*ptr = 5;

	std::cout << x << std::endl;

	int y = *ptr;

	std::cout << y << std::endl;



	return 0;
}