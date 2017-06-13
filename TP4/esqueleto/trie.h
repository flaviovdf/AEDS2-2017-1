#ifndef AEDS_TRIE_H
#define ALPHABET_SIZE 26

typedef struct trie_node {
  char c;
  int isEndOfWord;
  struct trie_node *children;   // com ALPHABET_SIZE posições
} trie_node_t;

typedef struct trie {
  struct trie_node *firstLevel; // com ALPHABET_SIZE posições
} trie_t;

// Funções do Trie aqui ...

#endif
