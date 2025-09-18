#include <stdio.h>
//logical operators
int main(){
    int a;

    printf("Enter no between 1 to 100 :");
    scanf("%d",&a);
    if((100>a)&& !(a<50)){
        printf("the number is between 100 and 50 %d ",a);

    }
    else if(a>40 && a<50){
        printf("the number is between 50 and 40 %d ",a);

    }
    else if(a>1 || a<40) {
        printf("the numbern is betweenn 40 and 1 mostly");

    }
    return 0;
   
}

