#include <stdio.h>
#include <string.h>

float nota1, nota2, nota3, media, frequencia;
int main()
{

    printf("Digite a primeira nota : \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota nota : \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota : \n");
    scanf("%f", &nota3);

    while (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0 || nota3 > 10 || nota3 < 0)
    {
        printf("Valor Invalido\n");
        printf("Digite Novamente:  \n");

        printf("Digite a primeira nota : \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota nota : \n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota : \n");
        scanf("%f", &nota3);
    }

    printf("Digite uma frequencia : \n");
    scanf("%f", &frequencia);

    while (frequencia < 0 || frequencia > 100)
    {
        printf("Valor Invalido\n");
        printf("Digite Novamente:  \n");
        printf("Digite uma frequencia : \n");
        scanf("%f", &frequencia);
    }

    media = (nota1 + nota2 + nota3) / 3;

    if (media <= 10.0 && media >= 9.0)
    {
        printf("Voce ficou com media A\n");
        printf("Sua media e :%.2f\n", media);
        printf("Sua frequencia e :%.2f %% \n ", frequencia);
    }
    else
    {

        if (media < 9.0 && media >= 7.0)
        {
            printf("Voce ficou com media B\n");
            printf("Sua media e :%.2f\n", media);
            printf("Sua frequencia e :%.2f %% \n ", frequencia);
        }
        else
        {
            if (media < 7.0 && media >= 5.0)
            {
                printf("Voce ficou com media C\n");
                printf("Sua media e :%.2f\n", media);
                printf("Sua frequencia e :%.2f %% \n ", frequencia);
            }
            else
            {

                if (media < 5.0)
                {
                    printf("Voce ficou com media D\n");
                    printf("Sua media e :%.2f\n", media);
                    printf("Sua frequencia e :%.2f %% \n ", frequencia);
                }
            }
        }
        if (media >= 5.0 && frequencia >= 75)
        {
            printf("Aprovado\n");

        }else
        {
            if (media < 5.0)
            {
                printf("Reprovado por nota\n");
            }else{
                if (frequencia < 75)
                {
                    printf("Reprovado por frequencia\n");
                }else{
                    if (media < 5.0 && frequencia < 75)
                    {
                        printf("Reprovado por media e frequencia\n");
                    }
                    
                }
                
            }
            
        }
        
        
    }

    return 0;
}
