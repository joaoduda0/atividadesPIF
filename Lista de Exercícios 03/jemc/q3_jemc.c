#include <stdio.h>

int main() {
    int testes, numero, i;
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &testes);

    for(i = 0; i < testes; i++) {
        scanf("%d", &numero);
        printf("Fib(%d) = %llu\n", numero, fib[numero]);
    }

    return 0;
}
