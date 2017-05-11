#import <stdlib.h>

int *merge(int *valuesL, int *valuesR, int nl, int nr) {
  int *result = (int *) malloc((nl+nr) * sizeof(int));
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < nl && j < nr) {
    if (valuesL[i] < valuesR[j]) {
      result[k] = valuesL[i];
      i++;
    } else {
      result[k] = valuesR[j];
      j++;
    }
    k++;
  }
  if (k < nl + nr) {
    for(; i < nl; i++) {
      result[k] = valuesL[i];
      k++;
    }
    for(; j < nr; j++) {
      result[k] = valuesR[j];
      k++;
    }
  }
  return result;
}

//end e start são inclusivos neste código
int *mergesort(int *values, int start, int end) {
  int *result;
  if (end == start) {
    result = malloc(1 * sizeof(int));
    result[0] = values[start];
    return result;
  }
  int mid = (end + start) / 2;
  int *left = mergesort(values, start, mid);
  int *right = mergesort(values, mid+1, end);
  result = merge(left, right, mid-start+1, end-mid);
  free(left);
  free(right);
  return result;
}

int main(void) {
  int *values = (int *)malloc(5 * sizeof(int));
  values[0] = 2;
  values[1] = 9;
  values[2] = 1;
  values[3] = 3;
  values[4] = 0;
  int *result = mergesort(values, 0, 4);
  return 0;
}
