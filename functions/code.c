// #include<stdio.h>
// // declaration/prototype
// void printHello();

// int main() {
//     printHello(); //function call
//     printHello();
//     printHello();
//     return 0;
// }

// // function definition
// void printHello() {
//     printf("Hello! \n");
//     printf("My name is romil \n");
// }



// practice Qs 27
// write 2 functions -one to print "Hello" & second to print "good bye".

// #include<stdio.h>
// declaration/ prototype
// void printHello();
// void printgoodbye();

// int main() {
//     printHello();
//     printgoodbye();
//     return 0;
// }

// // function definition
// void printHello() {
//     printf("Hello! \n");
// }

// void printgoodbye() {
//     printf("GoodBye! \n");
// }

// Output:
// Hello! 
// GoodBye!

// Write a function that prints Namaste if user is Indian
//  & Bonjour if the user is French.

// #include<stdio.h>
// void namaste();
// void bonjour();

// int main() {
//     printf("enter f for french & i for indian : ");
//     char ch;
//     scanf("%c", &ch);

//     if(ch == 'i') {
//         namaste();
//     } else {
//         bonjour();
//     }
//     return 0;
// }

// void namaste() {
//     printf("Namaste! \n");
// }

// void bonjour() {
//     printf("Bonjour! \n");
// }

#include<stdio.h>
void namaste();
void bonjour();

int main() {
    printf("enter f for french & i for indian : ");
    char ch;
    scanf("%c", &ch);
    namaste();
    return 0;
}

void namaste() {
    printf("Namaste! \n");
    bonjour();
}

void bonjour() {
    printf("Bonjour! \n");
    namaste();
}