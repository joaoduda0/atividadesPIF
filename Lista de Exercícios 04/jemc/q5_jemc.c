#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ident;
    short alt;
} Pessoa;

int compara(const void *x, const void *y) {
    return ((Pessoa *)x)->alt - ((Pessoa *)y)->alt;
}

void processa(Pessoa *p, int tam) {
    qsort(p, tam, sizeof(Pessoa), compara);
    for (int i = 0; i < tam; i++) {
        if (i > 0) printf(" ");
        printf("%d", p[i].alt);
    }
    printf("\n");
}

int main() {
    int casos, qtd, i;
    scanf("%d", &casos);
    while (casos--) {
        scanf("%d", &qtd);
        Pessoa *grupo = malloc(qtd * sizeof(Pessoa));
        if (grupo == NULL) return 1;

        for (i = 0; i < qtd; i++) {
            grupo[i].ident = i;
            scanf("%hd", &grupo[i].alt);
        }

        processa(grupo, qtd);
        free(grupo);
    }
    return 0;
}
