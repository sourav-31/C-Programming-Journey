/*Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include <stdio.h>
int main(){
    float P,r,t;
    printf("Enter Principal amount\n");
    scanf("%f",&P);

    printf("Enter rate of interest\n");
    scanf("%f",&r);

    printf("Enter no. of years\n");
    scanf("%f",&t);

    float I = (P*r*t/100);

    printf("The value of Simple Interest is %.2f",I);
return 0;
}