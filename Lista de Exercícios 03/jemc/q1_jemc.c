#include <stdio.h>

int main() {
    int N[20];
    int i;

    for(i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    for(i = 0; i < 10; i++) {
        int tempo = N[i];
        N[i] = N[19 - i];
        N[19 - i] = tempo;
    }

    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
