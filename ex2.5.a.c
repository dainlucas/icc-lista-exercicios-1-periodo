// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.5.a: Seja a função logo abaixo.
float calcularProduto(float num1, float num2){
    printf("%f", num1 * num2);
    }
Comente o erro na chamada da função.
a) float x= 4+ 3 * 2 / calcularProduto(2,3);
*/
#include <stdio.h>

float calcularProduto(float num1, float num2){
    printf("%f", num1 * num2);
    }

int main() {

    float x = 4 + 3 * 2 / calcularProduto(2,3);
    printf("\n\nSAIDA: %f\n", x);

    return 0;
}

/*
RESPOSTA: O erro é na função calcularProduto, pois ela apesar de se atribuida como float
não retorna valor, o que implica em o sistema pegar um valor antigo da memória ou, em alguns casos
o próprio zero, retornando em x = inf */