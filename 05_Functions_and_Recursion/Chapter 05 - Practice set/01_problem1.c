//Write a program using function to find average of three numbers.

#include <stdio.h>

float average(float,float,float);

float average(float a,float b,float c){
     return (a+b+c)/3;
}
int main(){
    int a,b,c;
    printf("Enter three numbers :\t");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of %d, %d and %d is %.2f",a,b,c,average(a,b,c));
return 0;
}
