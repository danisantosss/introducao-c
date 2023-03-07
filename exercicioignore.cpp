#include <stdio.h>
#include <stdlib.h>

int main(void){
	float raio, area;
	const float pi = 3.14159265359;
	printf("Digite o raio do circulo\n");
	scanf("%f",&raio);
	area = pi * raio * raio;
	printf("Area do circulo = %f\n",area);
	
	return 0;
}
