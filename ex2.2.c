// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.2: Escreva uma função chamada calcularAreaCirculo que recebe o raio de um círculo e
retorna sua área. Utilize a constante 3.14159.
Area=π ⋅r²
*/
#include <stdio.h>

float calcularAreaCirculo(float r){
    float pi = 3.14159;
    float area;
    area = pi * (r*r);
    return area;
}

int main() {
    float areaCirc, raioCirc;

    scanf("%f", &raioCirc);
    
    areaCirc = calcularAreaCirculo(raioCirc);

    printf("AREA: %.2f\n",areaCirc);

    return 0;
}