#include <stdio.h>
int circle(int a){
    int area ;
    area = 3.14*a*a;
    printf("Area of circle %d\n",area);

}
int triangle(int b,int c){
    int area;
    area=0.5*(b*c);
    printf("Area of triangle %d\n",area);

}
int rectangle(int d,int e){
    int area;
    area = d*e;
    printf("Area of rectangle %d\n",area);
}
int main (){
    int a,b,c,d,e;
    printf("Radius of circle ");
    scanf("%d",&a);
    printf("Base and height of a triangle:");
    scanf("%d %d",&b,&c);
    printf("Length and breadth of rectangle ");
    scanf("%d %d",&d,&e);
    circle(a);
    triangle(b,c);
    rectangle(d,c);
    return 0;


}