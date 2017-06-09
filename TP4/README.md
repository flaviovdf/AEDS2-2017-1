# TP4: Tries

  * Individual
  * Entrega: Domingo depois da prova

## Problema

## Um possível struct para tries

```c
#DEFINE ALPHABET_SIZE 26

typedef struct trie_node {
  char c;
  int isEndOfWord;
  struct trie_node children[ALPHABET_SIZE]; // não é eficaz, mas funciona
}```

## Entrada

## Saída
