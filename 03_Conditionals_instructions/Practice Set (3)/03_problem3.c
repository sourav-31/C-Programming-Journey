/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
             Income Slab Tax
            2.5 – 5.0L 5%
             5.0L - 10.0L 20%
             Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user*/


#include <stdio.h>
int main(){
    int I;
    float T;
    printf("Enter your annual income :\n");
    scanf("%d",&I);

    if(I>=250000 && I<=499999){
        T = (5.0/100)*I;
        printf("Your Income tax is %.2f",T);
    }
    else if (I>=500000 && I<=999999){
        T = (20.0/100)*I;
        printf("Your Income tax is %.2f",T);
    }
    else if (I>=1000000){
        T = (30.0/100)*I;
        printf("Your Income tax is %.2f",T);
    }
    else{
        printf("Your income tax is zero");
    }
    

return 0;
}
/*
    Integer divided by integer gives 0 in C
    Therefore we use 5.0/100 
*/