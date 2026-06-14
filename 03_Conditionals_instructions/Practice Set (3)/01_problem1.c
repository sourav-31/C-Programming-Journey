#include <stdio.h>
int main(){
    int a = 10;
    if (a = 11)
    {
      printf("I am 11\n");  /* code */
    }
    else{
        printf("I am not 11");
    }
    /*  Basically it should print 9th line but because we are not using == inside the if condition therefore 
        it considers the condition as non zero value and posses the condition true, so that it executes the 6th
        line instead of 9th.*/
return 0;
}
