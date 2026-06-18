#include <stdio.h>
int main(){
    char i = 'A';
    char* j = &i;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);

    printf("The value at j is %c\n",*(&i));
    printf("The value at j is %c\n",*j);

    // Similarly

    float k = 5.3252;
    float* l = &k;

    printf("The address of k is %p\n",&k);
    printf("The address of k is %p\n",l);
    printf("The value at address l is %f\n",*(&k));
    printf("The value at address l is %f\n",*l);


return 0;
}