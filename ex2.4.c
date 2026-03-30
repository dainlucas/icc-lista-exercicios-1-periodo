// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.4: Escreva uma função chamada calcularHipotenusa que recebe os comprimentos dos
dois catetos de um triângulo retângulo e retorna o valor da hipotenusa.

dica: Use a função sqrt() da math.h para auxiliar.
*/
#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float c1, float c2){
    float hipot = sqrt((c1 * c1)+(c2 * c2));
    return hipot;
}
int main() {
    float hipot, cat1, cat2;

    scanf("%f %f", &cat1, &cat2);
    
    hipot = calcularHipotenusa(cat1, cat2);

    printf("HIPOTENUSA: %.2f\n", hipot);

    return 0;
}