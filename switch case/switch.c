// switch

// switch(number) {
// case C1://do something
//       break;
// case C2://do something
//       break;
// default://do something
// }

#include<stdio.h>

int main() {
     char day;
     printf("enter day(M-s) : ");
     scanf("%s", &day);

     switch (day) {
      case 'M': printf("Monday \n");
             break;
      case 't': printf("Tuesday \n");
             break;
      case 'W': printf("Wednesday \n");
             break;
      case 'T': printf("Thursday \n");
             break;
      case 'F': printf("Friday \n");
             break;
      case 'S': printf("Saturday \n");
             break;
      case 's': printf("Sunday \n");
             break;
      default: printf("not a valid day! \n");
      }

      return 0;
}
