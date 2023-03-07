#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota_um, nota_dois, nota_tres, nota_quatro;
    float media;
    printf("Digite a primeira nota\n");
    scanf("%f",&nota_um);
    printf("Digite a segunda nota\n");
    scanf("%f",&nota_dois);
    printf("Digite a terceira nota\n");
    scanf("%f",&nota_tres);
    printf("Digite a quarta nota\n");
    scanf("%f",&nota_quatro);

    media = (nota_um + nota_dois + nota_tres + nota_quatro)/4;
    printf("Media das 4 notas = %.2f\n", media);

    return 0;
}