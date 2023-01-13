#include <stdio.h>
#include <stdlib.h>

int main(){

// entrada de dados para validação de numero
Negativo // 

    int num;
    int cont = 0;

// lado for para 5 tentativas //

    for (int i = 0; i < 5; i++) {
    
        printf("Informe o valor:");
        scanf("%d", &num);
        
// condicional para validação de números negativos // 

        if(num < 0){
            cont = cont + 1;
        }

    }
    
    printf("A quantidade de numeros negativos digitados sao: %d", cont);

    return 0;
    
}
