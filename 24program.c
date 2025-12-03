#include <stdio.h>
int main (){
    int a,b;
    int sum=1; 
    for(int i =0 ; i<3;i++){
        for(int j=0;j<=i;j++){
            printf("%d",sum);
            sum++;
        }
        printf("\n");

    }
    return 0;
}