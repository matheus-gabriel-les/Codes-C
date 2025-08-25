#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    int numeros[4],i,aux[4],j;
    bool compara;
    int maior = 0;


    for ( i = 0; i < 4; i++)
    {
        printf("Digite um numero:  ");
        scanf("%d",&numeros[i]);

    }

    for ( i = 0; i < 2; i++)
    {
       for ( i = 0; i < 2; i++)
       {
          printf("%d",numeros[i]);
          printf("  ");
          printf("%d\n",numeros[i + 1]);

          aux[j] = numeros[i];//variavel auxiliar recebe o numero salvo no vetor numeros
          compara = aux[j] > numeros[i +1];//comapara recebe verdadeiro ou falso se o numero em aux e maior que o proximo numero do vetor  
          
          if(compara){

            maior = aux[j];//se for verdadeira maior recebe aux
          }
       }      
       
    }
    
     
   printf("O maior elemento da matriz e:  %d\n",maior);
    
}
