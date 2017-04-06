#ifndef POINTER_LIST_H
#define POINTER_LIST_H

typedef struct node {
  void *info;
  struct node *next;
} node_t;

typedef struct {
  node_t *first;
  node_t *last;
} pointer_list_t;

pointer_list_t *createList();
void addElement(pointer_list_t *list, void *element);
void destroyList(pointer_list_t *list);
void removeElement(pointer_list_t *list, int i);
#endif
