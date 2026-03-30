// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.1: Crie uma função chamada celsiusParaFahrenheit que recebe um valor em Celsius
(float) e retorna o valor convertido para Fahrenheit.
Fórmula:F=(C x 1.8)+32
*/
#include <stdio.h>

float celsiusParaFahrenheit(float inpCels){
    float outFht;
    outFht = (inpCels * 1.8) + 32;
    return outFht;
}

int main() {
    //dec
    float fahrenheit, celsius;

    //inpt
    scanf("%f", &celsius);
    
    //proc
    fahrenheit = celsiusParaFahrenheit(celsius);

    //out
    printf("CELSIUS: %.2f\nFAHRENHEIT: %.2f\n", celsius, fahrenheit);

    return 0;
}