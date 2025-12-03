#include <stdio.h>


int FACT(int n) {
    if (n == 0)
        return 1;          
    else
        return n * FACT(n - 1);   
}


int FACT_NR(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;

   
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("\nInvalid! r cannot be greater than n.\n");
        return 0;
    }

   
    int factn = FACT(n);
    int factr = FACT(r);
    int factnr = FACT(n - r);

    int nCr = factn / (factr * factnr);

    
    int factnr = FACT_NR(n);
    int factrnr = FACT_NR(r);
    int factnrnr = FACT_NR(n - r);

    int nCrnon = factnr / (factrnr * factnrnr);

    
    printf("\n========================================\n");
    printf("         BINOMIAL COEFFICIENT (nCr)\n");
    printf("========================================\n");
    printf("   n     r     nCr (Recursive)   nCr (Loop)\n");
    printf("----------------------------------------\n");
    printf("  %3d   %3d        %6d          %6d\n", n, r, nCr, nCrnon);
    printf("========================================\n");

    return 0;
}
