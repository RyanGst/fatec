#include <stdio.h>
#include <stdlib.h>

float media(int *v, int N);

float variancia(int *v, float med, int N);

int main(void) {
    int i, n;
    int *v;
    float med, var;

    scanf("%d", &n);
    /* aloca dinca */
    v = (int *) malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Memoria insuficiente.\n");
        return 1;
    }
    /* leitura dos valores */
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    med = media(v, n);
    var = variancia(v, med, n);
    printf("Media = %f Variancia = %f \n", med, var);
    /* libera mem */
    free(v);
    return 0;
}

//float* prod_vetorial(float *u, float *v){
//    float *p = (float*)malloc(3*sizeof(float));
//
//    p[0] = u[1]*v[2] - v[1]*u[2];
//    p[1] = u[2]*v[0] - v[2]*u[0];
//    p[2] = u[0]*v[1] - v[0]*u[1];
//
//    return p;
//}

// calcula média entre os valores de um vetor
float media(int *v, int N) {
    int i;
    float soma = 0;
    for (i = 0; i < N; i++) {
        soma += *(v + i);
        //soma+=v[i];
    }
    return (soma / N);
}

// calcula variancia entre os valores de um vetor
float variancia(int *v, float med, int N) {
    int i;
    float soma = 0.0;
    for (i = 0; i < N; i++) {
        soma += (v[i] - med) * (v[i] - med);
    }
    v[0] = 7;
    return (soma / N);
}

