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
    int a ;
    int max = arr[0];
    for(int i =0;i<x;i++){
       if(arr[i]>max){
        max = arr[i];
        a = i;

       }

    }
    
    arr[a]=0;

    int second = arr[0];
    for(int i =0;i<x;i++){
       if(arr[i]>second){
        second = arr[i];
        

       }

    }
    printf("%d",second);
    return 0;

    

    
}
