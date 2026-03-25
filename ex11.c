// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*Exercício 11: Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida espectivamente por 10, 12 e 15 reais. 
Construa um Programa em C em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes
a uma venda, e a máquina informe quanto será o valor arrecadado.
*/

#include <stdio.h>
int main() {
    int valorCamP = 10;
    int valorCamM = 12;
    int valorCamG = 15;
    int qtdCamisetaP, qtdCamisetaM, qtdCamisetaG, venda;

    scanf("%d %d %d", &qtdCamisetaP, &qtdCamisetaM, &qtdCamisetaG);

    venda = (valorCamP * qtdCamisetaP) + (valorCamM * qtdCamisetaM) + (valorCamG * qtdCamisetaG);

    printf("VALOR TOTAL: R$ %d\n", venda);
    
    return 0;
}