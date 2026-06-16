#include <stdio.h>

//Function Prototype
int sum(int,int);


// Function definition
int sum (int x, int y)
{
   // printf("The Sum is %d",x+y);
    return x+y;
}


int main(){
    int a = 1;
    int b = 2;
    int c = a+b;
    printf("The sum is %d\n",c);
    int d = sum(b,c); //  Function Call
    printf("The sum is %d\n",d);
return 0;
}
