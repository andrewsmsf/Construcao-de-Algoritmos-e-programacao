#include <stdio.h>
#include <locale.h>
#include "operacoes.h"


int main (void){
    setlocale(LC_ALL, "Portuguese");
    exibirMens();
    exibirMens();
    
    somar(5, 7);
    somar(20, 31);
   
    float result = 0;
    result = subtracao(10, 7);
    printf("A subtração é %.2f \n", subtracao);

}