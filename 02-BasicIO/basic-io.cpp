#include <iostream>
#include <string>

int main() {
	std::cout << "hello world \n" << "45" << "\t" << 8.2f << std::endl;

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	char name[512];
	std::cout << "Enter your name: ";

	std::cin.getline(name, 512);

	std::cout << "Your name is: " << name << std::endl;

	return 0;
}