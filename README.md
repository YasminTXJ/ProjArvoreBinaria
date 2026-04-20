

# Estrutura de Dados: Árvore Binária de Busca (BST)

Este repositório contém a implementação de uma **Árvore Binária de Busca** (Binary Search Tree - BST) desenvolvida como parte dos estudos de Estrutura de Dados. O projeto foca na manipulação eficiente de dados hierárquicos e na compreensão de algoritmos de busca e caminhamento.

## 📌 Sobre o Projeto

A Árvore Binária de Busca é uma estrutura de dados baseada em nós, onde cada nó possui, no máximo, dois filhos. A propriedade principal desta árvore é que, para qualquer nó, os valores à sua esquerda são menores e os valores à sua direita são maiores, permitindo buscas logarítmicas eficientes.

### Funcionalidades Implementadas:

  * **Inserção:** Adição de novos elementos mantendo a propriedade da BST.
  * **Busca:** Verificação da existência de um valor específico na árvore.
  * **Remoção:** Exclusão de nós (casos de nó folha, com um filho ou com dois filhos).
  * **Caminhamentos (Traversals):**
      * **Em-ordem (In-order):** Visita a subárvore esquerda, o nó atual e depois a direita (resulta em dados ordenados).
      * **Pré-ordem (Pre-order):** Visita o nó atual antes de seus filhos.
      * **Pós-ordem (Post-order):** Visita os filhos antes do nó atual.
  * **Informações da Árvore:** Cálculo de altura, contagem de nós e identificação de níveis.

## 🛠️ Tecnologias

  * **Linguagem:** C++ (ou C, ajuste conforme seu código)
  * **Compilador:** GCC/G++
  * **Ambiente:** VS Code / Terminal

## 📂 Estrutura de Arquivos

```text
├── src/
│   ├── ArvoreBinaria.cpp  # Implementação das funções
│   ├── ArvoreBinaria.h    # Definição das classes/estruturas
│   └── main.cpp           # Testes e interface com o usuário
├── README.md
└── .gitignore
```

## 🚀 Como Rodar o Projeto

1.  **Clone este repositório:**

    ```bash
    git clone https://github.com/YasminTXJ/ProjArvoreBinaria.git
    cd ProjArvoreBinaria
    ```

2.  **Compile o código:**

    ```bash
    g++ src/*.cpp -o programa
    ```

3.  **Execute:**

    ```bash
    ./programa
    ```

## 📝 Exemplo de Uso

No arquivo `main.cpp`, você encontrará exemplos de como instanciar a árvore e realizar operações:

```cpp
// Exemplo conceitual
Arvore bst;
bst.inserir(50);
bst.inserir(30);
bst.inserir(70);

bst.caminharEmOrdem(); // Saída: 30 50 70
```

## ✒️ Autora

  * **Yasmin** - [Seu Perfil no GitHub](https://www.google.com/search?q=https://github.com/YasminTXJ)


*Este projeto foi desenvolvido para fins didáticos e de estudo sobre complexidade algorítmica.*
