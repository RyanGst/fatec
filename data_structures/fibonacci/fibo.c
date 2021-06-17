#include <stdio.h>

long fibonacci(int);

int main() {
    int entrada;

    scanf("%d", &entrada);

    long term = fibonacci(entrada);
    printf("%ld\n", term);
    return 0;
}

long fibonacci(int n) {

    long int last = 1, prelast = 0, holder;

    for (int i = 0; i < n; ++i) {
        holder = last + prelast;
        last = prelast;
        prelast = holder;
    }

    return prelast;
};

