#include <iostream>

extern "C" int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

int main() {
	int result = Add(3, 5);

	std::cout << result << std::endl;
	Add(3.1, 6.3);


	return 0;
}