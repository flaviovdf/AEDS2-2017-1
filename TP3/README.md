# TP4: Heaps e HeapSort

O seu trabalho neste TP vai ser implementar um Heapsort. Para isto, você
deve implementar um TAD como o abaixo:

```c
#ifndef HEAP_AEDS
#define HEAP_AEDS

typedef struct {
  int *values;    //Valores armazenados na forma de heap
  int n;          //Número de valores
} heap_t;

/*
 * Cria o heap com os valores passados. Para evitar erros no TP você pode criar
 * uma cópia dos values para criar o heap (por isso temos o struct acima). De
 * qualquer forma, é comum criar um heap sem criar cópia dos elementos.
 */
void buildMaxHeap(int *values, int n);

/*
 * Remove os maiores valores
 */
int *topN(heap_t *heap, int numValuesToRemove);

/*
 * Retorna os elementos ordenados (do maior para o menor). Novamente, pode
 * criar uma cópia se for mais simples.
 */
int *heapSort(heap_t *heap);
#endif
```

Como sempre, o esqueleto acima é apenas uma sugestão, altere como quiser.

## Entrada e Saída

Seu programa deve ler `n` elementos da entrada (por scanf mesmo). Uma possível
entrada seria a seguinte:

```
Quantos elementos no heap? (usuário digita n)
Indique os valores? (usuário digita os valores)
Você tem 2 opções: (0) ordenar de maior para menor; (1) computar os top x valores.
```

Aqui se o usuário digita 0, você deve imprimir o valores ordenados. Se o
usuário digita qualquer outro valor (por exemplo `4`), você deve pegar os top
4 valores do heap.

## Perguntas:

1. Qual o custo de criar o heap?
1. Qual o custo de ordenar no heap?
1. Qual o custo de pegar os top x valores?
