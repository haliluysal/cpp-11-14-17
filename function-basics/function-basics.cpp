#include <iostream>
// Prototype or declaration
int Add(int, int);

int main()
{
	int x, y;

	std::cout << "Enter first number: ";
	std::cin >> x;
	std::cout << "Enter Second number: ";
	std::cin >> y;

	int result = Add(x, y);
}

int Add(int x, int y)
{
	int sum = x + y;
	std::cout << "Sum is: " << sum << std::endl;

	return sum;
}