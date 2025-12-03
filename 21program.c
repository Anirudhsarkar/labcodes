#include <stdio.h>
int main (){
    int a,prime;
    printf("enter a : ");
    scanf("%d",&a);
    if( a<= 1){
        printf("not prime");  
    }
    else{
        for(int i =2;i<a ; i++){
            if(a%i==0){
                prime = 0 ;
                break; 
            }
            
        }
        if(prime){
            printf("prime");  

        }
        else{
            printf("not prime");
        }
    }
    return 0;
}