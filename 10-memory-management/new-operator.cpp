#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Malloc() {
	// C Style memory allocation
	int* p1 = (int*)calloc(5, sizeof(int));
	if (p1 == NULL) {
		std::cout << "Failed to allocate memory for calloc" << std::endl;
	}
	int* p2 = (int*)malloc(5 * sizeof(int));
	if (p2 == NULL) {
		std::cout << "Failed to allocate memory for malloc" << std::endl;
	}
	free(p1);
	p1 = NULL;
	free(p2);
	p2 = NULL;
}

void New() {
	int* p = new int{ 5 }; // you can initialize memory as it is allocated
	std::cout << *p << std::endl;

	delete p;
	p = nullptr;
}

void NewArays() {
	int* p = new int[5]{ 1, 3, 4,5,6 }; // uniform initialization
	for (int i = 0; i < 5; i++)
	{
		p[i] = i;
	}

	delete[]p;
}

void Strings() {
	char* p = new char[4];
	strcpy_s(p, 4, "C++");
}

void TwoD() {
	int* p1 = new int[3];
	int* p2 = new int[4];
	int** pData = new int* [3];

	delete[]p1;
	delete[]p2;
	delete[]pData;
}

int main() {

	New();

	return 0;

}