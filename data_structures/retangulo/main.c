#include <stdio.h>
void dentro_ret(const int *pontos);

int main() {
    int pontos[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &pontos[i]);
    }
    dentro_ret(pontos);
    return 0;
}
void dentro_ret(const int *pontos) {
    if ((pontos[0] <= pontos[4]) && (pontos[4] <= pontos[2]) && (pontos[1] <= pontos[5]) && (pontos[5] <= pontos[3]))
        printf("INTERNO\n");
    else
        printf("EXTERNO\n");
}
