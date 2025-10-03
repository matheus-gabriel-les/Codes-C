#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void exibir_array(int *numeros, int tamanho) {
    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void preencher_array(int *numeros, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
}

void encontrar_maior_menor(int *numeros, int tamanho, int *maior, int *menor) {
    *maior = numeros[0];
    *menor = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > *maior) {
            *maior = numeros[i];
        }
        if (numeros[i] < *menor) {
            *menor = numeros[i];
        }
    }
}

void calcular_media(int *numeros, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    float media = (float)soma / tamanho;
    printf("A média dos números é: %.2f\n", media);
}


int main() {
    int numeros[10];
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int maior, menor;

    preencher_array(numeros, tamanho);

    printf("\nAntes de ordenar:\n");
    exibir_array(numeros, tamanho);

    qsort(numeros, tamanho, sizeof(int), comparar);

    printf("\nDepois de ordenar:\n");
    exibir_array(numeros, tamanho);

    encontrar_maior_menor(numeros, tamanho, &maior, &menor);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    calcular_media(numeros, tamanho);

    return 0;
}
