#include <stdio.h>
int count = 10 ;
void mainfunc(){
    printf("%d",count);
}
void seconfunc(){
    count = 20 ;
    printf("%d",count);
}
int main (){
    mainfunc();
    seconfunc();
    return 0;


    

}