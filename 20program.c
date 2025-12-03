#include <stdio.h>
int main (){
    int a,b;
    int result;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    result = 1;
    for(int i = 1;i<=b;i++){
        result = result*a;
    }
    printf(":%d",result);
    return 0 ; 
    
}
