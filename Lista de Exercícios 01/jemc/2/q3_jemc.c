#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    int maior_ab = (A + B + abs(A - B)) / 2;
    int maior = (maior_ab + C + abs(maior_ab - C)) / 2;
    
    printf("%d eh o maior\n", maior);

    return 0;
}