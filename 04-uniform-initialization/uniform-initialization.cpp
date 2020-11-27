#include <string>


int main() {
	int a1; // uninitialized

	int a2 = 0; // copy initialization
	int a3(5); // direct initialization

	std::string s1;
	std::string s2("C++"); // direct initialization

	char d1[8]; // uninitialized
	char d2[8] = { '\0' }; // uninitialized
	char d3[8] = { 'a', 'b', 'c', 'd' }; // Aggregate initialization
	char d4[8] = { "abcd" };

	int b1{}; // value initialization
	int b2{ 5 }; // direct initialization

	char e1[8]{};
	char e2[8]{ "Hello" };
	int* p1 = new int{};

	char* p2 = new char[8]{};
	char* p3 = new char[9]{ "Hello" };

}