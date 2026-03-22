// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 5: Escreva um Programa em C para ler um valor em centavos e mostrar quantas moedas
de 1 real, 50 centavos, 25 centavos, 10 centavos, 5 centavos e 1 centavo são necessárias
para obter o valor lido. (dica: utilize o operador aritmético resto de divisão (%). Ex: 30 % 7
= 2)
*/

#include <stdio.h>

void exibir(int real, int moeda50, int moeda25, int moeda10, int moeda05, int moeda01){
    printf("[%d] MOEDAS DE 1 REAL\n", real);
    printf("[%d] MOEDAS DE 50 CENTAVOS\n", moeda50);
    printf("[%d] MOEDAS DE 25 CENTAVOS\n", moeda25);
    printf("[%d] MOEDAS DE 10 CENTAVOS\n", moeda10);
    printf("[%d] MOEDAS DE 5 CENTAVOS\n", moeda05);
    printf("[%d] MOEDAS DE 1 CENTAVO\n", moeda01);
}

int main(){
    int centavos;
    int real, resto, moeda50, moeda25, moeda10, moeda05, moeda01;

    scanf("%d", &centavos);

    real = centavos / 100;
    resto = centavos % 100;
    moeda50 = resto / 50;
    resto = resto % 50;
    moeda25 = resto / 25;
    resto = resto % 25;
    moeda10 = resto / 10;
    resto = resto % 10;
    moeda05 = resto / 5;
    resto = resto % 5;
    moeda01 = resto / 1;

    exibir(real, moeda50, moeda25, moeda10, moeda05, moeda01);

return 0;
}