// break statement
// exit the loop

#include<stdio.h>

int main() {
    for(int i=1; i<=10; i++) {
        if(i == 10) {
            break;
        }
        printf("%d \n", i);
    }

    printf("end");

    return 0;
}