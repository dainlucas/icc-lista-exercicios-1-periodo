// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 13: Três amigos, Carlos, André e Felipe decidiram ‘rachar’ igualmente a conta de um bar.
Faça um Programa em C para ler o valor total da conta e imprimir quanto cada um deve
pagar, mas faça com que Carlos e André não paguem centavos. Ex: uma conta de
R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe.
*/

#include <stdio.h>
int main() {
    double valorTotal, valorUsr1;
    int valorUsr2, valorUsr3;

    scanf("%lf", &valorTotal);

    valorUsr3 = (valorTotal / 3);
    valorUsr2 = (valorTotal / 3);
    valorUsr1 = valorTotal - valorUsr3 - valorUsr2;

    printf("VALOR CARLOS: %d\nVALOR ANDRÉ: %d\nVALOR FELIPE: %.2f\n", valorUsr3, valorUsr2, valorUsr1);

    return 0;
}