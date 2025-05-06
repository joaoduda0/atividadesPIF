#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int menor = A;
        if (B < menor) menor = B;
        if (C < menor) menor = C;
    
    int maior = A;
        if (B > maior) maior = B;
        if (C > maior) maior = C;
    
    int meio = A + B + C - menor - maior;
    
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", A, B, C);
    
    return 0;
}