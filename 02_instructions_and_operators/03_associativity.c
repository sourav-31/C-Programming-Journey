#include <stdio.h>
int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value of a*b/c is %d",a*b/c);
    // this will solve in this manner
    // 1st priority - */%
    // 2nd priority - +-
    // 3rd priority - =

    // when */% are there it follows associativity (left to right)
    // so, 3*6/9 = 18/9 = 2

    
    //Pro Tip: Always use parenthesis in case of confusion

return 0;
}