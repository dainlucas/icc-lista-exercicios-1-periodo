// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 2: Escreva um Programa em C para ler o salário mensal atual de um funcionário e o
percentual de reajuste. Calcular e escrever: O valor do reajuste e o valor do novo salário.
*/

#include <stdio.h>

int main(){

    float salario, pctReajuste, reajuste, novoSalario;

    scanf("%f", &salario);
    scanf("%f", &pctReajuste);

    novoSalario = (salario * (pctReajuste/100)) + salario;
    reajuste = novoSalario - salario;

    printf("Valor do reajuste: R$ %.2f\nValor do novo Salario: R$ %.2f\n", reajuste, novoSalario);

return 0;
}