// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 2.3: Crie uma função chamada converterParaMinutos que recebe dois parâmetros inteiros:
horas e minutos. A função deve retornar o total de tempo convertido apenas para minutos.
Exemplo: converterParaMinutos(2, 30) deve retornar 150.
*/
#include <stdio.h>

int converterParaMinutos(int hr, int mnt){
    int total = mnt + (hr * 60);
    return total;
}

int main() {
    int horas, minutos, tempoTotal;

    scanf("%d %d", &horas, &minutos);
    
    tempoTotal = converterParaMinutos(horas, minutos);

    printf("TOTAL DE MINUTOS: %d\n", tempoTotal);

    return 0;
}