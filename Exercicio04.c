//Construa  um  algoritmo  que  receba  uma  temperatura
//em  graus Celsius  (�C), transforme e mostre
//na tela a temperatura em graus Fahrenheit (�F).

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float celsius, fahrenheit;
	printf("Digite a temperatura em Celsius\n");
	scanf("%f",&celsius);
	
	fahrenheit = (celsius*1.8)+32;
		
	printf("Temperatura em Fahrenheit = %.2f",fahrenheit);
	
	return 0;
}
