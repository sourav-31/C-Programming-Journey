/*Write a program to check whether a given number is prime or not using loops.*/

 #include <stdio.h>
 int main(){
    int n;
    int prime = 0;
    printf("Enter number: ");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            prime++;
        }
        
    }

    if (prime<2)
    {
        printf("Yes, %d is a Prime number\n",n);
    }
    else
    {
        printf("No, %d is not a Prime number",n);
    }
    
    
 return 0;
 }

//over