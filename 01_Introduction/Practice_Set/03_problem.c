/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).*/

#include <stdio.h>
int main(){
    float C;
    printf("Enter temperature in celcius\n");
    scanf("%f", &C);

    float F = (C*1.8)+32; // F = (9/5)*C+32
    printf("The temperature in Farenheit is %.2f",F); // "%.2f" represents 'consider 2 place after decimal'
return 0;
}