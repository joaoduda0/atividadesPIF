#include <stdio.h>

typedef struct {
    int lado;
    int total;
} Tabela;

int calcular(Tabela *g) {
    int i;
    g->total = 0;
    for (i = 1; i <= g->lado; i++) {
        g->total += i * i;
    }
    return g->total;
}

int main() {
    Tabela grade;
    while (1) {
        scanf("%d", &grade.lado);
        if (grade.lado == 0) break;
        printf("%d\n", calcular(&grade));
    }
    return 0;
}
