#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void polinomio(int n, double terms[], int x);

int main() {
    int degree, x;

    scanf("%d %d", &degree, &x);

    if(degree < 1 || degree > 100) {
        exit(1);
    }

    double vector[degree + 1];

    for (int i = 0; i < degree + 1; i++) {
        scanf("%lf", &vector[i]);
    }

    polinomio(degree, vector, x);

    return 0;
}

void polinomio(int n, double *terms, int x) {
    int aux = n;
    double sum;

    for (int i = 0; i < n + 1; ++i) {
        sum = sum + terms[i] * pow(x, aux);
        aux--;
    }

    printf("%.2lf\n", sum);
}