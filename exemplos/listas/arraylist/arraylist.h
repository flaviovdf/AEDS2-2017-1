#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define INIT_SIZE 30

typedef struct {
  int nElements;
  int capacity;
  int *data;
} array_list_t;

array_list_t *createList();
void addElement(int element, array_list_t *list);
void destroyList(array_list_t *list);
void printList(array_list_t *list);
#endif
