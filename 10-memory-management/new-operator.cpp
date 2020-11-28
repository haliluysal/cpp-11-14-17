#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
	
	// C Style memory allocation
	int* p1 = (int*)calloc(5, sizeof(int));
	if (p1 == NULL) {
		std::cout << "Failed to allocate memory for calloc" << std::endl;
	}
	int* p2 = (int*)malloc(5 * sizeof(int));
	if (p2 == NULL) {
		std::cout << "Failed to allocate memory for malloc" << std::endl;
	}
 	*p2 = 5;
	free(p1);
	p1 = NULL;
	free(p2);
	p2 = NULL;

}