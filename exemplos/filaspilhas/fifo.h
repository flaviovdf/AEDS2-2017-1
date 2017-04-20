#ifndef FIFO_H
#define FIFO_H

typedef struct fifo_node {
  int value;
  struct fifo_node *next;
} fifo_node_t;

typedef struct {
  fifo_node_t *head;
  fifo_node_t *tail;
} fifo_t;

fifo_t *fifoCreate();
void fifoInsert(fifo_t *fifo, int value);
int fifoRemove(fifo_t *fifo);
int fifoIsEmpty(fifo_t *fifo);
void fifoFree(fifo_t *fifo);

#endif
