// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 6: Escreva um Programa em C que leia a idade de uma pessoa expressa em anos,
meses e dias. O programa deve mostrar a idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias.
*/

#include <stdio.h>

int main(){
    
    int anos, meses, dias, idade;

    scanf("%d %d %d", &anos, &meses, &dias);

    idade = (anos * 365) + (meses * 30) + dias;

    printf("Você viveu %d dias.\n", idade);

return 0;
}