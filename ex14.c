// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 14: A empresa ‘Hipotheticus’ paga R$10,00 por hora normal trabalhada, e R$15,00 por
hora extra. Faça um Programa em C para calcular e imprimir o salário bruto e o salário
líquido de um determinado funcionário. Considere que o salário líquido é igual ao salário
bruto descontando-se 10% de impostos.
*/

#include <stdio.h>
int main() {
    int vHora = 10;
    int vExtra = 15;
    float pctImpostos = 0.1;
    float horaNormal, horaExtra;
    double salBruto, salFinal;

    printf("DIGITE A QUANTIDADE DE HORAS NORMAIS: ");
    scanf("%f", &horaNormal);
    printf("\nDIGITE A QUANTIDADE DE HORAS EXTRAS SE HOUVER: ");
    scanf("%f", &horaExtra);

    salBruto = (horaNormal * vHora) + (horaExtra *vExtra);
    salFinal = salBruto - (salBruto * pctImpostos);

    printf("SALARIO BRUTO: %.2f \nSALARIO LIQUIDO: %.2f\n", salBruto, salFinal);

    return 0;
}