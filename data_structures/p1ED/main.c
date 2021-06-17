#include <stdio.h>
#include "math.h"

void leiaDisco();

void preencheComZeros(int[], int);

void registraDiscos(int[], int, int);

int *RemoveZeros(const int *, int, int *, int);

int main(void) {
    int n;
    scanf("%d", &n);

    if (n >= 1 || n <= 10) {
        for (size_t i = 0; i < n; i++) {
            leiaDisco();
        }
    }
}

void leiaDisco() {
    int tamanho_colecao, valor;

    scanf("%d", &tamanho_colecao);

    if (tamanho_colecao >= 1 && tamanho_colecao <= pow(10, 5)) {
        int colecao_discos[tamanho_colecao];

        preencheComZeros(colecao_discos, tamanho_colecao);

        for (size_t i = 0; i < tamanho_colecao; i++) {
            scanf("%d", &valor);
            if (valor >= 1 && valor <= pow(10, 9))
                registraDiscos(colecao_discos, valor, tamanho_colecao);
        }

        int copia_colecao[sizeof(colecao_discos) / sizeof(*colecao_discos)];

        int *colecao_limpa = RemoveZeros(colecao_discos, tamanho_colecao, copia_colecao, 0);

        int aux=0;
        for (int *first = copia_colecao; first != colecao_limpa; ++first) {
            aux++;
        }
        
        printf("%d ", aux);
        for (int *first = copia_colecao; first != colecao_limpa; ++first) {
            printf("%d ", *first);
        }

        printf("\n");
    }
}

void preencheComZeros(int vetor[], int n) {
    int i = 0;
    while (i < n) {
        vetor[i] = 0;
        i++;
    }
}

void registraDiscos(int vetor[], int valor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            vetor[i] = valor;
            break;

        } else {
            if (vetor[i] > valor) {
                vetor[i] = valor;
                break;
            }
        }
    }
}

int *RemoveZeros(const int *in, int n, int *out, int value) {
    for (size_t i = 0; i != n; i++) {
        if (in[i] != value) *out++ = in[i];
    }
    return out;
}