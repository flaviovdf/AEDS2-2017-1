#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "trie.h"

int main(void) {
  char *nomeDoArquivoDeEntrada = "palavras-port.txt";
  FILE *arquivoEntrada = fopen(nomeDoArquivoDeEntrada, "r");
  if (!arquivoEntrada) {
    printf("Não consegui ler o arquivo de entrada\n");
    exit(EXIT_FAILURE);
  }

  size_t bufferSize = 32; // Todas as palavras tem menos de 32 chars
  size_t lineSize;
  char* line = (char *)malloc(bufferSize * sizeof(char));;
  assert(line != NULL);

  size_t i = 0;
  while ((lineSize = getline(&line, &bufferSize, arquivoEntrada)) != -1) {
    // Comente ou apague os printfs para fazer seu TP
    // Recomendo apagar
    // O size é o tamanho da palavra +1 por causa do fim de linha
    printf("Li uma linha de %d chars, %s\n", (int)lineSize, line);
    for (i = 0; i < strlen(line); i++) { // Caminha char a char na string
      // Insira no Trie a partir Daqui!!
      printf("%c", line[i]);
    }
    // Marque aqui o fim de palavra no Trie
    printf("\n");
  }

  // Resto do TP

  fclose(arquivoEntrada);
  return 0;
}
