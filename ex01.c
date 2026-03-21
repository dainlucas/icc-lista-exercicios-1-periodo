// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 1: Escreva um Programa em C que leia um valor que represente o lado de um quadrado,
calcule e mostre área desse quadrado.
*/

#include <stdio.h>

int main(){

    float lado, area;
    scanf("%f", &lado);
    area = lado * lado;
    printf("Area do quadrado de lado %.2f e: %.2f\n", lado, area);

return 0;
}