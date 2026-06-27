// Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>
// 0 1 1 2 3 5 8 13 
int fibo(int);
int fibo(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    printf("Enter value of n:\t");
    scanf("%d",&n);
    printf("The value of %dth element is %d", n, fibo(n));
return 0;
}