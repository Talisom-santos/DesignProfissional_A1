#include <stdio.h>


typedef struct {
    char nome[50];
    int matricula;
    float mediaFinal;
} Aluno;

int main() {
    Aluno aluno;
    int qtdNotas;
    float soma = 0.0, notaAtual;

    // Entradas
    printf("Digite o nome do aluno: ");
    // " %[^\n]" lê o texto todo até o enter, permitindo espaços
    scanf(" %[^\n]", aluno.nome);

    printf("Digite a matrícula: ");
    scanf("%d", &aluno.matricula);

    printf("Quantas notas deseja inserir? ");
    scanf("%d", &qtdNotas);

    if (qtdNotas <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    // Processamento: Calcula a soma diretamente, sem vetor/array
    for (int i = 0; i < qtdNotas; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notaAtual);
        soma += notaAtual;
    }

    // Armazena a média na struct
    aluno.mediaFinal = soma / qtdNotas;

    // Saída
    printf("\n--- BOLETIM ---\n");
    printf("Aluno: %s | Matrícula: %d\n", aluno.nome, aluno.matricula);
    printf("Média Final: %.2f\n", aluno.mediaFinal);
    
    if (aluno.mediaFinal >= 6.0) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
