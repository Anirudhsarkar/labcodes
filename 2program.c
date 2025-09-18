#include <stdio.h>
//relation operator
int main(){
   float  a,b;

    
    printf("enter 1st no:");
    scanf("%f",&a);
    printf("enter 2nd no:");
    scanf("%f",&b);
    if(a>b){
        printf("1st number is greater %f",a);

    }
    else if (a==b){
        printf("both are equal");
    }
    else  {
        printf("2nd number %f",b);

    }
    return 0;

    
    
}