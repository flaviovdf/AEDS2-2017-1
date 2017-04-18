#include <stdlib.h>
#include <stdio.h>
#include "fifo.h"

fifo_t *fifo_create() {
  fifo_t *fifo = (fifo_t *) malloc(sizeof(fifo_t));
  if (fifo == NULL) {
    printf("Memory error");
    exit(1);
  }
  fifo->head = NULL;
  fifo->tail = NULL;
  return fifo;
}

void fifo_insert(fifo_t *fifo, void *value) {
  fifo_node_t *node = (fifo_node_t *) malloc(sizeof(fifo_node_t));
  node->value = value;
  if (fifo->head == NULL) {
    fifo->head = node;
    fifo->tail = node;
  } else {
    fifo->tail->next = node;
  }
}

void *fifo_remove(fifo_t *fifo) {
  fifo_node_t *toFree;
  if (fifo->head != NULL) {
    toFree = fifo->head;
    fifo->head = fifo->head->next;
    free(toFree);
  }
}

int fifo_is_empty(fifo_t *fifo) {
  if (fifo->head == NULL) {
    return 1;
  } else {
    return 0;
  }
}
