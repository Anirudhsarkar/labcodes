#include <stdio.h>
void square(int i){
    int sq;
    sq= i*i;
    printf("squre of that number %d",sq);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    square(a);
    return 0;
    

}