// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 16: Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de
maracujá. Faça um Programa em C para calcular quantos litros de água e de suco são
necessários para se fazer X litros de refresco (informados pelo usuário).
*/

#include <stdio.h>
int main() {
    //dec
    float litRefresco, litAgua, litSuco;

    //inpt
    scanf("%f", &litRefresco);

    //proc
    litAgua = litRefresco * 0.8;
    litSuco = litRefresco * 0.2;

    //out
    printf("QUANTIDADE NECESSARIA:\n%.2fL de água;\n%.2fL de suco.\n", litAgua, litSuco);

    return 0;
}