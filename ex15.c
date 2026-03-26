// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 15: Faça um Programa em C que receba o preço de um produto, calcule e mostre o
novo preço, sabendo-se que este sofreu um desconto de 10%.
*/

#include <stdio.h>
int main() {
    double precoIni, precoFinal;
    float pctDesc = 0.1;

    scanf("%lf", &precoIni);

    precoFinal = precoIni - (precoIni * pctDesc);

    printf("PRECO FINAL: %.2f\n", precoFinal);

    return 0;
}