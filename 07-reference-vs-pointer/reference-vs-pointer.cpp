#include <iostream>

//void Swap(int x, int y) { // pass by value
//	int temp = x;
//	x = y;
//	y = temp;
//}

void Swap(int* x, int* y) { // pass by address
	int temp = *x;
	*x = *y;
	*y = temp;
}


void Swap(int &x, int &y) { // pass by reference
	int temp = x;
	x = y;
	y = temp;
}

void print(int* ptr) {
	if (ptr != nullptr)
	{
		std::cout << *ptr << std::endl;
	}
}

void print(int& ptr) {
	std::cout << ptr << std::endl;
}

int main() {

	int x = 5;
	print(nullptr);
	print(x);
	//int a{ 5 }, b{ 10 };

	//Swap(a, b);

	//std::cout << "a: " << a << std::endl;
	//std::cout << "b: " << b << std::endl;

	return 0;
}