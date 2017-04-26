#ifndef BST_H
#define BST_H

typedef struct node {
  int value;
  struct node *leftChild;
  struct node *rightChild;
} node_t;

typedef struct {
  node_t *root;
} bst_t;

bst_t *createTree();

void insertValue(bst_t *tree, int value);
int hasValue(bst_t *tree, int value);
int removeValue(bst_t *tree, int value);

void printInOrder(bst_t *tree);
void printPreOrder(bst_t *tree);
void printPostOrder(bst_t *tree);

void bstFree(bst_t *tree);

#endif
