
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    double altura, peso, IMC;
    int idade;
    char sexo[10];
    bool obesidade,sobrepeso,abaixo_peso;

    printf("Digite um peso : \n");
    scanf("%lf", &peso);
    printf("Digite uma altura : \n");
    scanf("%lf", &altura);
    printf("Digite uma idade: \n");
    scanf("%d", &idade);
    printf("Digite um sexo: \n");
    scanf("%s", sexo);

    if (peso <= 0 && altura <= 0 && idade <= 0 && strcmp(sexo, "f") != 0 && strcasecmp(sexo, "m") != 0)

    {

        printf("Valor invalido\n");
        printf("Digite um peso : \n");
        scanf("%lf", &peso);
        printf("Digite uma altura : \n");
        scanf("%lf", &altura);
        printf("Digite uma idade: \n");
        scanf("%d", &idade);
        printf("Digite um sexo: \n");
        scanf("%s", sexo);

        while (peso <= 0 || altura <= 0 || idade <= 0 || strcmp(sexo, "f") != 0 && strcasecmp(sexo, "m") != 0 )

        {
            printf("Valor invalido\n");
            printf("Digite um peso : \n");
            scanf("%lf", &peso);
            printf("Digite uma altura : \n");
            scanf("%lf", &altura);
            printf("Digite uma idade: \n");
            scanf("%d", &idade);
        }
    }
    else
    {

        IMC = peso / pow(altura, 2);

        if (18.5 <= IMC && IMC < 25.0)
        {
            printf("Peso normal! \n");
            printf("Seu IMC e : %.2lf \n",IMC);
        }
        else
        {
            if (IMC < 18.5)
            {
                printf("Abaixo do peso ! \n");
                printf("Seu IMC e : %.2lf \n",IMC);
                abaixo_peso = true;
            }
            else
            {
                if (25.0 <= IMC && IMC < 30.0  )
                {
                    printf("Sobrepeso! \n");
                    printf("Seu IMC e : %.2lf \n",IMC);
                    sobrepeso = true;
                }
                else
                {
                    if (30.0 <= IMC && IMC < 35.0  )
                    {
                        printf("Obesidade I !  \n");
                        printf("Seu IMC e : %.2lf \n",IMC);
                        obesidade = true;
                    }
                    else
                    {
                        if (35.0 <= IMC && IMC < 40.0 )
                        {
                            printf("Obesidade II !  \n");
                            printf("Seu IMC e : %.2lf \n",IMC);
                            obesidade = true;
                        }
                        else
                        {
                            if (IMC >= 40.0)
                            {
                                printf("Obesidade III !  \n");
                                printf("Seu IMC e : %.2lf \n",IMC);
                                obesidade = true;
                            }
                        }
                    }
                }
            }
           
            if (strcmp(sexo, "m") == 0 && obesidade || sobrepeso == true )
            {
               printf("Voce deve fazer exercicio de forca !  \n");
            }
            else if (strcmp(sexo, "f") == 0 && obesidade || sobrepeso == true)
            {
              printf("Voce deve fazer exercicio aerobicos !  \n");
            }
            else{
                if (idade >= 60 && abaixo_peso == true)
                {
                    printf("Voce deve consultar o geriatra !  \n");
                }
                else if (25 <= idade && obesidade == true)
                {
                     printf("Voce deve procurar o nutricionista !  \n");
                }
                
                
            }
            
         
        }
    }

    return 0;
}