/*
 * Atividade IV - Exercicio 2
 * Recebe dois numeros inteiros e mostra os numeros
 * que estao entre eles (sem incluir os proprios numeros).
 * Exemplo: 2 e 6 -> 3, 4, 5
 */
#include <stdio.h>

int main() {
    int a, b, aux, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    // se o usuario digitar o maior primeiro, troca os valores
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    // se a diferenca for 0 ou 1, nao tem numero no meio
    if (b - a <= 1) {
        printf("Nao existem numeros inteiros entre %d e %d.\n", a, b);
    } else {
        printf("Saida: ");
        i = a + 1;
        while (i < b) {
            printf("%d", i);
            // coloca virgula so se nao for o ultimo
            if (i < b - 1) {
                printf(", ");
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}
