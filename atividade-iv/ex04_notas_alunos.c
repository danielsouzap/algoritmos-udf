/*
 * Atividade IV - Exercicio 4
 * Le notas de varios alunos, mostra a situacao de cada um
 * e no final mostra o resumo da turma.
 * A leitura termina quando digitar -1.
 */
#include <stdio.h>

int main() {
    float nota;
    float soma = 0;
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;
    int total = 0;

    while (1) {
        printf("Digite a nota do aluno (-1 para finalizar): ");
        scanf("%f", &nota);

        // condicao de parada
        if (nota == -1) {
            break;
        }

        // valida se a nota esta entre 0 e 10
        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite um valor de 0 a 10.\n\n");
            continue;
        }

        if (nota >= 7) {
            printf("Aprovado!\n\n");
            aprovados++;
        } else if (nota >= 5) {
            printf("Recuperacao!\n\n");
            recuperacao++;
        } else {
            printf("Reprovado!\n\n");
            reprovados++;
        }

        soma = soma + nota;
        total++;
    }

    printf("\n----- RESULTADO -----\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    if (total > 0) {
        printf("Media geral: %.2f\n", soma / total);
    } else {
        printf("Media geral: nenhuma nota foi digitada.\n");
    }

    return 0;
}
