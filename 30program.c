#include <stdio.h>
int main (){
    int a =30;
    printf("the vartiable outside the bracket %d\n",a);
    {
        int b =0;
        printf("the variable outside the bracket %d\n",a);
        printf("the variable inside the bracket %d\n ",b);

    }
    //printf("the variable inside the bracket",b); error it will show error 
    return 0 ; 
}