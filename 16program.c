#include <stdio.h>
int main (){
    int a;
    int factorial =1; 
    printf("Enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        factorial = factorial*i;
    }
    printf("factorial is %d",factorial);
    return 0;
}