#include <stdio.h>
void sum(int a,int b ){
    int sum;
    sum = a+b;
    printf("Addition of a and b = %d",sum);
}
int main(){
    int i;
    int j;
    printf("Enter the 1number:");
    scanf("%d",&i);
    printf("Enter the 2number:");
    scanf("%d",&j);

    sum(i,j);
    return 0;


}
