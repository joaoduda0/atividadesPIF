#include <stdio.h>

#define PI 3.14159

struct DadosDoCirculo {
    double r;
    double resultado;
};

void calcula(struct DadosDoCirculo *info) {
    info->resultado = PI * (info->r * info->r);
}

int main() {
    struct DadosDoCirculo circulo;
    scanf("%lf", &circulo.r);
    calcula(&circulo);
    printf("A=%.4lf\n", circulo.resultado);

    return 0;
}
