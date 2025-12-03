#include <stdio.h>
void max(int a , int b ){
    if(a>b){
        printf("the bigger 1st number is %d",a);
    }
    else{
        printf("the bigger 2nd number  is %d ",b);
    }

}
int main (){
    int i;
    int j;
    printf("Enter the 1number:");
    scanf("%d",&i);
    printf("Enter the 2number:");
    scanf("%d",&j);
    max(i,j);
    return 0 ; 
}