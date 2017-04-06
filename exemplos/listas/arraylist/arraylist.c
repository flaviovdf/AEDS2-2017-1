#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arraylist.h"

array_list_t *createList() {
  int *data = (int *) malloc(INIT_SIZE * sizeof(int));
  if (data == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  array_list_t *list = (array_list_t *) malloc(sizeof(array_list_t));
  list->data = data;
  list->nElements = 0;
  list->capacity = INIT_SIZE;
  return list;
}

void addElement(int element, array_list_t *list) {
  if (list->nElements == list->capacity) {
    //Duplica tamanho da lista
    int *newData = (int *) malloc(list->nElements * 2 * sizeof(int));
    
    /*
     * Outra forma de fazer, melhor! Fiz com for para o exemplo.
     * memcpy(newData, list->data, list->nElements * sizeof(int));
     */
    for (int i = 0; i < list->nElements; i++)
      newData[i] = list->data[i];
    
    free(list->data);
    list->data = newData;
    list->capacity = list->nElements * 2;
  }
  list->data[list->nElements] = element;
  list->nElements++;
}

void destroyList(array_list_t *list) {
  free(list->data);
  free(list);
}

void imprimeLista(array_list_t *list) {
  int i;
  for(i = 0; i < list->nElements; i++)
    printf("%d ", list->data[i]);
  printf("\n");
}

void removeElementos(array_list_t *list) {
  list->nElements--;
}
