#include <stdio.h>
int prime(int a){
    if(a<=1){
        return 0;
    }
    for(int l=2;l<=a/2;l++){
        if(a%l==0){
            return 0 ;
        }

    }
    return 1;
}

int main (){
    int i;
    printf("enter the number:");
    scanf("%d",&i);
    if(prime(i)){
        printf("the number is prime");

    }
    else {
        printf("the number is not prime ");
    }
    return 0;
}