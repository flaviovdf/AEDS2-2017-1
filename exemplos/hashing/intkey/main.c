#include "hashtable.h"

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int matricula = 2012182625;
  char *aluno = "Flavio F";

  // Valor pequeno e par para gerar colisoes
  // Mude para um valor primo de tamanho razoável
  hash_table_t *hashTable = createTable(2);
  hashPut(hashTable, matricula, aluno);

  char *alunoRecuperado = hashGet(hashTable, matricula);
  assert(strcmp(aluno, alunoRecuperado) == 0); // Se False código explode

  hashPut(hashTable, 332234, "Uhul!");
  assert(strcmp("Uhul!", hashGet(hashTable, 332234)) == 0);

  hashPut(hashTable, 332236, "Uhul2!");
  assert(strcmp("Uhul2!", hashGet(hashTable, 332236)) == 0);

  assert(strcmp("Uhul2!", hashRemove(hashTable, 332236)) == 0);
  assert(hashRemove(hashTable, 332236) == NULL);

  assert(strcmp("Uhul!", hashRemove(hashTable, 332234)) == 0);
  assert(hashRemove(hashTable, 332234) == NULL);
}
