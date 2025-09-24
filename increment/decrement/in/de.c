#include<stdio.h>

// int main() {
    // increment operator
    // ++i (pre increment) 
    // i++ (post increment)

    // --i (pre decrement)
    // i-- (post-decrement)

//    
    // int main() {
    // int i=1;
    // // printf("%d \n", i--);
    // // printf("%d \n", i);

    // printf("%d \n", --i); //decrement, then use
    // printf("%d \n", i);
    // return 0;
    // }

// loop counter can be float or even character

int main() {
    for(float i=1.0; i<=5.0; i++) {
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++) {
        printf("%c \n", ch);
    }
    return 0;
}