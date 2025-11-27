
# 🎓 DynamicGrade C: Sistema de Gestão Acadêmica

![Memory Management](https://img.shields.io/badge/Memory-Dynamic_Allocation-blueviolet?style=flat-square&logo=c)
![Data Structure](https://img.shields.io/badge/Struct-Organized_Data-00599C?style=flat-square)
![Status](https://img.shields.io/badge/Build-Stable-success?style=flat-square)

> *Um sistema de boletim digital que respeita a memória do seu computador.*

---

## 🧐 O Conceito

Muitos sistemas escolares definem um limite fixo para notas (ex: 4 bimestres). Mas e se o professor der 5 provas? Ou apenas 1?

O **DynamicGrade C** resolve o problema da rigidez de arrays estáticos. Utilizando **Alocação Dinâmica de Memória (`malloc`)**, o software solicita ao sistema operacional exatamente a quantidade de RAM necessária para aquele aluno específico, nem um byte a mais, nem a menos.

---

## 🏗️ Arquitetura do Código

O projeto foi construído sobre três pilares de engenharia de software em C:

### 1. Modelagem de Dados (`Struct`)
Em vez de variáveis soltas, encapsulamos o estudante em uma entidade lógica:
```c
typedef struct {
    int matricula;      // ID único
    char nome[50];      // Identificação textual
    float mediaFinal;   // Dado processado
} Aluno;
2. Gestão de Memória (Malloc & Free)
O diferencial do projeto. O vetor de notas é criado em tempo de execução:
🧠 Fluxo Inteligente: Entrada do Usuário ➔ Cálculo de Bytes (qtd * sizeof(float)) ➔ Alocação na Heap ➔ Uso ➔ Limpeza (Free).
3. Sanitização de Input
Tratamento de strings para remover quebras de linha indesejadas (\n) capturadas pelo fgets, garantindo uma saída visual limpa no relatório final.
🖥️ Interface de Execução (Preview)
O sistema gera um "Relatório Final" formatado automaticamente no console.
code
Text
--- Sistema de Notas ---
Digite o nome do aluno: Davi Lucas
Digite a matricula: 202410
Quantas notas deseja inserir? 3

Inserindo 3 notas para Davi Lucas:
Digite a 1ª nota: 8.5
Digite a 2ª nota: 7.0
Digite a 3ª nota: 9.2

=============================
      RELATORIO FINAL        
=============================
Aluno:     Davi Lucas
Matricula: 202410
Media:     8.23
Situacao:  APROVADO
=============================
🛡️ Segurança e Boas Práticas
Este código implementa verificações essenciais para evitar falhas comuns em C:
✅ Verificação de Ponteiro Nulo: Se o computador não tiver memória suficiente (malloc retornar NULL), o programa avisa e encerra com segurança antes de travar.
✅ Prevenção de Memory Leak: Uso explícito da função free(notas) ao final da execução para devolver a memória ao sistema operacional.
✅ Validação Lógica: Impede que o usuário digite uma quantidade negativa ou zero de notas.
🚀 Como Testar
Clone o repositório:
code
Bash
git clone https://github.com/SEU-USUARIO/DynamicGrade-C.git
Compile:
code
Bash
gcc sistema_notas.c -o sistema
Execute:
code
Bash
./sistema
<div align="left">
<sub><strong>Nota do Desenvolvedor:</strong> Este projeto demonstra o domínio sobre ponteiros e gerenciamento manual de memória, fundamentos essenciais para sistemas embarcados e de alta performance.</sub>
</div>
```
O que torna este modelo diferente?
Foco na Engenharia: Em vez de falar "calcula média", ele fala sobre "Alocação Dinâmica" e "Heap". Isso valoriza muito o seu código para quem entende de C.
Badges "Flat-Square": Usei um estilo de badge mais quadrado e moderno.
Blocos de Código Explicativos: Destaquei a struct para mostrar organização.
Seção de Segurança: Adicionei um tópico sobre "Segurança e Boas Práticas" (Memory Leak, Null Pointer), o que conta muitos pontos com recrutadores técnicos, pois mostra que você se preocupa com erros e não apenas com o "caminho feliz".
