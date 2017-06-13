#include <stdlib.h>
#include "hashtable.h"

hash_table_t *createTable(int size) {
  hash_table_t *tab = (hash_table_t*) malloc(sizeof(hash_table_t));
  tab->entries = (hash_entry_t**) malloc(size * sizeof(hash_entry_t*));
  tab->size = size;
  int i;
  for (i = 0; i < size; i++)
    tab->entries[i] = NULL;
  return tab;
}

void hashPut(hash_table_t *tab, int hashKey, void *valueData) {
  // Cria nova entrada
  hash_entry_t *entry = (hash_entry_t*) malloc(sizeof(hash_entry_t));
  entry = (hash_entry_t*) malloc(sizeof(hash_entry_t));
  entry->hashKey = hashKey;
  entry->valueData = valueData;
  entry->next = NULL;

  int location = hashKey % tab->size;
  hash_entry_t *prev = tab->entries[location];
  if (prev == NULL) {  // Lista vazia
    tab->entries[location] = entry;
  } else {             // Caminha para frente
    while (prev->next != NULL) {
      prev = prev->next;
    }
    prev->next = entry;
  }
  return;
}

void *hashGet(hash_table_t *tab, int hashKey) {
  int location = hashKey % tab->size;
  void *returnVal = NULL;
  hash_entry_t *entry = tab->entries[location];

  while (entry != NULL && entry->hashKey != hashKey) {
    entry = entry->next;
  }
  if (entry != NULL) {
    returnVal = entry->valueData;
  }
  return returnVal;
}

void *hashRemove(hash_table_t *tab, int hashKey) {
  int location = hashKey % tab->size;
  void *returnVal = NULL;
  hash_entry_t *prev = NULL;
  hash_entry_t *entry = tab->entries[location];

  while (entry != NULL && entry->hashKey != hashKey) {
    prev = entry;
    entry = entry->next;
  }
  if (entry != NULL) {
    if (prev != NULL)
      prev->next = entry->next;
    else
      tab->entries[location] = NULL;
    returnVal = entry->valueData;
    free(entry);
  }
  return returnVal;
}
