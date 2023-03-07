//Construa  um  algoritmo  que  receba  a  temperatura
//em  graus Fahrenheit  (�F), transforme e mostre
//na tela a temperatura em graus Celsius (�C). C=5*(F-32)/9}

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float celsius, fahrenheit;
	printf("Digite a temperatura em Fahrenheit\n");
	scanf("%f",&fahrenheit);
	
	celsius = 5*(fahrenheit - 32)/9;
		
	printf("Temperatura em Celsius = %.2f",celsius);
	
	return 0;
}
