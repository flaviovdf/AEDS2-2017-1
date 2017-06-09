#include <stdio.h>
#include <stdlib.h>

void swap(int *values, int i, int j) {
  int aux = values[i];
  values[i] = values[j];
  values[j] = aux;
}

int partition(int *values, int start, int end) {
  int pivot = values[end-1];
  int i = start;
  int j = end - 2;
  while (i <= j)
    if (values[i] > pivot)
      swap(values, i, j--);
    else i++;
  swap(values, i, end-1);
  return i;
}

int hoarepartition(int *values, int start, int end) {
  int pivot = values[end-1];
  int i = start;
  int j = end - 2;
  while (i <= j) {
    while (values[j] > pivot) j--;
    while (values[i] < pivot) i++;
    if (i < j)
      swap(values, i, j);
  }
  swap(values, i, end-1);
  return i;
}

void quicksort(int *values, int start, int end) {
  int pivot;
  if ((end - start) > 1) {
    pivot = hoarepartition(values, start, end);
    printf("%d\n", pivot);
    quicksort(values, start, pivot);
    quicksort(values, pivot+1, end);
  }
}

int main() {
  int *values = (int *)malloc(6 * sizeof(int));
  values[0] = 1;
  values[1] = 2;
  values[2] = 9;
  values[3] = 0;
  values[4] = 7;
  values[5] = 5;
  int n = 6;
  quicksort(values, 0, n);
  for (int i = 0; i < n; i++)
    printf("%d ", values[i]);
  return 0;
}
