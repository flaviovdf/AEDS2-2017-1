#ifndef AEDS_HASHTABLE_T
#define AEDS_HASHTABLE_T

typedef struct hash_entry {
  int hashKey;             // Chave qual computados a função
  void *valueData;         // Valor
  struct hash_entry *next; // Ponteiro para frente no caso de colisões
} hash_entry_t;

typedef struct {
  hash_entry_t **entries;   // Vetor de entradas
  int size;                 // Tamanho das entradas
} hash_table_t;

hash_table_t *createTable(int size);
void hashPut(hash_table_t *tab, int hashKey, void *valueData);
void *hashGet(hash_table_t *tab, int hashKey);
void *hashRemove(hash_table_t *tab, int hashKey);

#endif
