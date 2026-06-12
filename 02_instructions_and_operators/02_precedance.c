#include <stdio.h>
int main(){
    int a = 2;
    int b = 4;
    int c = 6;

    printf("The value of a*b*c+b+c/a is : %d",a*b*c+b+c/a);
    // Here the precedance follows as
    // 1st priority - */%
    // 2nd priority - +-
    // 3rd priority - =

    // so, a*b*c+b+c/a
    // 2*4*6+4+6/2
    // 48+4+3
    // 55

    
    //Pro Tip: Always use parenthesis in case of confusion
return 0;
}