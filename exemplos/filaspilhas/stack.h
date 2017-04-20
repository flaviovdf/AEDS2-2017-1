#ifndef STACK_H
#define STACK_H

/*
 * stack_node_t is defines a node in the stack. It contains a pointer to the
 * next node and the value. The next pointer is declared as
 * struct stack_node *next because of the C compiler. It is, essentially, 
 * a *stack_node_t.
 */
typedef struct stack_node {
  int value;
  struct stack_node *next;
} stack_node_t;

/*
 * The actual stack_t has simply a pointer to the head of the stack
 */
typedef struct {
  stack_node_t *head;
} stack_t;

/*
 * Creates an empty stack
 */
stack_t *stackCreate();

/*
 * Pushes a value to the top of the stack
 */
void stackPush(stack_t *stack, int value);

/*
 * Pop's a value from the top of the stack. The value is removed
 */
int stackPop(stack_t *stack);

/*
 * Determines if an stack is empty
 */
int stackIsEmpty(stack_t *stack);

/*
 * Destroys the stack
 */
void stackDestroy(stack_t *stack);

#endif
