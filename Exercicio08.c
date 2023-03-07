#include <stdio.h>
#include <stdlib.h>

int main(void){
	float raios, area;
	const float pi = 3.14159265359;
	printf("Digite o raios do circulo\n");
	scanf("%f",&raios);
	area = pi * raios * raios;
	printf("Area do circulo = %f\n",area);
	
	return 0;
}
