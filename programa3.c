
#include <stdio.h>
#include <math.h>

int main(){

    int celsius,fahrenheit;
    float metro,quilometro,quilograma,libras;
    

    printf("Digite uma temperatura em celcius: ");
    scanf("%d", &celsius);
    printf("Digite uma distancia em metro: ");
    scanf("%f", &metro);
    printf("Digite um valor em quilograma : ");
    scanf("%f",&quilograma);
   
    fahrenheit = (celsius * 1.8 ) + 32 ;
    quilometro = metro / 1000 ;
    libras = quilograma * 2,205 ;
    
    printf("Temperatura em fahrenheit:%d\n  ", fahrenheit ) ;
    printf("Distancia em quilometro: %.2f\n  ", quilometro ) ;
    printf("Valor em libras : %.2f",libras); 
}
