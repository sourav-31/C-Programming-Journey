#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a); /* %d is for integer, ‘&’ is the “address of” operator and it means that the supplied value should be copied
                        to the address which is indicated by variable a */
    printf("The value of a is %d",a);

    float b; //float is variable for decimal values
    scanf("%f", &b); // %f is for float variable 
    printf("The value of b is %f", b);

    char c; // char is character variable
    scanf("%c", &c); // %C is for characters 
    printf("The value of c is %c",c);
return 0;
// run in terminal to interact with program
// output can only read
}
/*Right now i am unable to perform all three executions it only
  performs 1st input program which is variable a, but i will fix
  it later.*/