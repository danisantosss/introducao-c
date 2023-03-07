#include <stdio.h>
#include <stdlib.h>

int main(void){
	float metro, centimetro;
	
	printf("Digite a quantidade de metros\n");
	scanf("%f",&metro);
	centimetro = metro*100;
	printf("Conversao para centimetros = %.2f\n", centimetro);
	
	return 0;
}

