// #include<stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", _age);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;

//     // address
//     // printf("%p \n", &age);
//     printf("%u \n", &age);

//     printf("%u \n", ptr);

//     printf("%u \n", &ptr);

//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;

//     printf("%d \n", &age);
//     printf("%d \n", *ptr);
//     printf("%d \n",*(&age));
//     return 0;
// }

#include<stdio.h>

int main() {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // x = 0

    printf("%d \n", x);
    printf("*ptr = %d \n", *ptr); // 0

    *ptr +=5; // x = 5
    printf("x = %d \n", x); //5
    printf("*ptr = %d \n", *ptr); // 5

    (*ptr)++;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);
    return 0;
}