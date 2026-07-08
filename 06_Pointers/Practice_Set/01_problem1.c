/*Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

#include <stdio.h>
int main(){
    int a = 6;
    int* b = &a;
    printf("The address of variable a is %p\n",b);
    printf("The value at the address %p is %d\n", b, *b);
return 0;
}
