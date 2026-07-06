#include <stdio.h>
int main(){
    int a;
    printf("Enter a\n");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("You enetered case 1\n");
            break;
        case 2:
            printf("You enetered case 2\n");
            break;
        case 3:
            printf("You enetered case 3\n");
            break;
        case 4:
            printf("You enetered case 4\n");
            break;
        default:
            printf("Nothing matched");

    }
    // switch a will executed every case written after the case which matches with a
    // if a = 1 then every statement written after case 1 will execute
    // if a = 4 then every statement written after case 4 will execute
    // default is the case which executes when nothing is matched 

    // using break; will end the following cases if any one of the case is matched.

return 0;
}

//over