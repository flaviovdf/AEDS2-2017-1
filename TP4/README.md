# TP4: Tries

  * Individual
  * Entrega: Domingo depois da prova

## Problema

## Um possível struct para tries

```c
#define ALPHABET_SIZE 26

typedef struct trie_node {
  char c;
  int isEndOfWord;
  struct *trie_node children; // com ALPHABET_SIZE posições
} trie_node_t;

typedef struct trie {
  trie_node_t *root;
} trie_t;
```

## Entrada

## Saída
