// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.5.b: Seja a função logo abaixo.
float calcularProduto(float num1, float num2){
    printf("%f", num1 * num2);
    }
Comente o erro na chamada da função.
b) calcularProduto(2);
*/
#include <stdio.h>

float calcularProduto(float num1, float num2){
    printf("%f", num1 * num2);
    }

int main() {

    calcularProduto(2);
    
    return 0;
}

/*
RESPOSTA: O erro é na chamada calcularProduto, a função espera 2 parâmetros(num1 e num2) porém
apenas 1 valor foi atribuído (2) */