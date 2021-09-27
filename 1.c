/* 1.	Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/

#include <stdlib.h>
#include <stdio.h>

void main (){
    float a, b, c, d, x;

    printf("Diga as 4 notas bimestral: ");
    scanf("%f%f%f%f",&a, &b, &c, &d);

    x = (a+b+c+d)/4;

    printf("\nSua media bimestral eh: %f", x);

}