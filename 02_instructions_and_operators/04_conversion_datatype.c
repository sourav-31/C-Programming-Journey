#include <stdio.h>
int main()
{
    int a;
    int d;
    float b = 49.55;
    float c = 23.33;

    a = (int)b; // This will convert datatype to int
    d = (int)c; // This will convert datatype to int

    printf("The rounded off value of %f is : %d\n", b, a);
    printf("The rounded off value of %f is : %d\n", c, d);
    return 0;
}