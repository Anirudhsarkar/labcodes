#include <stdio.h>

int FIBO(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int num, i;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);

    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}
