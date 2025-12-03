#include <stdio.h>
int main(){
    int a = 34;
    int *ptr1 =&a;
    float  b = 8.9;
    float *ptr2 = &b;
    char c = 'e';
    char *ptr3 = &c;
    printf("the value is %d\t  and  adress is %p \n",*ptr1,ptr1);
    printf("the value is %f\t  and  adress is %p \n",*ptr2,ptr2);
    printf("the value is %c\t  and  adress is %p \n",*ptr3,ptr3);
    return 0;

} 