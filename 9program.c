#include <stdio.h>
//1dt code
int main(){
    int a,b,c;
    printf("enter 1st side:");
    scanf("%d",&a);
    printf("enter 2nd side:");
    scanf("%d",&b);
    printf("enter 3rd side:");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("its a valid triangle\n");
        if(a==b && b==c && c==a){
            printf("its a equilateral traingle");
        }
        else if(a==b || b==c || b==a){
            printf("its a isosceles triangle ");

        }
        else if ((a*a+b*b)==c*c || (c*c+b*b)==a*a || (a*a+c*c)==b*b ){
            printf("its a right angle triangle");
        }
        else {
            printf("its a scalne triangle");
        }
    }else{
        printf("its not valid ");
    }
    return 0;

}
