
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int soma,media = 0;
    int i,numeros[4];

    for(i = 0; i < 4; i++){

        printf("Digite um numero");
        scanf("%d",&numeros[i]);
    }

    for(i = 0; i < 4; i++){

       soma = soma + numeros[i];
    }
  
    media = soma / 4 ;
    
    printf("Sua media e : %d\n",media);

    return 0 ;
}  
