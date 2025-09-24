// #include<stdio.h>
// int main() {
//     int marks[10] = {95,90,31,25,100,50,65,89,97,30};
//     for(int i=0;i<10;i++) {
//        if(marks[i]<35) {
//             printf("%d\n",marks[i]);
//             printf("%d ",i); // To print index
//        }
//     }
//     return 0;
// }

// Taking input from the user

// #include<stdio.h>
// int main() {
//     int marks[10];
//     for (int i=0; i<10; i++) {
//         printf("Student %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }

//     // Printing marks less than 35 and their index
//       printf("\nStudents who scored less than 35:\n");
//       for (int i = 0; i < 10; i++) {
//         if(marks[i] < 35) {
//             printf("Marks : %d at index %d\n", marks[i], i);
//         }
//       }

//     return 0;

// }


// Practice Qs 41: Write a program to enter price of 3 items & print their final cost with gst.
  
#include<stdio.h>

int main() {
    float price[3];
    printf("enter 3 prices : ");
    scanf("%f", &price[0]); 
    scanf("%f", &price[1]); 
    scanf("%f", &price[2]);
    
    printf("total price 1 : %f \n", price[0]+(0.18*price[0])); 
    printf("total price 2 : %f \n", price[1]+(0.18*price[1])); 
    printf("total price 3 : %f \n", price[2]+(0.18*price[2]));  
    return 0;

} 