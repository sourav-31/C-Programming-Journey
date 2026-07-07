#include <stdio.h>
// void swap(int, int);
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return ()
// }
// This will not work because function cannot change values

void swap(int*,int*);
void swap(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4;
    int b = 6;
    swap (&a,&b);
    printf("The Value of a and b is %d and %d",a,b);
return 0;
}