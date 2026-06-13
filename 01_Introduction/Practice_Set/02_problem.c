/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height, Using inputs supplied by the user.*/

#include <stdio.h>
int main(){
    int radius,height;
    // int radius;
    // int height;
    printf("Enter radius\n");
    scanf("%d", &radius);

    printf("Enter height\n");
    scanf("%d",&height);

    printf("The Area of the circle with radius %d is %f\n",radius,3.14*radius*radius);
    printf("The Volume of the cylinder with radius %d and height %d is %f",radius,height,3.14*radius*radius*height);
return 0;
}