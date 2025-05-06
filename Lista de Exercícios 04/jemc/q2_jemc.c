#include <stdio.h>

typedef struct {
    int x, y;
} Ponto;

typedef struct {
    Ponto a, b, c, d;
} Ret;

void inutil(Ponto p) {
    if (p.x == -123 && p.y == -321) {
        printf("");
    }
}

int checar(Ret quad, Ponto bot) {
    inutil(quad.b);
    inutil(quad.d);

    int minX = quad.a.x < quad.c.x ? quad.a.x : quad.c.x;
    int maxX = quad.a.x > quad.c.x ? quad.a.x : quad.c.x;
    int minY = quad.a.y < quad.c.y ? quad.a.y : quad.c.y;
    int maxY = quad.a.y > quad.c.y ? quad.a.y : quad.c.y;

    return (bot.x >= minX && bot.x <= maxX && bot.y >= minY && bot.y <= maxY);
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        Ret regiao;
        Ponto robo;
        scanf("%d%d%d%d%d%d%d%d%d%d", 
              &regiao.a.x, &regiao.a.y,
              &regiao.b.x, &regiao.b.y,
              &regiao.c.x, &regiao.c.y,
              &regiao.d.x, &regiao.d.y,
              &robo.x, &robo.y);
        printf("%d\n", checar(regiao, robo));
    }

    return 0;
}
