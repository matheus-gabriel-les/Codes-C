
#include <stdio.h>
#include <string.h>

int main()
{

    int ganhou_fase, item_especial, vida, bonus_tempo, pontuacao_inicial, penalidade, bonus_final;
    char texto[5];

    printf("Digite a pontuação inicial");
    scanf("%d", &pontuacao_inicial);
    getchar();

    if (pontuacao_inicial < 0)
    {
        while (pontuacao_inicial < 0)
        {
            printf(" Valor Invalido !\n");
            printf("Digite outro valor: ");
            scanf("%d", &pontuacao_inicial);
            getchar();
        }
    }
    else
    {

    printf("Parabéns, você passou uma fase!\n");
    ganhou_fase = 50;
    pontuacao_inicial += ganhou_fase;// pontução recebe pontuação  ganhou fase

    printf("Pressione Enter para continuar...");
    getchar(); 

    printf("Você achou um item especial!\n");
    item_especial = 2;
    pontuacao_inicial *= item_especial;// pontução e multiplicado por item

    printf("Pressione Enter para continuar...");
    getchar();

    printf("Você sofreu um dano!\n");
    vida = 50;
    pontuacao_inicial -= vida;// pontução e subtraido por vida 

    printf("Pressione Enter para continuar...");
    getchar();

    printf("Você finalizou essa fase muito rápido!\n");
    bonus_tempo = 15;
    pontuacao_inicial += bonus_tempo;// pontução recebe bonus tempo

    printf("Pressione Enter para continuar...");
    getchar();

    printf("Essa fase foi muito difícil!\n");
    penalidade = 3;
    pontuacao_inicial /= penalidade;// pontução e dividido por penalidade
    printf("Pressione Enter para continuar...");
    getchar();

    printf("Você zerou o jogo, parabéns!\n");
    bonus_final = 100;
    pontuacao_inicial += bonus_final;// pontução e dividido por bonus final

    printf("Pressione Enter para ver sua pontuação final...");
    getchar();

    printf("Essa foi sua pontuação: %d\n", pontuacao_inicial);
    }
}