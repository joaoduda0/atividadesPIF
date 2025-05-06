#include <stdio.h>

int main() {
    double valor;
    scanf("%lf", &valor);
    
    int total = (int)(valor * 100 + 0.5);
    int nt_100 = total / 10000;
    total = total % 10000;

    int nt_50 = total / 5000;
    total = total % 5000;

    int nt_20 = total / 2000;
    total = total % 2000;

    int nt_10 = total / 1000;
    total = total % 1000;

    int nt_5 = total / 500;
    total = total % 500;

    int nt_2 = total / 200;
    total = total % 200;

    int m_1 = total / 100;
    total = total % 100;

    int m_50 = total / 50;
    total = total % 50;

    int m_25 = total / 25;
    total = total % 25;

    int m_10 = total / 10;
    total = total % 10;

    int m_5 = total / 5;
    total = total % 5;

    int m_01 = total;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nt_100);
    printf("%d nota(s) de R$ 50.00\n", nt_50);
    printf("%d nota(s) de R$ 20.00\n", nt_20);
    printf("%d nota(s) de R$ 10.00\n", nt_10);
    printf("%d nota(s) de R$ 5.00\n", nt_5);
    printf("%d nota(s) de R$ 2.00\n", nt_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m_1);
    printf("%d moeda(s) de R$ 0.50\n", m_50);
    printf("%d moeda(s) de R$ 0.25\n", m_25);
    printf("%d moeda(s) de R$ 0.10\n", m_10);
    printf("%d moeda(s) de R$ 0.05\n", m_5);
    printf("%d moeda(s) de R$ 0.01\n", m_01);

    return 0;
}