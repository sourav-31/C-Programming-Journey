/*Write a program to print ‘n’ natural numbers in reverse order.*/

#include <stdio.h>
int main(){
    int n; int i=0;
    printf("Enter value of n:");
    scanf("%d",&n);

    do
    {
        printf("%d\n",n);
        n--;
    } while (n>0);
    
return 0;
}