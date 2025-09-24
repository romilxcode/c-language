// print the sum of the first n Natural Numbers.

#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int j=n; j>=1; j--) {
        sum = sum + j; // sum += i
        printf("%d \n", j);
    }
    
    printf("sum is %d \n", sum);    
    
    // for(int i=n; i>=1; i-- ) {
    //     printf("%d \n", i);
    // }
    
    return 0;
}