#include <stdio.h>
#include "fifo.h"
#include "stack.h"

int main() {
  stack_t *stack = stackCreate();
  int i;
  for (i = 0; i < 10; i++) {
    printf("Push  %d\n", i);
    stackPush(stack, i);
  }
  while (stackIsEmpty(stack) != 1) {
    printf("Pop %d\n", stackPop(stack));
  }
  for (i = 0; i < 10; i++) {
    stackPush(stack, i * 200);
  }
  stackDestroy(stack);
  
  fifo_t *fifo = fifoCreate();
  for (i = 0; i < 10; i++) {
    printf("Insert  %d\n", i);
    fifoInsert(fifo, i);
  }
  while (fifoIsEmpty(fifo) != 1) {
    printf("Remove %d\n", fifoRemove(fifo));
  }
  for (i = 0; i < 10; i++) {
    fifoInsert(fifo, i * 200);
  }
  fifoFree(fifo);
  return 0;
}
