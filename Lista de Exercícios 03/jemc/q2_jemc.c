#include <stdio.h>

int main() {
    char operacao;
    float M[12][12];
    float soma = 0.0;
    int count = 0;
    int i, j;

    scanf("%c", &operacao);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            if(j > i) {
                soma = soma + M[i][j];
                count = count + 1;
            }
        }
    }

    if(operacao == 'S') {
        printf("%.1f\n", soma);
    }

    if(operacao == 'M') {
        printf("%.1f\n", soma / count);
    }

    return 0;
}
