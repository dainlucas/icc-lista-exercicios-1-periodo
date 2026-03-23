// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 8: Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um Programa em C para ler o preço do litro da gasolina
e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque*/

#include <stdio.h>

int main(){

    float precGasolina, litros, pagamento;

    printf("Digite o preco da gasolina e do valor pago: ");
    scanf("%f%f", &precGasolina, &pagamento);

    litros = pagamento/precGasolina;

    printf("LITROS: [%.2f]\n", litros);

}
