/*Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0*/

#include <stdio.h>
int main(){
    int i = 0;
    while (i<=10)
    {
        printf("%d\n",i+10);
        i++;
    }
    
return 0;
} // also can be done by initializing i with 10
