#include <stdio.h>
void function(){
    static int i =0;
    int b = 0 ;
    i++;
    b++;
    printf("static int %d",i);
    printf(" int %d",i);

}
int main (){
    printf("first time call %d",function );
    printf("second  time call %d",function );
    printf("third time call %d",function );
    return 0;



}
