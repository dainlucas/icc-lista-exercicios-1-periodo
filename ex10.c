// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 10: Faça um programa em C para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, mediaP;
    int p1 = 1;
    int p2 = 2;
    int p3 = 3;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    mediaP = ( ((nota1 * p1) + (nota2 * p2) + (nota3 * p3)) / (p1 + p2 + p3) );

    printf("MEDIA PONDERADA: [%.2f]\n", mediaP);

    return 0;
}
