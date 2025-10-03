
#include <stdio.h>
#define ALUNOS 5
#define DISCIPLINAS 4

void inserir_notas(float notas[ALUNOS][DISCIPLINAS], char alunos[ALUNOS][30]) {
    for (int i = 0; i < ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i]);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("Digite a nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void exibir_notas(const float notas[ALUNOS][DISCIPLINAS], char alunos[ALUNOS][30]) {
    printf("\nAluno\tD1\tD2\tD3\tD4\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("%s\t", alunos[i]);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("%.1f\t", notas[i][j]);
        }
        printf("\n");
    }
}

float calcular_media_aluno(const float notas[ALUNOS][DISCIPLINAS], int aluno) {
    float soma = 0;
    for (int j = 0; j < DISCIPLINAS; j++) {
        soma += notas[aluno][j];
    }
    return soma / DISCIPLINAS;
}

float calcular_media_disciplina(const float notas[ALUNOS][DISCIPLINAS], int disciplina) {
    float soma = 0;
    for (int i = 0; i < ALUNOS; i++) {
        soma += notas[i][disciplina];
    }
    return soma / ALUNOS;
}

void exibir_aprovados_reprovados(const float notas[ALUNOS][DISCIPLINAS], char alunos[ALUNOS][30]) {
    printf("\nAluno\tMedia\tSituacao\n");
    for (int i = 0; i < ALUNOS; i++) {
        float media = calcular_media_aluno(notas, i);
        printf("%s\t%.1f\t", alunos[i], media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
}

void exibir_relatorio_final(const float notas[ALUNOS][DISCIPLINAS], char alunos[ALUNOS][30]) {
    printf("\n=== Relatorio Final ===\n");
    printf("Aluno\tD1\tD2\tD3\tD4\tMedia\tSituacao\n");
    for (int i = 0; i < ALUNOS; i++) {
        float media = calcular_media_aluno(notas, i);
        printf("%s\t", alunos[i]);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("%.1f\t", notas[i][j]);
        }
        printf("%.1f\t", media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
}

int main() {
    float notas[ALUNOS][DISCIPLINAS] = {0};
    char alunos[ALUNOS][30] = {0};
    int opcao;
    do {
        printf("\n=== SISTEMA DE GESTAO DE NOTAS ===\n");
        printf("1. Inserir notas\n2. Exibir notas\n3. Calcular media por aluno\n4. Calcular media por disciplina\n5. Exibir aprovados/reprovados\n6. Exibir relatorio final\n0. Sair\nOpcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                inserir_notas(notas, alunos);
                break;
            case 2:
                exibir_notas(notas, alunos);
                break;
            case 3: {
                int idx;
                printf("Digite o indice do aluno (0 a 4): ");
                scanf("%d", &idx);
                if (idx >= 0 && idx < ALUNOS) {
                    printf("Media de %s: %.2f\n", alunos[idx], calcular_media_aluno(notas, idx));
                } else {
                    printf("Indice invalido!\n");
                }
                break;
            }
            case 4: {
                int idx;
                printf("Digite o indice da disciplina (0 a 3): ");
                scanf("%d", &idx);
                if (idx >= 0 && idx < DISCIPLINAS) {
                    printf("Media da disciplina %d: %.2f\n", idx + 1, calcular_media_disciplina(notas, idx));
                } else {
                    printf("Indice invalido!\n");
                }
                break;
            }
            case 5:
                exibir_aprovados_reprovados(notas, alunos);
                break;
            case 6:
                exibir_relatorio_final(notas, alunos);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    return 0;