/*Write a program to convert Fahrenheit(Fahrenheit degrees temperature to
Celntigrade).*/

#include <stdio.h>
int main(){
    float F;
    printf("Enter temperature in fahrenheit\n");
    scanf("%f", &F);

    float C = (F-32)/1.8;
    printf("The temperature in celcius is %.2f",C); // "%.2f" represents 'consider 2 place after decimal'
return 0;
}