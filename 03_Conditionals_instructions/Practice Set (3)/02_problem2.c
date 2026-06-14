/*  Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
*/

#include <stdio.h>
int main(){
        int p;
    int c;
    int m;
    float P,T;
    printf("Enter marks obtained out of 100 in Physics:\n");
    scanf("%d",&p);
    printf("Enter marks obtained out of 100 in Chemistry:\n");
    scanf("%d",&c);
    printf("Enter marks obtained out of 100 in Maths:\n");
    scanf("%d",&m);
    T = p+c+m;
    P = (T/3);

    if(P>=40){
        if (p>=33 && c>=33 && m>=33)
        {
            printf("Congratulations You've been passed\n");
        }
        else{
            printf("You are failed due to subject passing criteria\n");
        }
    }
    else{
        printf("You are fail\n");
    }

    printf("And your percentage is %.2f",P);



return 0;
}