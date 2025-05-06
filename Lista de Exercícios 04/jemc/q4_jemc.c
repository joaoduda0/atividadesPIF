#include <stdio.h>

typedef struct {
    unsigned int id;
} Animal;

int verif(Animal a[], int n) {
    int i, j, cont = 0, achou;
    for (i = 0; i < n; i++) {
        achou = 0;
        for (j = 0; j < i; j++) {
            if (a[i].id == a[j].id) {
                achou = 1;
                break;
            }
        }
        if (!achou) cont++;
    }
    return cont;
}

int main() {
    int t, n, i;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        Animal lista[n];
        for (i = 0; i < n; i++) {
            scanf("%u", &lista[i].id);
        }
        printf("%d\n", verif(lista, n));
    }
    return 0;
}
