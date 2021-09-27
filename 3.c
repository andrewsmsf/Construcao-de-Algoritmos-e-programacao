#include <stdlib.h>
#include <stdio.h>

void main(){

/*
João Papo-de-Pescador, homem de bem, 
comprou um microcomputador para controlar o 
rendimento diário de seu trabalho. Toda 
vez que ele traz um peso de peixes maior 
que o estabelecido pelo regulamento de pesca 
do estado de São Paulo (50 quilos) deve pagar 
uma multa de R$ 4,00 por quilo excedente. 
João precisa que você faça um programa que 
leia a variável peso (peso de peixes) e 
calcule o excesso. Gravar na variável excesso 
a quantidade de quilos além do limite e na 
variável multa o valor da multa que João 
deverá pagar. Imprima os dados do programa 
com as mensagens adequadas.
*/

    float pesoTotal, taxa = 4, peso = 50, j, total;
        
        printf("Digite o peso dos peixes: ");
        scanf("%f",&pesoTotal);

        if(pesoTotal > 50){
            j = pesoTotal - peso;
            total = j * taxa;
            printf("O excedente: %.2f \n", j);
            printf("Total a pagar: %2.f \n", total);
        }else{
            printf("Multa nao cobrada.\n");
        }


}