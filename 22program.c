#include <stdio.h>
int main (){
    int a;
    char b;
    int post = 0;
    int nega =0 ;
    int zero =0;
    do{
        printf("Enter the number :");
        scanf("%d",&a);
    if(a>0){
        post++;  
    }
    else if(a==0){
        zero++;
    }
    else {
        nega++;
        
    }
    printf("Do you want to enter more number type y or n ?");
    scanf(" %c",&b);  
    }while( b =='y'|| b == 'Y');

    printf("the number of postive number are -> %d\n",post);
    printf("the number of negative  number are -> %d\n",nega);
    printf("the number of zero  number are -> %d\n",zero);
    return 0;

}