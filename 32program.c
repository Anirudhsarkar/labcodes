#include <stdio.h>
void nameof(char n[],char m[]){
    printf("University:%s\n",n);
    printf("Name :%s",m);


}
int main(){
    char name[50];
    char uniname[50];

    gets(name);
    gets(uniname);
    nameof(uniname,name);
    return 0;


}