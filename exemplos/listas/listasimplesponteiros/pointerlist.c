#include <stdlib.h>
#include <stdio.h>
#include "pointerlist.h"

pointer_list_t *createList() {
  pointer_list_t *list = (pointer_list_t *) malloc(sizeof(pointer_list_t));
  if (list == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  list->first = NULL;
  list->last = NULL;
  return list;
}

void addElement(int element, pointer_list_t *list) {
  node_t *toVisit = list->first;
  int isFirst = 0;
  if (toVisit == NULL)
    isFirst = 1;
  
  while (isFirst == 0 && toVisit->next != NULL)
    toVisit = toVisit->next;
  
  node_t *new = (node_t *) malloc(sizeof(node_t));
  if (new == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  new->info = element;
  new->next = NULL;
  
  if (list->last != NULL) //Cria pointeiro para novo elemento
    list->last->next = new;
  
  //Atualize first e last
  list->last = new;
  if (isFirst == 1)
    list->first = new;
}

void destroyList(pointer_list_t *list) {
  node_t *toVisit = list->first;
  node_t *toFree;
  while (toVisit != NULL) {
    toFree = toVisit;
    toVisit = toVisit->next;
    free(toFree);
  }
  free(list);
}

void printList(pointer_list_t *list) {
  node_t *toVisit = list->first;
  while (toVisit != NULL) {
    printf("%d ", toVisit->info);
    toVisit = toVisit->next;
  }
  printf("\n");
}

void removeElement(pointer_list_t *list, int i) {
  node_t *toFree = list->first;
  node_t *prev = NULL;
  int curr = 0;
  while (toFree != NULL) { //Caminha até achar o elemento
    if (curr == i)
      break;
    prev = toFree;
    toFree = toFree->next;
    curr++;
  }
  
  if (toFree == NULL) //Lista Vazia
    return;
  
  //Atualiza ponteiros
  if (toFree == list->first)
    list->first = toFree->next;
  if (toFree == list->last)
    list->last = prev;
  
  if (prev != NULL)
    prev->next = toFree->next;
  
  //Free!
  free(toFree);
}
