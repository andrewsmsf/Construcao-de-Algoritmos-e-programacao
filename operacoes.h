#include <stdio.h>
#include <locale.h>

void exibirMens(){//não é obrigada a retornar a nada.
    printf("Opa\n");
} 

void somar(float n1, float n2){
    float soma = n1+n2;
    printf("A soma é %.2f \n", soma);
}
float subtracao(float n1, float n2){
    float sub = n1 - n2;
    return sub;
}