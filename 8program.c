#include <stdio.h>
//bitwise operator 
int main (){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the Second number:");
    scanf("%d",&b);
    if(a^b){
        printf("Numbers are not same ");

    }
    else {
        printf("Numbers are same ");
    }
    return 0;


}