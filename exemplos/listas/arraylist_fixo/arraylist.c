#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arraylist.h"

array_list_t *createList() {
  int *data = (int *) malloc(MAX_SIZE * sizeof(int));
  if (data == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  array_list_t *list = (array_list_t *) malloc(sizeof(array_list_t));
  list->data = data;
  list->nElements = 0;
  return list;
}

void addElement(int element, array_list_t *list) {
  if (list->nElements == MAX_SIZE) {
    free(list->data);
    printf("Error, sem memória!!");
    exit(1);
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

void removeElement(array_list_t *list) {
  list->nElements--;
}
