# Algoritmos e Pensamento Computacional

Repositório dedicado à implementação de soluções de baixo nível, focando em performance e manipulação direta de hardware através da linguagem C.

## 🎯 Soluções Implementadas

### 🔹 O Desafio da Persistência de Dados
**Problema:** Como manter o histórico de cálculos do usuário acessível mesmo após fechar o programa?
**Solução:** Implementada na Calculadora Científica.
- Criação de um sistema de I/O que escreve e lê arquivos `.csv`.
- Uso de `structs` para organizar os dados em memória antes da gravação.

### 🔹 O Desafio da Ordenação
**Problema:** Como organizar grandes volumes de dados (ex: RGM de alunos) de forma lógica?
**Solução:** Implementada no Bubble Sort.
- Algoritmo de ordenação por flutuação.
- Inclusão de telemetria (`clock_t`) para medir o custo computacional da operação.

### 🔹 O Desafio da Modularidade
**Problema:** O código estava se tornando ilegível e difícil de manter na `main`.
**Solução:** Aplicação de *Clean Code*.
- Fragmentação do código em funções específicas (Princípio da Responsabilidade Única).
- Criação de bibliotecas próprias para reutilização de código.

