#include <stdio.h>
int sum (int*, int*);
int sum (int* a, int* b){
    *a = 6;
    return (*a+*b);
}
int main(){
    int x = 1;
    int y = 6;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
return 0;
}
// By calling it from reference the value of x gets change by the function
//over