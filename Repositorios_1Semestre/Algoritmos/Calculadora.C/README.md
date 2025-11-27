# 📟 OmniCalc C: The Terminal Powerhouse

![C Language](https://img.shields.io/badge/Language-C_Standard-00599C?style=for-the-badge&logo=c&logoColor=white)
![System](https://img.shields.io/badge/System-File_I%2FO-orange?style=for-the-badge)
![Structure](https://img.shields.io/badge/Data-Structs_%26_Pointers-red?style=for-the-badge)

```text
       _____________________
      |  _________________  |
      | |              0. | |  "Esqueça as interfaces gráficas pesadas.
      | |_________________| |   O verdadeiro poder matemático 
      |  ___ ___ ___   ___  |   vive no terminal."
      | | 7 | 8 | 9 | | + | |
      | |___|___|___| |___| |
      | | 4 | 5 | 6 | | - | |
      | |___|___|___| |___| |
      | | 1 | 2 | 3 | | x | |
      | |___|___|___| |___| |
      | | . | 0 | = | | / | |
      | |___|___|___| |___| |
      |_____________________|
```
# ⚡ Sobre o Projeto**
Este não é apenas um script de soma e subtração. OmniCalc C é uma estação de trabalho matemática completa desenvolvida em Linguagem C.

O projeto foi arquitetado para manipular desde aritmética básica até cálculos complexos de álgebra linear e trigonometria, com um diferencial crucial: Persistência de Dados. Cada operação é registrada, estruturada e salva automaticamente em um banco de dados local (.csv), permitindo auditoria de cálculos passados.

# 🛠️ O que tem debaixo do capô?

O código vai além da lógica matemática, implementando conceitos avançados de ciência da computação:

# 🧩 Conceito	⚙️ Aplicação no Código

Alocação Dinâmica	Uso de malloc e free para criar arrays de tamanho variável durante a execução (ex: somar "n" números).

Structs & Typedef	Modelagem de dados complexos para criar o objeto Historico, agrupando ID, tipo de operação e valores.

File Handling	Leitura e Escrita de arquivos (fopen, fprintf) para exportar o histórico para CSV.

Ponteiros	Manipulação direta de memória para otimização e passagem de grandes estruturas de dados.

Matrizes Multidimensionais	Lógica de laços aninhados para realizar soma e multiplicação de Matrizes 3x3.

# 🎛️ Arsenal de Funções (Menu do Sistema)

O sistema conta com 27 módulos operacionais divididos em categorias:

# 📐 Geometria & Trigonometria

Seno, Cosseno, Tangente (e seus arcos), Hipotenusa, Teorema de Pitágoras e Conversão Graus/Radianos.

#📊 Álgebra & Estatística

Bhaskara (com tratamento de Delta), Fatorial, Logaritmos (Base 10 e Natural), Operações com Matrizes 3x3.

# 💾 Núcleo do Sistema (System Core)

O Módulo 0 e o sistema de Logs Automáticos:
```code
C
// Exemplo da estrutura de dados que alimenta o histórico
typedef struct {
    char tipo[50];    // Nome da operação
    double a, b;      // Inputs
    double resultado; // Output processado
    int id;           // Identificador único
} historico;
```
💾 Persistência (O arquivo .CSV)
Ao executar o programa, ele gera automaticamente um arquivo historico.csv na raiz do diretório. Isso permite que você abra seus cálculos posteriormente no Excel, Google Sheets ou utilize para análise de dados.
Formato de Saída:
ID, Tipo_Operacao, Input_A, Input_B, Resultado
🚀 Protocolo de Execução
Para iniciar a calculadora em sua máquina, você precisará de um compilador GCC.
Clone o repositório:

```code
Bash
git clone https://github.com/SEU-USUARIO/OmniCalc-C.git
Compile o código:
code
Bash
gcc calculadora.c -o omnicalc -lm
(Nota: a flag -lm é essencial para linkar a biblioteca math.h em sistemas Linux)
Execute:
code
Bash
./omnicalc
<div align="center">
<sub>Desenvolvido com ☕ e Ponteiros por <strong>Talisom Izidoro</strong>.</sub>
</div>

```
