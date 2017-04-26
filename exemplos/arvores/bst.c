#include <stdio.h>
#include <stdlib.h>

#include "bst.h"

bst_t *createTree() {
  bst_t *tree = (bst_t *) malloc(sizeof(bst_t));
  if (tree == NULL) {
    printf("Malloc error! Cannot create tree");
    exit(1);
  }
  tree->root = NULL;
  return tree;
}

void _insertValueRecursive(node_t *parent, node_t *newNode) {
  //Caminha para esquerda
  if ((newNode->value <= parent->value)) { 
    if (parent->leftChild == NULL) {
      parent->leftChild = newNode;
    } else {
      _insertValueRecursive(parent->leftChild, newNode);
    }
  }
  
  //Caminha para direita
  if ((newNode->value > parent->value)) { 
    if (parent->rightChild == NULL) {
      parent->rightChild = newNode;
    } else {
      _insertValueRecursive(parent->rightChild, newNode);
    }
  }
}

void _insertValueNonRecursive(node_t *root, node_t *newNode) {
  node_t *candidateParent = root;
  node_t *actualParent = NULL;
  while (candidateParent != NULL) {
    actualParent = candidateParent;
    if ((newNode->value <= candidateParent->value)) { //Caminha esquerda
      candidateParent = candidateParent->leftChild; 
    } else {
      candidateParent = candidateParent->rightChild; //Caminha direita
    }
  }
  
  if ((newNode->value <= actualParent->value)) {
    actualParent->leftChild = newNode; 
  } else {
    actualParent->rightChild = newNode;
  }
}

void insertValue(bst_t *tree, int value) {
  node_t *node = (node_t *) malloc(sizeof(node_t));
  if (node == NULL) {
    printf("Malloc error! Cannot create node");
    exit(1);
  }
  node->value = value;
  node->leftChild = NULL;
  node->rightChild = NULL;

  if (tree->root == NULL) {
    tree->root = node;
  } else {
    _insertValueRecursive(tree->root, node);
  }
}

int _hasValueRecursive(node_t *currentlyVisiting, int value) {
  if (currentlyVisiting == NULL)
    return 0;
  if (value == currentlyVisiting->value)
    return 1;

  if (value < currentlyVisiting->value) {
    return _hasValueRecursive(currentlyVisiting->leftChild, value);
  } else {
    return _hasValueRecursive(currentlyVisiting->rightChild, value);
  }
}

int _hasValueNonRecursive(node_t *currentlyVisiting, int value) {
  node_t *nextVisit = currentlyVisiting;
  while(nextVisit != NULL) {
    if (value == nextVisit->value)
      return 1;

    if (value < nextVisit->value) {
      nextVisit = nextVisit->leftChild;
    } else {
      nextVisit = nextVisit->rightChild;
    }
  }

  return 0;
}

node_t *_findLeftMostNode(node_t *node) {
  if (node->leftChild == NULL)
    return node;
  return _findLeftMostNode(node->leftChild);
}

void _removeValue(bst_t *tree, node_t *node, node_t *parent, int value) {
  node_t* orphan;
  if (value == node->value) {
    //Caso 1: Sem Filhos
    if (node->leftChild == NULL && node->rightChild == NULL) {
      orphan = NULL;
    //Caso 2: Apenas 1 Filho. ^ é um our exclusivo, ou left ou right != null
    } else if ((node->leftChild == NULL) ^ (node->rightChild == NULL)) {
      if (node->leftChild != NULL) {
        orphan = node->leftChild;
      } else {
        orphan = node->rightChild;
      }
    //Caso 3: 2 Filhos. Achar um nó para substituir
    } else {
      orphan = _findLeftMostNode(node->rightChild);
    }
    
    //A partir daqui o orphan vai virar o nó.
    //Atualizamos o parent
    if (parent != NULL) {
      if (node == parent->leftChild) {
        parent->leftChild = orphan;
      } else {
        parent->rightChild = orphan;
      }
    }
    //No Caso 3, o orphan tem que herdar os childs
    if ((node->leftChild != NULL) && (node->rightChild != NULL)) {
      if (node->leftChild != orphan)
        orphan->leftChild = node->leftChild;
      if (node->rightChild != orphan)
        orphan->rightChild = node->rightChild;
    }
    //Atualizamos a raiz se necessário
    if (node == tree->root) {
      tree->root = orphan;
    }
    //Free!
    free(node);
  } else {
    if (value < node->value) {
      _removeValue(tree, node->leftChild, node, value);
    } else {
      _removeValue(tree, node->rightChild, node, value);
    }
  }
}

int removeValue(bst_t *tree, int value) {
  if (tree->root == NULL)
    return 0;
  if (hasValue(tree, value) == 0) //Valor não se encontra na árvore
    return 0;
  _removeValue(tree, tree->root, NULL, value);
  return 1;
}


int hasValue(bst_t *tree, int value) {
  return _hasValueRecursive(tree->root, value);
}

void _printInOrder(node_t *node) {
  if (node == NULL) {
    return;
  }
  _printInOrder(node->leftChild);
  printf("%d ", node->value);
  _printInOrder(node->rightChild);
}

void printInOrder(bst_t *tree) {
  return _printInOrder(tree->root);
}

void _printPreOrder(node_t *node) {
  if (node == NULL) {
    return;
  }
  printf("%d ", node->value);
  _printPreOrder(node->leftChild);
  _printPreOrder(node->rightChild);
}

void printPreOrder(bst_t *tree) {
  return _printPreOrder(tree->root);
}

void _printPostOrder(node_t *node) {
  if (node == NULL) {
    return;
  }
  _printPostOrder(node->leftChild);
  _printPostOrder(node->rightChild);
  printf("%d ", node->value);
}


void printPostOrder(bst_t *tree) {
  return _printPostOrder(tree->root);
}

void bstFree(bst_t *tree) {
  while(tree->root != NULL)
    removeValue(tree, tree->root->value);
  free(tree);
}
