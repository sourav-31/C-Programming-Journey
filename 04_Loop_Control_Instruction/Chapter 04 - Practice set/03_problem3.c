// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main(){
    int sum = 0;
    printf("The Sum of first 10 natural numbers are:\n");
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    
return 0;
}

//over