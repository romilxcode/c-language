// #include<stdio.h>
// int main() {
//     int arr[5] = {2,4,6,8,1};
//     arr[4] = 100;
//     printf("%d", arr[4]);
//     return 0;
// }

// float value:

// #include<stdio.h>
// int main() {
//     float a[3] = {1,2,3,};
//     printf("%f",a[0]);
//     return 0;
// }

// char:

// #include<stdio.h>
// int main() {
//     char arr[4] = {'a', 'r', 'Y', '%'};
//     printf("%c",arr[3]);
//     return 0;
// }

// second method:

// #include<stdio.h>
// int main() {
//     int arr[5];
//     arr[0] = 1;
//     arr[1] = 4;
//     arr[2] = 5;
//     arr[3] = 6;
//     arr[4] = 7;
//     printf("%d",arr[1]);
// }

// Printing output & taking input:

// #include<stdio.h>
//  int main() {
//      int arr[2];
//      printf("Enter first element : ");
//      scanf("%d",&arr[0]);
//      printf("Enter second element : ");
//      scanf("%d",&arr[1]);
//      return 0;
//  }

// Using loop:

#include<stdio.h>
int main() {
    int arr[5];

    for (int i=0;i<=4;i++) {
        int a = i+1;
        printf("Enter Element: %d\n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<5;i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}