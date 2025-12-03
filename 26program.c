#include <stdio.h>
int main (){
    double population = 100000;
    for(int i =0 ; i<=10;i++){
        population = population+(population*0.1);
        printf(" %d the growth is %.0f\n",i,population);
    }
    
    return 0 ;

}