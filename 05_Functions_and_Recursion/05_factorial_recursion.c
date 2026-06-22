#include <stdio.h>

int factorial(int);
int factorial(int n){
    int fact;
    if (n==1 || n==0) // Base condition
    {
        return 1;
    }
    else {
     fact = factorial(n-1)*n;
    }
}

int main(){
    int a;
    printf("Enter number:\t");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));
return 0;
}