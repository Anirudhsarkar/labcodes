#include <stdio.h>
//2ndcode
int main (){
    float a,b,c;
    printf("enter weight :");
    scanf("%f",&a);
    printf("enter height:");
    scanf("%f",&b);
    c = a/(b*b);
    if(c<15){
        printf("Starvation");

    }
    else if (15.1<=c && 17.5>=c){
        printf("Anorexic");

    }
    else if (17.6<=c && 18.5>=c){
        printf("underweight");
    }
    else if (18.6<=c && 24.9>=c){
        printf("Ideal");
    }
    else if (25<=c && 25.9>=c){
        printf("Overweight");
    }
    else if (30<=c && 39.9>=c){
        printf("Obese ");
    }
    else {
        printf("Morbidity Obese");
    }
    return 0;


     
}