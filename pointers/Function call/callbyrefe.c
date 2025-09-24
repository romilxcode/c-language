// call by reference: we pass the address of variable to function.

#include <stdio.h>
void square(int n);
void _square(int* n);

int main() {
	int number = 4;
	square(number);
	printf("number = %d \n", number);

	_square(&number);
	printf("number = %d \n", number);
	return 0;
}

//call by value

void square(int n) {
	n = n * n;
	printf("sqaure = %d \n", n);
}

void _square(int *n) {
	*n = (*n) * (*n); // 4 * 4
	printf("sqaure = %d \n", *n);
}