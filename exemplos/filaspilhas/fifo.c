#include <stdlib.h>
#include <stdio.h>
#include "fifo.h"

fifo_t *fifoCreate() {
  fifo_t *fifo = (fifo_t *) malloc(sizeof(fifo_t));
  if (fifo == NULL) {
    printf("Memory error");
    exit(1);
  }
  fifo->head = NULL;
  fifo->tail = NULL;
  return fifo;
}

void fifoInsert(fifo_t *fifo, int value) {
  fifo_node_t *node = (fifo_node_t *) malloc(sizeof(fifo_node_t));
  if (node == NULL) {
    printf("Memory error");
    exit(1);
  }
  node->value = value;
  node->next = NULL;
  if (fifo->head == NULL) {
    fifo->head = node;
    fifo->tail = node;
  } else {
    fifo->tail->next = node;
    fifo->tail = node;
  }
}

int fifoRemove(fifo_t *fifo) {
  fifo_node_t *toFree;
  int toReturn;
  if (fifo->head != NULL) {
    toReturn = fifo->head->value;
    toFree = fifo->head;
    fifo->head = fifo->head->next;
    free(toFree);
  } else {
    printf("FIFO is empty");
    exit(1);
  }
  return toReturn;
}

int fifoIsEmpty(fifo_t *fifo) {
  if (fifo->head == NULL) {
    return 1;
  } else {
    return 0;
  }
}

void fifoFree(fifo_t *fifo) {
  fifo_node_t *toFree;
  fifo_node_t *next = fifo->head;
  while(next != NULL) {
    toFree = next;
    next = next->next;
    free(toFree);
  }
  free(fifo);
}
