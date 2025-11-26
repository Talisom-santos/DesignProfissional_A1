#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define TAM_RGM 8



void ordenarRGM(char *array, int *qtdTrocas) {
    int i, j;
    char aux;

    for (i = 0; i < TAM_RGM - 1; i++) {
      
        for (j = 0; j < TAM_RGM - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
              
                (*qtdTrocas)++;
            }
        }
    }
}

int main(){
   
    char rgm[TAM_RGM + 1]; 
    int trocas = 0;
    clock_t inicio, fim;
    double tempoProcessamento;
    printf("=== Ordenador de RGM ===\n");
    printf("Digite o RGM (apenas os %d numeros): ", TAM_RGM);
    scanf("%8s", rgm);
    if (strlen(rgm) < TAM_RGM) {
        printf("\n[Erro] O RGM deve conter %d digitos.\n", TAM_RGM);
        return 1;
    }
    inicio = clock();
    ordenarRGM(rgm, &trocas);
    fim = clock();
    tempoProcessamento = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("\n--- Relatorio de Performance ---\n");
    printf("Metodo,RGM_Ordenado,Tempo(s),Trocas\n");
    printf("BubbleSort,%s,%.6f,%d\n", rgm, tempoProcessamento, trocas);

    return 0;
}
