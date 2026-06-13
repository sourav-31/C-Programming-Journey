/*1. Write a C program to calculate area of a rectangle:
     b. Using inputs supplied by the user.*/


#include <stdio.h>
int main(){
    int length;
    int breadth;
    //int length, breadth;
    printf("Enter length\n");
    scanf("%d",&length);

    printf("Enter breadth\n");
    scanf("%d",&breadth);

    printf("The area of this Rectangle is %d",length*breadth);
   
return 0;
}