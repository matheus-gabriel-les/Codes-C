#include <stdio.h>
#include <string.h>
#include <math.h>

float subtrair_numeros(float *valor1, float *valor2)
{
    return *valor1 - *valor2;
}

float somar_numeros(float *valor1, float *valor2)
{
    return *valor1 + *valor2;
}

float dividir_numeros(float *valor1, float *valor2)
{
    if (valor2 = 0)
    {
        printf("Operacao invalida");
    }
    else
    {
        return *valor1 / *valor2;
    }
}

float multiplicar_numeros(float *valor1, float *valor2)
{
    return *valor1 * *valor2;
}

void mostrar_resultado(float resultado){
   
   printf("O resultado da operacao:  ",resultado);
}
void mostrar_variaveis()
{
    int operacao;
    float valor1, valor2, resultado;

    printf("\n=== CALCULADORA ===\n");
    printf("Escolha uma operacao(1-soma,2-subtracao,3-divisao,4-multiplicacao,0-sair) : ");
    scanf("%d", &operacao);

    do
    {
        printf("Digite o primeiro numero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo numero: ");
        scanf("%f", &valor2);

        switch (operacao)
        {
        case 1:
            resultado = somar_numeros(&valor1, &valor2);
            mostrar_resultado(resultado);
            break;

        case 2:

            resultado = subtrair_numeros(&valor1, &valor2);
            mostrar_resultado(resultado);
            break;
        case 3:

            resultado = dividir_numeros(&valor1, &valor2);
            mostrar_resultado(resultado);
            break;
        case 4:
            resultado = multiplicar_numeros(&valor1, &valor2);
            mostrar_resultado(resultado);
            break;
        case 0:
             break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }

    } while (operacao != 0);
}

int main()
{
    printf("Pressione Enter para exibir o menu...");
    getchar();
    mostrar_variaveis();

    return 0;
}
