#include <stdio.h>
void oddeven(int a ){
    if(a%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
int main (){
    int i;
    printf("Enter the 1st number: ");
    scanf("%d",&i);
    oddeven(i);
    return 0;
}