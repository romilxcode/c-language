// Types:

// if-else
// Switch

// if(Condition) {
      //do something if TRUE
// }

// else {
      //do something if FALSE
// }


// if(age > 18) {
      //       printf("adult \n");
      //       printf("they can vote \n");
      //       printf("they can drive \n");
      // }

      // else {
      //       printf("You are not an adult \n");
      // }

// #include<stdio.h>

// int main() {
//       int age;
//       printf("enter age : ");
//       scanf("%d", &age);

//       if(age > 18) 
//       printf("adult \n");
//       else
//       printf("not adult \n");
//       printf("Thank you");
//       return 0;
// }

// else-if

#include<stdio.h>

      int main() {
      int age;
      printf("enter age : ");
      scanf("%d", &age);

      if(age > 18) {
            printf("adult \n");
      }
      else if (age > 13 && age < 18) {
            printf("teenager \n");
      }
      else {
            printf("child");
      }
            return 0;
      }