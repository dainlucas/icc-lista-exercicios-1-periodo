// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.5.c: Seja a função logo abaixo.
float calcularProduto(float num1, float num2){
    printf("%f", num1 * num2);
    }
Comente o erro na chamada da função.
c) altere o código da função para que a chamada em a) possa funcionar.
*/
#include <stdio.h>

float calcularProduto(float num1, float num2){
    return num1 * num2;
    }

int main() {
    float x = 4 + 3 * 2 / calcularProduto(2,3);
    printf("%f\n", x);
    return 0;
}