//
// Created by ryan on 21/04/2021.
//

#include <stdio.h>

#define X 100
#define Y 100

void printM(int numero_linhas, int r,  double[X][Y]);

void multiplyMat(int numero_linhas, int numero_colunas, int r, int x, double[X][Y], double[X][Y], double[X][Y], double);

int main() {
    int numero_linhas, numero_colunas, r, i, j, x;
    double matA[X][Y], matB[X][Y], matC[X][Y], aux;


    scanf("%d %d", &numero_linhas, &numero_colunas);

    for (i = 0; i < numero_linhas; i++)
        for (j = 0; j < numero_colunas; j++) {
            scanf("%lf", &matA[i][j]);
        }


    scanf("%d %d", &numero_colunas, &r);

    for (i = 0; i < numero_colunas; i++)
        for (j = 0; j < r; j++) {
            scanf("%lf", &matB[i][j]);
        }

    multiplyMat(numero_linhas, numero_colunas, r, x, matA, matB, matC, aux);


    return 0;
}
void printM(int numero_linhas, int r, double matC[X][Y]) {
    for (int i = 0; i < numero_linhas; i++) {
        for (int j = 0; j < r; j++) {
            printf("%1.lf\t", matC[i][j]);
        }
        printf("\n");
    }
}

void multiplyMat(int numero_linhas, int numero_colunas, int r, int x, double matA[X][Y], double matB[X][Y], double matC[X][Y], double aux) {
    for (int i = 0; i < numero_linhas; i++) {
        for (int j = 0; j < r; j++) {

            matC[i][j] = 0;
            for (x = 0; x < numero_colunas; x++) {
                aux += matA[i][x] * matB[x][j];

                matC[i][j] = aux;
                aux = 0;
            }
        }
    }

    printM(numero_linhas, r, matC);

}