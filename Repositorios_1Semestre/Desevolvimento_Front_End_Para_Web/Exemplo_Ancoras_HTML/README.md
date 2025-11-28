# Navegação Interna com Âncoras (Anchor Links)

Este projeto demonstra a implementação de links de navegação interna utilizando HTML puro. A técnica é essencial para a criação de Landing Pages e sites de página única (One Page), melhorando significativamente a Experiência do Usuário (UX).

## 🎯 Objetivo
Demonstrar o funcionamento prático da tag `<a>` para saltos de conteúdo dentro do mesmo documento DOM.

## 🛠 Funcionalidades
- [x] **Índice de Navegação:** Menu superior com links diretos para tópicos.
- [x] **Seccionamento:** Delimitação de conteúdo usando âncoras nomeadas.
- [x] **Loop de Navegação:** Funcionalidade de "Voltar ao Topo" após cada leitura.

## 📝 Exemplo de Implementação

A lógica baseia-se na referência de IDs ou Nomes através do seletor `#`:

```html
<!-- Link de Chamada -->
<nav>
    <a href="#introducao">Introdução</a> |
    <a href="#conclusao">Conclusão</a>
</nav>

<!-- Conteúdo Alvo -->
<a name="introducao"></a>
<h2>Introdução</h2>
<p>Texto aqui...</p>
<a href="#top">Voltar ao topo</a>
🚀 Execução
Basta abrir o arquivo index.html em seu navegador de preferência. Não há necessidade de instalação de dependências ou servidores.
👨‍💻 Autor
Talisom Santos
