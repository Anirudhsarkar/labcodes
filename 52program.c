#include <stdio.h>
int main(){
    int a = 34;
    int *ptr1 =&a;
    float  b = 8.9;
    float *ptr2 = &b;
    char c = 'e';
    char *ptr3 = &c;
    printf("the orignal addresses of all this \n ");
    printf(" addresses is %u \n",ptr1);
    printf(" addresses is %u \n",ptr2);
    printf(" addresses is %u \n",ptr3);
    printf("\n");
    ptr1++;
    ptr2++;
    ptr3++;
 
    printf("the  addresses after increment \n");
    printf(" addresses is %u \n",ptr1);
    printf(" addresses is %u \n",ptr2);
    printf(" addresses is %u \n",ptr3);
    printf("\n");

    --ptr1;
    --ptr2;
    --ptr3;

    printf("the  addresses after decrement \n");
    printf(" addresses is %u \n",ptr1);
    printf(" addresses is %u \n",ptr2);
    printf(" addresses is %u \n",ptr3);
    printf("\n");

    printf("back to orignal addresses \n");




    return 0;

} 