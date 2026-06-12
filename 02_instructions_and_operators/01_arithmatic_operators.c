#include <stdio.h>
int main(){
    int a = 4;
    int b = 3;

    // addition (+) 
    printf("The sum of %d and %d is : %d\n", a, b, a+b);

    //substraction (-)
    printf("The difference of %d and %d is : %d\n",a, b, a-b);

    //multiplication (*)
    printf("The multiplication of %d and %d is : %d\n",a,b,a*b);

    //division (/)
    printf("The division of %d by %d is: %d\n",a, b,a/b);
    // gives output in integer because:
    /* int and int → int
       int and float → float
       float and float → float
    */

    //modulus (%)
    //modulus operator is used to get the remainder 
    printf("The remainder when %d is divided by %d is : %d\n",a,b,a%b);


    // int d = A^x;
    // This doest not work for exponentiation in C
    // For exponentiation we use <math.h>

return 0;
}
