#include <stdio.h>

float harmonic(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%0.8f", harmonic(n));
    return 0;
}

float harmonic(int n) {
    float i, result = 0.0;

    for (i = 1; i <= n; i++)
        result += 1/i;

    return result;
}