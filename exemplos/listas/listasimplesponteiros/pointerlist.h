#ifndef POINTER_LIST_H
#define POINTER_LIST_H

typedef struct node {
  int info;
  struct node *next;
} node_t;

typedef struct {
  node_t *first;
  node_t *last;
} pointer_list_t;

pointer_list_t *createList();
void addElement(int element, pointer_list_t *list);
void destroyList(pointer_list_t *list);
void printList(pointer_list_t *list);
void removeElement(pointer_list_t *list, int i);
#endif
