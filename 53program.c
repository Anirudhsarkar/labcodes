#include <stdio.h>
void function(int *a, float *b){
    *a = *a + 5;
    *b = *b * 5;


}
int main (){
    int a = 5;
    float b = 2.5;
    printf(" the integer number %d  the float number is %f \n ",a,b);


    function(&a,&b);

    printf(" After the integer number %d  the float number is %f  ",a,b);
    return 0;

}