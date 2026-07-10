// Repeat 8 using while loop.

#include <stdio.h>
int main(){
    int n;
    int fact = 1;
    int i = 1;
    printf("Enter number : ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);


return 0;
}