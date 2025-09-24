// #include<stdio.h>

// void printHW(int count);

// int main() {
//     printHW(10);
//     return 0;
// }

// recursive function

// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello World \n");
//     printHW(count-1);
// }

// Practice Qs 30
// sum of first n natural numbers.

// #include<stdio.h>

// int sum(int n);

// int main() {
//     printf("sum is : %d", sum(5));

//     return 0;
// }

// // recursive function
// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int sumNm1 = sum(n-1); //sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// Qs 31
// factorial of n.

// #include<stdio.h>

// int fact(int n);

// int main() {
//     printf("factorial is : %d", fact(5));
//     return 0;
// }

// int fact(int n) {
//     if(n == 0) {
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }  

// Qs 32
// write a function to convert celsius to fahrenheit.

// #include<stdio.h>
// float convertTemp(float celsius);
// int main() {
//     float far = convertTemp(37);
//     printf("far : %f", far);
//     return 0;
// }

// float convertTemp(float celsius) {
//     int far = celsius * (9.0/5.0) + 32;
//     return far;
// }

// Qs 33
// write a function to calculate percentage of a student from marks  in science, math & sdanskrit.

// #include<stdio.h>

// int calcPercentage(int science, int math, int sanskrit);
// int main() {
//     int sc = 98;
//     int math = 95;
//     int sanskrit = 33;

//     printf("percentage is : %d", calcPercentage(sc, math, sanskrit));
//     return 0;
// }

// int calcPercentage(int science, int math, int sanskrit) {
//     return ((science + math + sanskrit) / 3);
// }

// Qs 34
// write a function to print n terms of the fibonaccci sequence.

// #include<stdio.h>
// int fib(int n);
 
// int main() {
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n) {
//         if(n == 0) {
//             return 0;
//         }
//         if(n == 1) {
//             return 1;
//         }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d \n", n, fibN);
//     return fibN;
// }

// Qs 35
// write a function to print the nth term of the 
// fibonacci sequence.

#include<stdio.h>
int main() {
    
}