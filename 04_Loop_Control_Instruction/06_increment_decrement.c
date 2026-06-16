#include <stdio.h>
int main(){
    int i = 5;
    i = i+5; // i = 10
    printf("The value of i is %d\n",i);
    i++; // i = 11
    printf("The value of i is %d\n",i);
    ++i; // i = 12
    printf("The value of i is %d\n",i);

    printf("The value of i is %d\n",++i); //13
    printf("The value of i is %d\n",i++); //13
/*
    ++i increments i first then prints i (Pre Increment Operator)
    i++ prints i first then increment i (Post Increment Operator)
*/
    printf("The value of i is %d\n",i); //14 because at last line we used i++ which printed i and then incremented which turns it to 14

    i +=5; // i = 19 (Same as i = i+5);

    printf("The value of i is %d\n",i);  // 19
    
    return 0;
}

/*
    same goes with decrement (i--/--i)
    
*/