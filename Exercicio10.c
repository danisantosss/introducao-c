#include <stdio.h>
#include <stdlib.h>

int main(void){
    float horas_salario, 
    horas_trabalhadas, salario_total;

    printf("Quanto tu ganha por hora?\n");
    scanf("%f",&horas_salario);
    printf("Quantas horas tu trabalha no mes?\n");
    scanf("%f",&horas_trabalhadas);
    
    salario_total = horas_salario * horas_trabalhadas;
    printf("Salario total no mes = %.2f\n",salario_total);

    return 0;

}