#ifndef AEDS_HASHTABLE_T
#define AEDS_HASHTABLE_T

typedef struct hash_entry {
  void *hashKey;             // Chave qual computamos a função
  void *valueData;           // Valor
  struct hash_entry *next;   // Ponteiro para frente no caso de colisões
} hash_entry_t;

typedef int(*hash_f)(void*);   // Pointer para função de hash

typedef struct {
  hash_entry_t **entries;     // Vetor de entradas
  hash_f hashFunction;        // Função de hash
  int size;                   // Tamanho das entradas
} hash_table_t;

hash_table_t *createTable(int size, hash_f hashFunction);
void hashPut(hash_table_t *tab, void *hashKey, void *valueData);
void *hashGet(hash_table_t *tab, void *hashKey);
void *hashRemove(hash_table_t *tab, void *hashKey);

#endif
