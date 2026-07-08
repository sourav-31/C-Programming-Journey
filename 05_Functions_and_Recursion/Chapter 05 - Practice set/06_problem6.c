//Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>
int sum(int);
int sum(int n){
    if (n==1) // base condition
    {
        return 1;
    }
    
    return n + sum(n-1);
}
int main(){
    int n;
    printf("Enter value of n:\t");
    scanf("%d",&n);
    printf("The Sum of first %d natural numbers is %d", n, sum(n));
return 0;
}