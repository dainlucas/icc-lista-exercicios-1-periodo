// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/*
Exercicio 3: Faça um Programa em C para calcular quantas ferraduras são necessárias para
equipar todos os cavalos comprados para um haras. Essa quantidade de cavalos será
dada pelo usuário de seu programa.
*/

#include <stdio.h>

int main(){
    int cavalos, ferraduras;

    printf("Digite quantos cavalos possui: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos *  4;
    
    printf("\nFerraduras necessarias: %d\n", ferraduras);

return 0;
}