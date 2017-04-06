#include <stdio.h>
#include "arraylist.h"

int main(void) {
  array_list_t *arrayList = createList(&arrayList);
  for (int i = 0; i < 1000; i++)
    addElement(i, arrayList);
  printList(arrayList);
  removeLastElement(arrayList);
  printList(arrayList);
  destroyList(arrayList);
  return 0;
}
