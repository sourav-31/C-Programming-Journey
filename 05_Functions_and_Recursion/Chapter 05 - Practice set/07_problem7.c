//Write a program using function to print the following pattern (first n lines)

#include <stdio.h>

char star(int);
char star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
int main(){
    int n;
    printf("Enter no. of lines\n");
    scanf("%d",&n);
    printf("%c",star(n));

return 0;
}