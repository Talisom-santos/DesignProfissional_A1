#include <stdio.h>
#include <time.h>
#include <string.h>

// Constante para o tamanho do RGM
#define TAM_RGM 8

// ---------------------------------------------------------
// 1. Uso de Structs: Encapsulamento das estatísticas
// ---------------------------------------------------------
typedef struct {
    double tempoExecucao;
    int totalPassos;
} Estatisticas;

// ---------------------------------------------------------
// 2. Modularização: Função auxiliar para swap de valores
// ---------------------------------------------------------
void trocarCaracteres(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// ---------------------------------------------------------
// 3. Modularização: Trata a entrada do usuário
// ---------------------------------------------------------
void lerInput(char *buffer) {
    printf("Insira o RGM (8 digitos): \n");
    // Lê até 8 caracteres para garantir segurança do buffer
    scanf("%8s", buffer);
}

// ---------------------------------------------------------
// 4. Modularização: Núcleo lógico com laços while e ponteiros
// ---------------------------------------------------------
void executarBubbleSort(char *rgm, Estatisticas *stats) {
    int i = 0;
    int j = 0;
    
    // Inicializa o contador de passos
    stats->totalPassos = 0;

    // Loop externo (substituindo o for por while)
    while (i < TAM_RGM) {
        
        // Ponteiro aponta para o início da string a cada passada
        char *ptrAtual = rgm; 
        j = 0;

        // Loop interno (substituindo o for por while)
        while (j < TAM_RGM - 1) {
            
            // Comparação utilizando Aritmética de Ponteiros
            // *ptrAtual é o valor atual
            // *(ptrAtual + 1) é o valor do próximo endereço de memória
            if (*ptrAtual >= *(ptrAtual + 1)) {
                trocarCaracteres(ptrAtual, (ptrAtual + 1));
                stats->totalPassos++; // Contabiliza a troca
            }

            // Avança o ponteiro para a próxima posição de memória
            ptrAtual++;
            j++;
        }
        i++;
    }
}

// ---------------------------------------------------------
// 5. Modularização: Formatação de saída
// ---------------------------------------------------------
void exibirRelatorio(char *rgm, Estatisticas stats) {
    printf("Método,N,Tempo,Passos\n");
    printf("Bubble,%s,%f,%d\n", rgm, stats.tempoExecucao, stats.totalPassos);
}

// ---------------------------------------------------------
// Função Principal
// ---------------------------------------------------------
int main() {
    char rgm[TAM_RGM + 1]; // +1 para o terminador nulo '\0'
    Estatisticas stats;
    clock_t inicio, fim;

    // 1. Entrada
    lerInput(rgm);

    // 2. Processamento (Cálculo de tempo e execução)
    inicio = clock();
    executarBubbleSort(rgm, &stats);
    fim = clock();

    // Calcula o tempo em segundos
    stats.tempoExecucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // 3. Saída
    exibirRelatorio(rgm, stats);

    return 0;
}
