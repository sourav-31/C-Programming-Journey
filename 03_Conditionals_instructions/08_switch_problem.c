#include <stdio.h>
int main(){
    /*Write a program to find grade of a student given his marks based on below:
            90 – 100 => A
            80 – 90 => B
            70 – 80 => C
            60 – 70 => D
            50 – 60 => E
            <50 => F
 */

 char grade;
 int marks;
 printf("Enter marks:\n");
 scanf("%d",&marks);

 switch(marks/10){
     case 10:
    printf("Grade is A");
    break;
    case 9:
    printf("Grade is A");
    break;
    case 8:
    printf("Grade is B");
    break;
    case 7:
    printf("Grade is C");
    break;
    case 6:
    printf("Grade is D");
    break;
    case 5:
    printf("Grade is E");
    break;
    default:
    printf("Grade is F");
    break;
    
 }

return 0;
}