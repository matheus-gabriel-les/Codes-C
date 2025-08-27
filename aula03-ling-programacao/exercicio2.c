
#include <stdio.h>
#include <string.h>

int main(){

    int i,numeros[5],j;
    int compara[5];

    for(i = 0; i < 5; i++){ //Pega os 5 numeros

        printf("Digite um numero");
        scanf("%d",&numeros[i]);
    }

     for(i = 0; i < 5; i++){//Repete a execucao do if ate i ser = 5

        if(numeros[i] > 10){//compara se o valor do indice e maior que 10
   
         compara[j] = numeros[i];//se o valor for maior, esse valor e salvo no indice de compara 
         printf("Numeros maiores que 10 : %d\n",compara[j]);//printa os valores maiores que 10
            
        }
        else{
            compara[j] = 0;//se o valor nao for maior que dez, o indice e salvo como zero no indice de compara 
        }
       
    }

   

    return 0;
    
}  
