#include <stdio.h>
//4thcocde
int main (){
    int x1,x2,y2,y1,x3,y3,area;

    printf("enter x1 :");
    scanf("%d",&x1);
    printf("enter y1:");
    scanf("%d",&y1);
    printf("enter x2 :");
    scanf("%d",&x2);
    printf("enter y2:");
    scanf("%d",&y2);
    printf("enter x3 :");
    scanf("%d",&x3);
    printf("enter y3:");
    scanf("%d",&y3);
    area = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
    if (area == 0 ){
        printf("three are colinear ");
    }
    else {
        printf("three are not colinear ");
    }
    return 0;




}