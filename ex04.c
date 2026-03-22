// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 4: A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade
de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
para fazer os cálculos para o dono. Com base nestes fatos, faça um Programa em C para
ler as quantidades de pães e de broas, e depois calcular os dados solicitados.
*/

#include <stdio.h>

int main(){
    double valorPao =  0.12;
    double valorBroa = 1.5;
    int vendasPao, vendasBroa;
    double faturamento, poupanca;

    printf("Digite a quantidade de paos vendidos no dia: ");
    scanf("%d", &vendasPao);
    printf("\nDigite a quantidade de broas vendidas no dia: ");
    scanf("%d", &vendasBroa);

    faturamento = (vendasPao * valorPao) + (vendasBroa * valorBroa);
    poupanca = faturamento * 0.1;

    printf("\nPaos vendidos: %d\nBroas  vendidas: %d\nFaturamento do dia: R$ %.2f\nValor destinado a poupança (10%%): R$ %.2f\n", vendasPao,  vendasBroa, faturamento, poupanca);

return 0;
}