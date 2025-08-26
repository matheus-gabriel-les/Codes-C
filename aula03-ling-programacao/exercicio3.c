#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    int numeros[2][2];
    int i, j;
    int maiorValor;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    maiorValor = numeros[0][0];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", numeros[i][j]);
            if (numeros[i][j] > maiorValor)
            {
                 maiorValor = numeros[i][j];
            }
            
        }
        printf("\n");
    }

    printf("Maior valor da matriz: %d ", maiorValor);
    return 0;
}
