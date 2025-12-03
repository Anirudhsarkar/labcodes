
#include <stdio.h>
int main (){
    int n ; 
    int sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0; n>0 ;i++){
        sum = sum + (n%10);
         n = n/10;
    }
    printf("%d", sum);
    return 0 ; 



}