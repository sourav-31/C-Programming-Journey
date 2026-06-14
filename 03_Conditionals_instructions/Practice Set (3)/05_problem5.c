/*Write a program to determine whether a character entered by the user is
lowercase or not.*/

// ASCII Table lowercase (97 to 122)

#include <stdio.h>
int main(){
    char ch;
    printf("Enter character :\n");
    scanf("%c",&ch);

    printf("The value of character %c is %d\n",ch,ch);
    if (ch>=97 && ch<=122)
    {
        printf("The character is lowercase\n");
    }
    else{
        printf("The character is not lowercase");
    }
    
    
return 0;
}