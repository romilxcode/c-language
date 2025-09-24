// #include<stdio.h>

// void printAddress(int *n);

// int main() {
//     int n = 4;
//     printf("%p \n", &n);
//     printAddress(&n);
//     printf("address of n is : %u \n", &n);
//     return 0;
// }

// void printAddress(int *n) {
//     printf("address of n is : %u \n", n);
// }

// Qs 40

// write a function to calculate sum, product & average
// of 2 numbers. Print the average in the main function.

#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
