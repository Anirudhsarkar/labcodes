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
    int positive , negative,odd , even ;
    positive =0;
    negative = 0;
    odd = 0;
     even = 0;
    for(int i = 0;i<x;i++ ){
        if(arr[i]>0){
            positive++;
        }
        else {
            negative++;

        }
    }
    for(int i = 0;i<x;i++ ){
        if(arr[x]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("postive count is : %d \n",positive);
    printf("negative count is : %d \n ",negative);
    printf("even  count is : %d \n",even);
    printf("odd count is : %d \n",odd);
    return 0 ; 




}