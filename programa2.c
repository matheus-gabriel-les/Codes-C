
#include <stdio.h>
#include <math.h>

int main(){

    float valor1;
    float valor2;
    float resultado;
    int operacao ;  
   
    printf("Escolha uma operacao(1-soma,2-subtracao,3-divisao,4-raiz,5-multiplicacao) : ");
    scanf("%d", &operacao);
    
     
    switch (operacao)
    {
    case  1  :

        printf("Digite um numero: ");
        scanf("%f", &valor1);
        printf("Digite outro numero: ");
        scanf("%f", &valor2);

        resultado = valor1 + valor2 ;
        printf("Resultado da operacao : %.2f", resultado );

        break;
    case 2 :

         printf("Digite um numero: ");
         scanf("%f", &valor1);
         printf("Digite outro numero: ");
         scanf("%f", &valor2);

         resultado = valor1 - valor2;
         printf("Resultado da operacao : %.2f", resultado );

        break;

    case 3 :
         do
         {
         printf("Digite um numero: ");
         scanf("%f", &valor1);
         printf("Digite outro numero: ");
         scanf("%f", &valor2);
             
         if (valor2 != 0)
            {
                resultado = valor1 / valor2 ;
                printf("Resultado da operacao : %.2f\n", resultado);
                break;
            }
            else
             { 
                printf("Valor invalido!\n");
             }

         }while(1);
          return 0;
        
        
    case 4 :
            printf("Digite um numero: ");
            scanf("%f", &valor1);
             resultado = sqrt(valor1); 
             printf("Resultado da operacao : %.2f", resultado );


    case 5 :
       
         printf("Digite um numero: ");
         scanf("%f", &valor1);
         printf("Digite outro numero: ");
         scanf("%f", &valor2);

         resultado = valor1 * valor2 ;
        printf("Resultado da operacao : %.2f", resultado );

    default:
    
        break;
    }
  
  
      
    
}

