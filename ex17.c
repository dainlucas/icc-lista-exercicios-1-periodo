// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038
/* Exercício 17: Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um Programa em C para ler os dados
necessários e calcular a altura do prédio.
*/

#include <stdio.h>
int main() {
    float suaSombra, predSombra;
    float altPredio, suaAltura;

    printf("Digite o comprimento da sombra do prédio, da sua sombra e da sua altura respectivamente: ");
    scanf("%f %f %f", &predSombra, &suaSombra, &suaAltura);

    altPredio = (predSombra/suaSombra)*suaAltura;

    printf("\n\nALTURA DO PREDIO: %.2fm\n", altPredio);

    return 0;
}