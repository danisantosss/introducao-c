#include <stdio.h>
#include <stdlib.h>

int main (void){
	// vari�veis (Quais s�o as vari�veis)
	int numero; //tipo inteiro
	float peso; //tipo real
	char sexo; //tipo caracter
	
	// entrada (Quais s�o os valores das vari�veis?)
	numero = 53;
	peso = 5.5;
	sexo= 'm';
	
	// saída (Quais s�o as sa�das dos dados?)
	printf("Numero = %i\n", numero);
	printf("Peso = %f e sexo = %c\n",peso,sexo);
	
	int idade, ano_atual, ano_nascimento;
	idade = 19;
	ano_atual = 2023;
	ano_nascimento = (ano_atual - idade);
	printf("Eu nasci no ano de %i\n", ano_nascimento);
	
	return 0;
}
