#include <stdio.h>
#include <string.h>

int main(){

    int numeros[2][3];
    int i,j;
    int contador = 0;


    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", numeros[i][j]);

            if (numeros[i][j] > 5 )
            {
               contador++;
            }
            
        }
        printf("\n");
    }

    printf(" Quantidade de elementos maiores que cinco e:%d\n",contador);

    return 0;

}