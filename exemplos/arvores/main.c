#include <stdio.h>
#include "bst.h"

int main() {
  bst_t *tree = createTree();
  insertValue(tree, 10);
  insertValue(tree, 5);
  insertValue(tree, 20);
  insertValue(tree, 12);
  insertValue(tree, 0);
  insertValue(tree, 4);
  insertValue(tree, 6);

  printf("In Order ");
  printInOrder(tree);
  printf("\n");
  printf("Post Order ");
  printPostOrder(tree);
  printf("\n");
  printf("Pre Order ");
  printPreOrder(tree);
  printf("\n");

  printf("The tree contains: 12 %d\n", hasValue(tree, 12));
  printf("The tree contains: 10 %d\n", hasValue(tree, 10));
  printf("The tree contains: 5 %d\n", hasValue(tree, 5));
  printf("The tree contains: 54 %d\n", hasValue(tree, 54));
  
  removeValue(tree, 4);
  printf("In Order ");
  printInOrder(tree);
  printf("\n");

  removeValue(tree, 20);
  printf("In Order ");
  printInOrder(tree);
  printf("\n");

  removeValue(tree, 5);
  printf("In Order ");
  printInOrder(tree);
  printf("\n");
  
  bstFree(tree);

  return 0;
}
