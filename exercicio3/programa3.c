
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar_caracteres(char *str) {
	printf("A string possui %lu caracteres.\n", strlen(str));
}

void inverter_string(char *str) {
	int len = strlen(str);
	char invertida[256];
	for (int i = 0; i < len; i++) {
		invertida[i] = str[len - 1 - i];
	}
	invertida[len] = '\0';
	printf("String invertida: %s\n", invertida);
}

void converter_maiuscula(char *str) {
	char maiuscula[256];
	for (int i = 0; str[i] != '\0'; i++) {
		maiuscula[i] = toupper(str[i]);
	}
	maiuscula[strlen(str)] = '\0';
	printf("Maiuscula: %s\n", maiuscula);
}

void converter_minuscula(char *str) {
	char minuscula[256];
	for (int i = 0; str[i] != '\0'; i++) {
		minuscula[i] = tolower(str[i]);
	}
	minuscula[strlen(str)] = '\0';
	printf("Minuscula: %s\n", minuscula);
}

int contar_palavras(char *str) {
	int count = 0, in_word = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (!isspace(str[i]) && in_word == 0) {
			in_word = 1;
			count++;
		} else if (isspace(str[i])) {
			in_word = 0;
		}
	}
	return count;
}

void menu_string() {
	int opcao;
	char str[256];

	printf("=== MANIPULADOR DE STRINGS ===\n");
	printf("Digite a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; 

	do {
		printf("\n1. Contar caracteres\n2. Inverter string\n3. Converter maiuscula\n4. Converter minuscula\n5. Contar palavras\n0. Sair\nOpcao: ");
		scanf("%d", &opcao);
		getchar(); 
		switch (opcao) {
			case 1:
				contar_caracteres(str);
				break;
			case 2:
				inverter_string(str);
				break;
			case 3:
				converter_maiuscula(str);
				break;
			case 4:
				converter_minuscula(str);
				break;
			case 5:
				printf("A string possui %d palavras.\n", contar_palavras(str));
				break;
			case 0:
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao invalida. Tente novamente.\n");
		}
	} while (opcao != 0);
}

int main() {
	menu_string();
	return 0;
}