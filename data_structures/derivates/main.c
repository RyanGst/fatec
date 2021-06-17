#include <stdio.h>
#include <stdlib.h>

void derivate(int, double[]);

int main() {
    int degree;

    scanf("%d", &degree);

    if(degree < 1 || degree > 100) {
        exit(1);
    }

    double vector[degree + 1];

    for (int i = 0; i < degree + 1; i++) {
        scanf("%lf", &vector[i]);
    }

    derivate(degree, vector);

    return 0;
}

void derivate(int n, double terms[]) {
    int aux = n;
    int degree = n-1;
    for (int i = 0; i < n + 1; ++i) {
        if (degree == 0) {
            printf("%.0lf ", terms[i] * aux);
            break;
        }
        if (degree == 1)
            printf("%.0lfx+", terms[i] * aux);
        else
            printf("%.0lfx^%d+", terms[i] * aux, degree);

        aux--;
        degree--;
    }
}