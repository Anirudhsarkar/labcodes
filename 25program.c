#include <stdio.h>
int main(){
    int a ;
    printf("Enter the rowss");
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        int value =1;

        for(int j=0;j<a-i-1;j++){
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");

    }
    return 0;

    
}