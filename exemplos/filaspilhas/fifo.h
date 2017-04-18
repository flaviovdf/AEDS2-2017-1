#ifndef FIFO_H
#define FIFO_H

typedef struct fifo_node {
  void *value;
  struct fifo_node *next;
} fifo_node_t;

typedef struct {
  fifo_node_t *head;
  fifo_node_t *tail;
} fifo_t;

/*
 * Cria uma nova FIFO e retorna um ponteiro para a mesma
 */
fifo_t *fifo_create();

/* 
 * Insere um elemento no fim da fifo
 */
void fifo_insert(fifo_t *fifo, void *value);

/*
 * Remove um elemento da fifo
 */
void *fifo_remove(fifo_t *fifo);

/*
 * Determina se uma fifo tem 0 elementos. Está vázia
 */
int fifo_is_empty(fifo_t *fifo);

#endif
