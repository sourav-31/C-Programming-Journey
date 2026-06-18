#include <stdio.h>
int main(){
    int i = 69;
    int* j = &i; // j is a pointer pointing i
    printf("The address of i is %p\n",&i); // %u is used for integer value
    printf("The address of i is %p\n",j);
    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));

return 0;
}
