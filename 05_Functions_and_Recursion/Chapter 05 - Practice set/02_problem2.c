/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2
.*/

#include <stdio.h>
float force(float);
float force(float m){
    float g = 9.8;
    float f = m*g;
    return f;
}
int main(){
    float a;
    printf("Enter mass of the object/body:\t");
    scanf("%f",&a);
    printf("The force of attraction is %.2f",force(a));
return 0;
}