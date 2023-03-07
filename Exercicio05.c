#include <stdio.h>
#include <stdlib.h>

int main (void){
	int primeiro_numero, segundo_numero;
	float terceiro_numero, conta_a, conta_b, conta_c;
	
	printf("Digite o valor do primeiro numero\n");
	scanf("%i",&primeiro_numero);
	printf("Digite o valor do segundo numero\n");
	scanf("%i",&segundo_numero);
	printf("Digite o valor do terceiro numero\n");
	scanf("%f",&terceiro_numero);
	conta_a = (primeiro_numero * 2) * (segundo_numero/2);
	conta_b = (primeiro_numero * 3) + (terceiro_numero);
	conta_c = (terceiro_numero * terceiro_numero * terceiro_numero);
	printf("Produto do dobro do primeiro numero com a metade do segundo = %.2f\n", conta_a);
	printf("Soma do triplo do primeiro numero com o terceiro numero = %.2f\n", conta_b);
	printf("Terceiro numero elevado ao cubo = %.2f\n", conta_c);
	return 0;
}
