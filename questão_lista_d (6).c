#include <stdio.h>
#include <stdlib.h>

int main(){

//inicializacao para variáveis //

    int par = 0, num, i;

    for (i = 1; i <= 10; i++){
// entrada de dados para contagem dos pares e dos 
Impares // 

        printf("Informe numero: ");

        scanf("%d", &num);
    }

//logica condicional para descobrir se e par,
Caso esse bloco seja verdadeiro //
    if (num % 2 == 0){

        par = par + 1;

    }

    printf("Pares: %d\n", par);

    printf("Impares: %d", 10 - par);

    return 0;

}