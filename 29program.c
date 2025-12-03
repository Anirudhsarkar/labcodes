#include <stdio.h>
int global = 200;
void mainfunc(){
    int intel =50;
    printf("the global variable: %d",global);
    printf("the local variable: %d",intel);
}
int main (){
    mainfunc();
    //printf("%d",intel); it will shoe. error
    
    return 0 ; 
}