#include <stdio.h>
#include <stdlib.h>

int main(){

// senha do usuario para leitura //
    int senha;
    int senhaCorreta = 2002djennifer;
    int i = 3;

    for (int i = 0; i < 3; i++)
    {
    
        printf("digite sua senha: ");
        scanf("%d", &senha);
        
//condicionais acionadas pela senha correta 
Caso a senha esteja esteja incorreta, o programa para //
        if(senha == senhaCorreta){
        
            printf("\nsenha Valida\n\n");

            break;

        }
        else if (senha != senhaCorreta){

            printf("\nsenha invalida!\n\n");

        }
        
    }
    // validação da senha // 
    if (i == 3 && senha != senhaCorreta)
    {
        printf("\ncartao bloqueado\n");
    }
    

    return 0;

}