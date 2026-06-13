#include <stdio.h>
int main(){
    float S;
    printf("Enter the side length of square\n");
    scanf("%f",&S);
    float A,P;
    A= S*S;
    P= 4*S;
    printf("The area of square is %f\nThe Perimeter of square is %f",A,P);
return 0;
}