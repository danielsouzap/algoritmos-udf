/*
 * Atividade IV - Exercicio 3
 * Le varios numeros e calcula a media apenas dos impares.
 * A leitura termina quando o usuario digitar 0.
 */
#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;
    float media;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        // numero impar tem resto diferente de 0 na divisao por 2
        // (uso != 0 para funcionar com negativos tambem, ex: -3 % 2 = -1)
        if (numero != 0 && numero % 2 != 0) {
            soma = soma + numero;
            quantidade++;
        }
    } while (numero != 0);

    // evita divisao por zero se nenhum impar foi digitado
    if (quantidade > 0) {
        media = (float) soma / quantidade;
        printf("Quantidade de impares: %d\n", quantidade);
        printf("Media dos impares: %.2f\n", media);
    } else {
        printf("Nenhum numero impar foi digitado.\n");
    }

    return 0;
}
