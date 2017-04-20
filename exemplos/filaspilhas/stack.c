#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

stack_t *stackCreate() {
  stack_t *stack = (stack_t *) malloc(sizeof(stack_t));
  if (stack == NULL) {
    printf("Memory error");
    exit(1);
  }
  stack->head = NULL;
  return stack;
}

void stackPush(stack_t *stack, int value) {
  stack_node_t *node = (stack_node_t *) malloc(sizeof(stack_node_t));
  node->value = value;
  node->next = stack->head;
  stack->head = node;
}

int stackPop(stack_t *stack) {
  stack_node_t *toFree;
  int toReturn;
  if (stack->head != NULL) {
    toFree = stack->head;
    toReturn = toFree->value;
    stack->head = stack->head->next;
    free(toFree);
  } else {
    printf("Stack is empty!!!");
    exit(1);
  }
  return toReturn;
}

int stackIsEmpty(stack_t *stack) {
  if (stack->head == NULL) {
    return 1;
  } else {
    return 0;
  }
}

void stackDestroy(stack_t *stack) {
  stack_node_t *next = stack->head;
  stack_node_t *toFree = NULL;
  while (next != NULL) {
    toFree = next;
    next = next->next;
    free(toFree);
  }
  free(stack);
}

