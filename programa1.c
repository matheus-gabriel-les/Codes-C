
#include <stdio.h>

int main(){
    char nome[100],curso[100];
    int idade,ano_nascimento;

    printf("=== PROGRAMA DE APRESENTACAO ===\n");

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome) , stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %99[^\n]",curso);

    ano_nascimento = 2025 - idade ;
    

   printf("Ola %s ", nome);
   printf("voce nasceu em %d", ano_nascimento);
   
 

    return 0;
}




