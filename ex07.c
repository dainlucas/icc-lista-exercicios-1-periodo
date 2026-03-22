// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 7: Escreva um Programa em C que leia a idade de uma pessoa expressa em dias e
mostre a idade dessa pessoa expressa em anos, meses e dias. Considerar meses de 30
dias e anos de 365 dias. Exemplo, uma pessoa com com 1230 dias tem: 3 anos, 4 meses
e 15 dias.
*/

#include <stdio.h>

int main(){
    
    int diasTotais, resto;
    int anos, meses, dias;

    scanf("%d", &diasTotais);

    anos = diasTotais / 365;
    resto = diasTotais % 365;
    meses = resto / 30;
    resto = resto % 30;
    dias = resto;

    printf("ANOS: %d\nMESES: %d\nDIAS: %d\n", anos, meses, dias);

return 0;
}