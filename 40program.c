#include <stdio.h>
int sumofdi(int a ){
    int a;
    int sum =0;
    for(int i=0;a>0;i++){
        sum = sum+(a%10);
        a = a/10;
    }
   printf("sum is %d",sum);

}
int main (){
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    sumofdi(i);
    return 0;
}