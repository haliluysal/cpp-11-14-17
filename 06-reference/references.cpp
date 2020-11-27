#include <iostream>

int main() {
	// referent
	int x = 10;
	// reference
	int& ref = x;

	x = 5;
	ref = 15;
	int y = 20;
	ref = y;

	std::cout << "x: " << x << std::endl;
	std::cout << "ref: " << ref << std::endl;



	return 0;
}