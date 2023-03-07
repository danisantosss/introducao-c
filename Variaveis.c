#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis (Quais são as variáveis)
	int numero; //tipo inteiro
	float peso; //tipo real
	char sexo; //tipo caracter
	
	// entrada (Quais são os valores das variáveis?)
	numero = 53;
	peso = 5.5;
	sexo= 'm';
	
	// saída (Quais são as saídas dos dados?)
	printf("Numero = %i\n", numero);
	printf("Peso = %f e sexo = %c\n",peso,sexo);
	
	int idade = 19;
	int anoAtual = 2023;
	int anoNascimento = (anoAtual - idade);
	printf("Eu nasci no ano de %i\n", anoNascimento);
	
	return 0;
}
