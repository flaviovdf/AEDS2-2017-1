**Universidade Federal de Minas Gerais**

**Disciplina: DCC002 - Algoritmos e Estrutura de Dados 2**

**Professor: Flavio Vinicius Diniz de Figueiredo**

# Lista de Exercícios - Prova 3

## Árvores

1. Implemente uma árvore binária

1. Implemente os algoritmos de caminhamento na árvore acima

1. Após criar sua árvore, implemente uma função que retorna 1 caso um
   elemento passo `n` existe na árvore. `hasElement(tree_t *tree, int n)`.

1. Implemente um código para remover elementos de uma árvore.

1. Ache o menor elemento em uma árvore.

1. Como computar a altura de uma árvore? Isto é, quantos níveis abaixo da
   raiz existem? Tal código pode ser feito com poucas linhas + recursividade.

## Insertion Sort, Selection Sort, Bubble Sort

1. Implemente um BubbleSort otimizado. Veja os slides para a definição do
   mesmo.

1. Implemente um InsertionSort otimizado. Veja os slides para a definição do
   mesmo.
   
1. Implemente um InsertionSort recursivo.

## MergeSort

1. Implemente um merge sort com a seguinte alteração: `Quando a lista de
   entrada tiver 10 elementos execute um Insertion Sort na mesma.` Isto é,
   diferente do merge sort normal que começa a realizar merges quando temos
   entradas de 1 elemento, o seu merge sort pode ordenar já a partir de 10
   elementos com um Insertion Sort. Qual a otimização que está sendo feita?

1. Faça uma função para contar o número de inversões em um vetor de entrada.
   Uma inversão acontece quando para um par `i, j`, `vetor[i] > vetor[j]`. É
   simples fazer um programa quadrático para esta tarefa. Você consegue pensar
   em como fazer a mesma tarefa mudando um pouco um MergeSort?

   **Dica, procure por inversion counting no Google**

## QuickSort

1. Implemente um QuickSort recursivo.

1. Implemente um QuickSort iterativo usando uma Pilha extra.

1. Usando apenas a função partition do QuickSort, como você faz para encontrar
   os top x maiores elementos de um vetor. Qual o custo da sua função?

## HeapSort

1. Indique se a sequnência abaixo é um max heap:
   `23, 17, 14, 6, 13, 10, 1, 5, 7, 12`
   
1. Faça um TAD para um heap que não utiliza vetores. Lembre-se da árvore binária.

1. Como achar os top-x maiores elementos de um vetor de dados com um MinHeap.
   Implemente o código
