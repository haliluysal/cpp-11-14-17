#include <iostream>

void print(const int* ptr) {
	std::cout << *ptr << std::endl;
}

int main() {

	/*
	
	float radius = 0.0f;
	std::cout << "Enter the radius of a circle: ";
	std::cin >> radius;
	const float PI = 3.141f;

	float area = PI * std::pow(radius, radius);
	float circumference = 2 * PI * radius;

	std::cout << "Area is: " << area << std::endl;
	std::cout << "Circumference is : " << circumference << std::endl;
	
	*/

	const int CHUNK_SIZE = 512;
	const int* ptr = &CHUNK_SIZE;
	

	return 0;
}