#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura organizada para os dados do aluno
typedef struct {
    int matricula;
    char nome[50];
    float mediaFinal;
} Aluno;

int main() {
    Aluno aluno;
    float *notas;   
    float soma = 0; 
    int qtdNotas, i;

    printf("--- Sistema de Notas ---\n");
    
    // Leitura do nome (permite espacos, ex: Ana Maria)
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = 0; // Remove o 'enter' do final do nome

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);

    // Definicao da quantidade de notas para alocacao
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &qtdNotas);

    // Validacao simples para evitar numeros negativos ou zero
    if (qtdNotas <= 0) {
        printf("\n[Aviso] A quantidade precisa ser maior que zero.\n");
        return 0;
    }

    // Alocacao dinamica de memoria
    notas = (float *) malloc(qtdNotas * sizeof(float));

    // Verificacao de seguranca da memoria
    if (notas == NULL) {
        printf("\n[Erro Critico] Falha ao alocar memoria.\n");
        return 1;
    }

    printf("\nInserindo %d notas para %s:\n", qtdNotas, aluno.nome);
    for (i = 0; i < qtdNotas; i++) {
        printf("Digite a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a media
    aluno.mediaFinal = soma / qtdNotas;

    // Exibicao do Boletim
    printf("\n=============================\n");
    printf("      RELATORIO FINAL        \n");
    printf("=============================\n");
    printf("Aluno:     %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Media:     %.2f\n", aluno.mediaFinal);
    
    // Define se passou ou reprovou
    if (aluno.mediaFinal >= 6.0) {
        printf("Situacao:  APROVADO\n");
    } else {
        printf("Situacao:  REPROVADO\n");
    }
    printf("=============================\n");

    // Libera a memoria alocada antes de encerrar
    free(notas);

    return 0;
}
