#include <stdio.h>
#include <string.h>

int main(){

    int numeros[3][3];
    int i,j;
    int soma = 0;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", numeros[i][j]);

            if (numeros[i] == numeros[j])
            {
                soma += numeros[i][j];
            }
            
        }
        printf("\n");
    }

    printf("Soma da diagonal principal e:%d\n",soma);

    return 0;
}