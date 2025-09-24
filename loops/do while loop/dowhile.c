// do while loop:
// The do while loop is similar to the while loop, but it guarantees that the loop body is executed at least once before the condition is tested.

// The syntax of the do while loop is as follows:

// do {
//     // loop body
// } while (condition);

// The loop body is executed first, and then the condition is checked. If the condition is true, the loop body is executed again. This process continues until the condition becomes false.

// #include<stdio.h>

// int main() {
//     int i=1;
//     do {
//         printf("%d \n",i);
//         i++;
//     } while(i<=5);

//     return 0;
// }

// print the sum of the first n Natural Numbers.

#include<stdio.h>

int main() {
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    printf("sum is %d \n", sum);

    return 0;
}