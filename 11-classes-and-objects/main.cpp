#include "Integer.h"
#include <iostream>

void Print(Integer i) { // pass by value copy request

}

Integer Add(int x, int y) { // return copy of the class
	return Integer(x + y);
}

int main() {
	Integer i(5);
	std::cout << i.GetValue() << std::endl;

	Integer i2(i);
	return 0;
}
