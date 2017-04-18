#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

stack_t *stack_create() {
  stack_t *stack = (stack_t *) malloc(sizeof(stack_t));
  if (stack == NULL) {
    printf("Memory error");
    exit(1);
  }
  stack->head = NULL;
  return stack;
}

void stack_push(stack_t *stack, void *value) {
  stack_node_t *node = (stack_node_t *) malloc(sizeof(stack_node_t));
  node->value = value;
  node->next = stack->head;
  stack->head = node;
}

void *stack_pop(stack_t *stack) {
  stack_node_t *toFree;
  if (stack->head != NULL) {
    toFree = stack->head;
    stack->head = stack->head->next;
    free(toFree);
  }
}

int stack_is_empty(stack_t *stack) {
  if (stack->head == NULL) {
    return 1;
  } else {
    return 0;
  }
}
