/*2. Faça um Programa que pergunte quanto você ganha por hora e o número 
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/

#include <stdlib.h>
#include <stdio.h>

void main(){

    float ganha, hpm, salario;

    printf("Quanto voce ganha por hora: ");
    scanf("%f", &ganha);
    printf("\nNumeros de horas trabalhadas no mes: ");
    scanf("%f", &hpm);
    
    salario = (ganha) * (hpm);

    printf("\nSalario do mes: %.2f", salario);
    
}