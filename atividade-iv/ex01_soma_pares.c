/*
 * Atividade IV - Exercicio 1
 * Imprime a soma dos numeros pares de 1 a 20 usando while.
 */
#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    // percorre de 1 ate 20
    while (numero <= 20) {
        // se o resto da divisao por 2 for 0, o numero e par
        if (numero % 2 == 0) {
            soma = soma + numero;
        }
        numero++;
    }

    printf("Soma dos numeros pares de 1 a 20: %d\n", soma);

    return 0;
}
