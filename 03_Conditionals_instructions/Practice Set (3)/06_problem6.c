/*Write a program to find greatest of four numbers entered by the user.*/

#include <stdio.h>
int main(){
    int n1, n2, n3, n4;
    printf("Enter first number:\n");
    scanf("%d",&n1);
    printf("Enter second number:\n");
    scanf("%d",&n2);
    printf("Enter third number:\n");
    scanf("%d",&n3);
    printf("Enter fourth number:\n");
    scanf("%d",&n4);
    
    if(n1>n2 && n1>n3 && n1> n4){
        printf("The greatest number is %d",n1);
    }
       
     if(n2>n1 && n2>n3 && n2> n4){
        printf("The greatest number is %d",n2);
    }
    
     if(n3>n1 && n3>n2 && n3> n4){
        printf("The greatest number is %d",n3);
    }

     if(n4>n1 && n4>n2 && n4> n3){
        printf("The greatest number is %d",n4);
    }
                
return 0;
}