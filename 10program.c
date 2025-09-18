#include <stdio.h>
//3rdcode
int main (){
    int a1,a2,b1,b2,c1,c2,a3,b3,c3,max, rec;
    printf("enter l of first rectangle:");
    scanf("%d",&a1);
    printf("enter b of first rectangle:");
    scanf("%d",&a2);
    printf("enter l of second rectangle:");
    scanf("%d",&b1);
    printf("enter b of second rectangle:");
    scanf("%d",&b2 );
    printf("enter l of third rectangle:");
    scanf("%d",&c1);
    printf("enter b of third rectangle:");
    scanf("%d",&c2);
    a3 = 2*(a1+a2);
    b3 = 2*(b1+b2);
    c3 = 2*(c1+c2);
    max = (a3>b3)? ((a3>c3) ? a3 : c3) : ((b3>c3)? b2:c3);
    rec = (max == a3) ? 1: (max == b3 ? 2:3);
    printf("Reactangle %d has the highest perimeter %d\n" , rec , max );
    return 0;

}
