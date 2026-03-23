// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 9: O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escreva um programa em
C para ler o custo de fábrica de um carro, calcular e escrever o custo final do consumidor.
*/

#include <stdio.h>

int main(){

    float taxaDistr = 0.28;
    float impostos = 0.45;
    float custo, custoFabrica;

    scanf("%f", &custoFabrica);

    custo = custoFabrica + (custoFabrica * taxaDistr) + (custoFabrica * impostos);

    printf("CUSTO FINAL: R$ %.2f\n", custo);

    return 0;
}
