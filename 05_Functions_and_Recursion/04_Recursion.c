#include <stdio.h>

int factorial(int);
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main(){
    int a;
    printf("Enter number :\t");
    scanf("%d",&a);
    printf("The Factrorial of %d is %d",a, factorial(a));
return 0;
}