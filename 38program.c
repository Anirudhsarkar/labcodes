#include <stdio.h>
void factorial(int a){
    int fact =1 ;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    printf("the factorial is %d",fact);

}
int main(){
    int b;
    printf("enter the number :");
    scanf("%d",&b);
    factorial(b);
    return 0;
}