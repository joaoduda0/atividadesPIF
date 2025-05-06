#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);
    
    // Converte o valor para centavos e ajusta com arredondamento
    int total_cents = (int)(N * 100.0 + 0.5);
    
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = total_cents / notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtd, notas[i] / 100);
        total_cents %= notas[i];
    }
    
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = total_cents / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
        total_cents %= moedas[i];
    }
    
    return 0;
}