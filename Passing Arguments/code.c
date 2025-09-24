 // #include<stdio.h>

// int sum(int a , int b);

// int main() {
//     int a , b;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter second number : ");
//     scanf("%d", &b);
    
//     int s = sum(a,b);
//     printf("sum is : %d \n", s);
//     return 0;
// }

// int sum(int x, int y) {
//     return x + y;
// }

// #include<stdio.h>

// int sum(int a , int b);
// void printTable(int n);

// int main() {
//     int n;
//     printf("enter number : ");
//     scanf("%d", &n);

//     printTable(n); //argument/actual parameter
   
//     return 0;
// }

// int sum(int x, int y) {
//     return x + y;
// }

// void printTable(int n) { //parameter / formal parameter
//     for(int i=1; i<=10; i++) {
//         printf("%d \n", i*n);
//     }
// }

// #include<stdio.h>

// void calculatePrice(float value);

// int main() {
//     float value = 2000000;
//     calculatePrice(value);
//     printf("value is : %f \n", value);
//     return 0;
// }

// void calculatePrice(float value) {
//     value = value + (0.18 * value);
//     printf("final price is : %f \n", value);
// }

// output:
// final price is : 2360000.000000
// value is : 2000000.000000

// practice qs 29

// use library functions to calculate the square of a number given by user.

// #include<stdio.h>
// #include<math.h>

// int main() {
//    int n =4;
//    printf("%f", pow(n, 2));
//     return 0;
// }

// qs 31:
// Write functions to calculate area of a square, a circle & a rectangle.

#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main() {
    float a = 5.0;
    float b = 10.0;

    printf("area is : %f", rectangleArea(a , b));
    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b) {
    return a * b;
}
