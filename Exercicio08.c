#include <stdio.h>
#include <stdlib.h>

int main(void){
	int primeiro_numero, segundo_numero, soma;
	
	printf("Digite o primeiro numero\n");
	scanf("%i",&primeiro_numero);
	printf("Digite o segundo numero\n");
	scanf("%i",&segundo_numero);
	
	soma = primeiro_numero + segundo_numero;
	printf("Soma dos dois numeros = %i\n", soma);
	
	return 0;
}
