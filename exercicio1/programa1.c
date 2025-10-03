#include <stdio.h>


float subtrair_numeros(float valor1, float valor2) {
    return valor1 - valor2;
}

float somar_numeros(float valor1, float valor2) {
    return valor1 + valor2;
}

float dividir_numeros(float valor1, float valor2) {
    if (valor2 == 0) {
        printf("Operacao invalida: divisao por zero.\n");
        return 0;  
    }
    return valor1 / valor2;
}

float multiplicar_numeros(float valor1, float valor2) {
    return valor1 * valor2;
}

void mostrar_resultado(float resultado) {
    printf("O resultado da operacao: %.2f\n", resultado);
}


void executar_calculadora() {
    int operacao;
    float valor1, valor2, resultado;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("Escolha uma operacao:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &operacao);

        if (operacao == 0) break;

        if (operacao < 1 || operacao > 4) {
            printf("Opcao invalida. Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo numero: ");
        scanf("%f", &valor2);

        switch (operacao) {
            case 1:
                resultado = somar_numeros(valor1, valor2);
                mostrar_resultado(resultado);
                break;
            case 2:
                resultado = subtrair_numeros(valor1, valor2);
                mostrar_resultado(resultado);
                break;
            case 3:
                if (valor2 != 0) {
                    resultado = dividir_numeros(valor1, valor2);
                    mostrar_resultado(resultado);
                }
                break;
            case 4:
                resultado = multiplicar_numeros(valor1, valor2);
                mostrar_resultado(resultado);
                break;
        }
    } while (1);
}

int main() {
    executar_calculadora();
    return 0;
}
