// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 12: Faça um Programa em C para ler o salário de um funcionário e aumente esse valor em 15%.
Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final...
*/

#include <stdio.h>
int main() {
    double salario, salarioAumento, salarioFinal;
    float txAumento = 0.15;
    float txImposto = 0.08;

    scanf("%lf", &salario);

    salarioAumento = (salario * txAumento) + salario;
    salarioFinal = salarioAumento - (salarioAumento * txImposto);

    printf("SALÁRIO INICIAL: %.2f\nSALÁRIO COM AUMENTO: %.2f\nSALÁRIO FINAL: %.2f\n", salario, salarioAumento, salarioFinal);

    return 0;
}