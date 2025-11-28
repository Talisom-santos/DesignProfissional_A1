# Projeto Lâmpada (JS DOM Manipulation)

Este repositório contém uma aplicação introdutória focada na manipulação do **Document Object Model (DOM)** utilizando JavaScript puro. O projeto simula o funcionamento de uma lâmpada controlada por eventos de clique.

## 🎯 Objetivo
Demonstrar como alterar atributos HTML dinamicamente (neste caso, o `src` de uma imagem) sem a necessidade de recarregar a página, conceito fundamental para Single Page Applications (SPAs) modernas.

## ⚙️ Funcionalidades Implementadas
- [x] Troca dinâmica de ativos de imagem (Assets Swapping).
- [x] Controle de fluxo condicional simples (`if/else`).
- [x] Navegação via `window.location`.
- [x] Separação de conceitos (HTML Estrutural, CSS Visual, JS Lógico).

## 🗂 Estrutura do Projeto

```bash
Projeto_Lampada_JS/
├── index.html
├── lampada.html
├── css/
│   └── estilos.css
├── js/
│   └── configuracoes.js
└── imagens/
    ├── lampadaon.gif
    ├── lampadaoff.gif
    └── logoHTML5.png
💻 Exemplo de Código
A função principal recebe um parâmetro de estado (sw) e define qual imagem será renderizada no elemento alvo:
code
JavaScript
// Localizado em: js/configuracoes.js
function luz(sw) {
    var img;
    if (sw == 0) {
        img = "imagens/lampadaoff.gif"; // Estado: Apagado
    } else {
        img = "imagens/lampadaon.gif";  // Estado: Aceso
    }
    document.getElementById('minhaImagem').src = img;
}
🚀 Instalação e Execução
Baixe o projeto.
Garanta que as imagens estão na pasta correta para evitar erros 404.
Execute o arquivo index.html em qualquer navegador moderno.
🛠 Tecnologias
![alt text](https://img.shields.io/badge/-HTML5-E34F26?style=flat&logo=html5&logoColor=white)

![alt text](https://img.shields.io/badge/-CSS3-1572B6?style=flat&logo=css3&logoColor=white)

![alt text](https://img.shields.io/badge/-JavaScript-F7DF1E?style=flat&logo=javascript&logoColor=black)
