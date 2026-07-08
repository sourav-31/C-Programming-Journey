//What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++)

#include <stdio.h>
int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4 (because compiler's evaluation order is from Right to left)
    // 4 5 5 (because compiler's evaluation order is from Left to Right)
    // Depends upon default compiler's determination of evaluation order
return 0;
}