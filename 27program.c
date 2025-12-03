#include <stdio.h>


int main() {
    int n, a, b, c, d;
    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Ramanujan numbers up to %d are:\n", n);

    for (a = 1; a * a * a < n; a++) {
        for (b = a + 1; b * b * b < n; b++) {
            for (c = a + 1; c * c * c < n; c++) {
                for (d = c + 1; d * d * d < n; d++) {
                    if (a*a*a + b*b*b == c*c*c + d*d*d && a*a*a + b*b*b <= n) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", 
                               a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
