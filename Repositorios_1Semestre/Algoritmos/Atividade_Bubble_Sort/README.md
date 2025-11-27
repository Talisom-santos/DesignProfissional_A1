# Ordenação de RGM - Bubble Sort (C) #

Este projeto apresenta uma implementação modularizada do algoritmo de ordenação Bubble Sort na linguagem C. O objetivo é ordenar os dígitos de um Registro Geral de Matrícula (RGM), contabilizar o número de trocas realizadas e medir o tempo de execução do processador.

# 📋 Funcionalidades #

* **Entrada de Dados:** Leitura de string numérica de 8 dígitos.
* **Algoritmo de Ordenação:** Implementação do Bubble Sort utilizando aritmética de ponteiros para manipulação de memória.
* **Análise de Desempenho:**

  °Cálculo de tempo de execução (usando `clock_t`).

  °Contagem total de passos (trocas) realizadas.

* **Saída Formatada:** Exibição dos resultados em formato CSV (Comma-Separated Values).

# 🛠 Estrutura do Código #

O código foi refatorado para seguir boas práticas de programação estruturada:

* **Uso de Structs:** Encapsulamento das estatísticas (tempo e passos) na estrutura `Estatisticas`.

* **Modularização:** Separação clara de responsabilidades em funções:

° `lerInput:` Trata a entrada do usuário.

° `executarBubbleSort:` Núcleo lógico com laços `while`.

° `trocarCaracteres:` Função auxiliar para swap de valores.

° `exibirRelatorio:` Formatação de saída.


