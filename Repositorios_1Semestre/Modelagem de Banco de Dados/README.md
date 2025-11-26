
# 🗄️ Modelagem de Banco de Dados

> "Dados são o novo petróleo da economia digital."

Repositório dedicado à disciplina de **Modelagem de Banco de Dados**, focado na arte e ciência de estruturar dados de forma eficiente, íntegra e escalável.

## 📖 Sobre a Disciplina
Esta disciplina oferece uma formação completa para o design de sistemas de informação robustos. O conteúdo abrange desde os fundamentos teóricos até técnicas avançadas de implementação SQL.

O curso segue uma progressão lógica em quatro etapas principais:
1.  **Fundamentos e Contexto:** Diferenciação entre dados/informação, ética (LGPD) e tipos de bancos de dados.
2.  **Modelagem Conceitual:** Criação de representações visuais através do Modelo Entidade-Relacionamento (MER) e Diagramas (DER).
3.  **Projeto Lógico e Normalização:** Eliminação de redundâncias e garantia de integridade referencial.
4.  **Implementação Física:** Manipulação prática com SQL, operações CRUD e DML.

## 🎯 Objetivos de Aprendizagem
Durante este curso, desenvolvi competências para:
*   ✅ Identificar entidades, atributos e relacionamentos a partir de requisitos de negócio.
*   ✅ Aplicar técnicas de normalização para garantir consistência dos dados.
*   ✅ Dominar ferramentas profissionais de modelagem (ex: BRModelo, MySQL Pgadmin).
*   ✅ Implementar estruturas físicas otimizadas utilizando SQL.

## 🛠️ Tecnologias e Ferramentas
*   **Modelagem:** [Ferramenta usada, ex: BRModelo ]
*   **SGBD:** [Banco usado, ex: MySQL / PostgreSQL ]
*   **Linguagem:** SQL 
*   **IDE/Editor:** [BRmodelo/Pgadmin]

## 📂 Estrutura do Repositório

| Pasta | Descrição |
| :--- | :--- |
| `/01-conceitos` | Anotações sobre dados vs informação e ética. |
| `/02-modelagem-conceitual` | Diagramas ER (MER/DER) de estudos de caso. |
| `/03-normalizacao` | Exercícios de passagem da 1FN, 2FN e 3FN. |
| `/04-sql-scripts` | Scripts de criação de tabelas e queries (PGadmin). |

## 🚀 Como visualizar os projetos
1. Clone o repositório: `git clone https://github.com/seu-usuario/modelagem-bd.git`
2. Para os diagramas, abra os arquivos `.png` ou `.brM3` na pasta correspondente.
3. Para os scripts SQL, importe os arquivos `.sql` no seu SGBD de preferência.

---
Desenvolvido por **[Seu Nome]** durante o curso de **[Nome do Curso/Faculdade]**.
Opção 2: Visual e Direta (Estilo "Badges")
Mais focada nas ferramentas e no resumo visual, ótima para quem visita seu perfil rapidamente.
code
Markdown
<h1 align="center">🎲 Modelagem de Banco de Dados</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Status-Em_Desenvolvimento-yellow?style=for-the-badge&logo=appveyor">
  <img src="https://img.shields.io/badge/Database-MySQL-blue?style=for-the-badge&logo=mysql&logoColor=white">
  <img src="https://img.shields.io/badge/Language-SQL-orange?style=for-the-badge&logo=postgresql&logoColor=white">
</p>

## 📝 Descrição
Repositório de estudos focado na estruturação de dados para sistemas de informação. O objetivo é transitar do **modelo conceitual** (regras de negócio) até a **implementação física** (SQL), garantindo integridade e performance.

## 📚 Tópicos Estudados

### 🔹 1. Fundamentos
*   Dados vs Informação.
*   Ética e LGPD no uso de dados.

### 🔹 2. Modelagem Conceitual (MER/DER)
*   Identificação de Entidades e Atributos.
*   Relacionamentos e Cardinalidade.
*   *Ferramentas:* [Ex: BRModelo, Draw.io].

### 🔹 3. Modelagem Lógica
*   Normalização (1FN, 2FN, 3FN).
*   Chaves Primárias (PK) e Estrangeiras (FK).
*   Eliminação de redundâncias.

### 🔹 4. Implementação (SQL)
*   **DDL:** Criação de estruturas (`CREATE`, `ALTER`, `DROP`).
*   **DML:** Manipulação de dados (`INSERT`, `UPDATE`, `DELETE`).
*   **DQL:** Consultas avançadas (`SELECT`, `JOINs`).

## 💻 Exemplo de Código
```sql
-- Exemplo de criação de tabela desenvolvido em aula
CREATE TABLE Clientes (
    ID INT PRIMARY KEY AUTO_INCREMENT,
    Nome VARCHAR(100) NOT NULL,
    Email VARCHAR(100) UNIQUE,
    DataCadastro DATETIME DEFAULT CURRENT_TIMESTAMP
);
🤝 Autor
<a href="https://github.com/seu-usuario">
<img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/000000?v=4" width="100px;" alt=""/>
<br />
<sub><b>[Seu Nome]</b></sub>
</a>
Feito com ❤️ e SQL.
code
Code
---

### Opção 3: Focada em Estudos de Caso (Prática)
Se você vai subir muitos exercícios ou "projetinhos" (ex: modelar um banco para biblioteca, para um e-commerce, etc), use este.

```markdown
# Modelagem de Banco de Dados 💾

Este repositório documenta minha jornada de aprendizado em **Modelagem de Banco de Dados**, cobrindo desde a análise de requisitos até a execução de queries SQL.

## 🧠 O que estou aprendendo?
A disciplina foca em desenvolver a capacidade de projetar sistemas que atendam às demandas organizacionais, transformando "dados brutos" em estruturas inteligentes para tomada de decisão.

## 🗂️ Lista de Projetos / Estudos de Caso

Aqui estão os cenários práticos simulados durante o curso:

### 1. Sistema de Biblioteca (Exemplo)
*   **Desafio:** Gerenciar empréstimos, livros e autores.
*   **Artefatos:** [Diagrama DER](./biblioteca/der.png) | [Script SQL](./biblioteca/script.sql)
*   **Conceitos:** Relacionamento N:N, Chaves Estrangeiras.

### 2. E-commerce Simples (Exemplo)
*   **Desafio:** Controle de pedidos, produtos e estoque.
*   **Artefatos:** [Modelo Lógico](./ecommerce/logico.png)
*   **Conceitos:** Normalização, Integridade Referencial.

## 🛠️ Stack Tecnológico
*   **Modelagem:** [Nome da Ferramenta]
*   **Banco de Dados:** [Nome do Banco]

## 📜 Licença
Este projeto está sob a licença MIT. Sinta-se à vontade para utilizar os scripts para estudo.

---
**[Seu Nome]**
[Link para seu LinkedIn]
