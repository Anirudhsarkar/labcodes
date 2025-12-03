#include <stdio.h>
int main(){
    int x;
    printf("Enter the space");
    scanf("%d",&x);
    int arr[x]; 
    for(int i =0;i<x;i++){
        printf("Enter the number %d  :  ",i);
        scanf("%d",&arr[i]);
    }
    int m ;
    int count = 0;
    printf("Enter the no for frequency");
    scanf("%d",&m);
    for(int i =0;i<x;i++){
        if(arr[i]==m){
            count++;

        }
    }
    printf("the frequency is : %d ",count);
    return 0;
}
