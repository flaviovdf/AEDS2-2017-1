#include <stdio.h>
#include "pointerlist.h"

int main(void) {
  int i;
  pointer_list_t *list = createList(&list);
  for (i = 0; i < 25; i++)
    addElement(i, list);
  printList(list);
  removeElement(list, 20);
  printList(list);
  removeElement(list, 0);
  printList(list);
  removeElement(list, 99);
  printList(list);
  removeElement(list, 22);
  printList(list);
  for (i = 0; i < 25; i++) {
    removeElement(list, 0);
    printList(list);
  }
  destroyList(list);
  return 0;
}
