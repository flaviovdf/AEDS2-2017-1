#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Total de comparações: 1 [inicializa] + 3 * (n-2) / 2 [MinMax3 - caso impar]
//                      (3n - 6 + 2) / 2
//                      (3n - 4) / 2
//                      (3n / 2) - (4 / 2)
//                      (3n / 2) - 2

int inicializa(int *vec, int n, int *min, int *max) {
  int i = 0;
  if (n % 2 != 0) {         //não conta como comparação de elementos
    *min = vec[0];
    *max = vec[0];
    i = 1;
  }
  else {
    i = 2;
    if (vec[0] < vec[1]) {  //1
      *min = vec[0];
      *max = vec[1];
    }
    else {
      *min = vec[1];
      *max = vec[0];    
    }
  }
  return i;
}

void MinMax3(int *vec, int n, int *min, int *max) {
  int i = inicializa(vec, n, min, max);
  int menorDoPar;
  int maiorDoPar;
  //sem iniciar i; já foi inicializado com o inicializa
  for(; i < n - 1; i += 2) {        //Observe o incremento +=2.
    if(vec[i] < vec[i+1]) {         // (n-2)/2
      menorDoPar = i;
      maiorDoPar = i+1;
    }
    else {
      menorDoPar = i+1;
      maiorDoPar = i;
    }
    if(vec[menorDoPar] < *min)     // (n-2)/2
      *min = vec[menorDoPar];
    if(vec[maiorDoPar] > *max)     // (n-2)/2
      *max = vec[maiorDoPar];
  }
}


int main() {
  srand(time(NULL));   // should only be called once
  
  int n = 10;
  
  int *vec = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    vec[i] = 20 * ((double)rand() / RAND_MAX);
  }
  
  int min = 0;
  int max = 0;
  MinMax3(vec, n, &min, &max);
  printf("Min %d; Max %d\n", min, max);
  return 0;
}
