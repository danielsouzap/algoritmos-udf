# Atividade IV — Estruturas de Repetição em C

Exercícios de laboratório da disciplina **Algoritmos e Pensamento Computacional** — Ciência da Computação, UDF (2º semestre, 2026.2).

Foco: laços `while` e `do/while`, condicionais, contadores, acumuladores e condição de parada (flag).

## Exercícios

| Arquivo | O que faz | Conceito praticado |
|---|---|---|
| `ex01_soma_pares.c` | Soma os pares de 1 a 20 (resultado: 110) | `while` + operador `%` |
| `ex02_intervalo.c` | Mostra os inteiros entre dois números (2 e 6 → 3, 4, 5) | troca de variáveis, `while` |
| `ex03_media_impares.c` | Média dos ímpares digitados, para no 0 | `do/while`, flag de parada, cast para `float` |
| `ex04_notas_alunos.c` | Situação de cada aluno e resumo da turma, para no -1 | `while`, `if/else if`, contadores, validação de entrada |

## Como compilar e rodar

```bash
gcc ex01_soma_pares.c -o ex01
./ex01
```

O mesmo vale para os outros arquivos.

## Decisões que tomei

- **Ex. 2:** se o usuário digitar o maior número primeiro, o programa troca os valores antes do laço, então `6 e 2` também funciona.
- **Ex. 3:** testo ímpar com `numero % 2 != 0` em vez de `== 1`, porque em C `-3 % 2` dá `-1`. Também evito divisão por zero quando nenhum ímpar é digitado.
- **Ex. 4:** notas fora de 0 a 10 são recusadas e não entram na média.

## Autor

Daniel Souza Passos — [GitHub](https://github.com/danielsouzap) · [LinkedIn](https://linkedin.com/in/daniel-souza-8b9279349)
