#include "hashtable.h"
#include "student.h"

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int studentHash(void *data) {
  student_t *student = (student_t *) data;
  return student->matricula;
}

int main(void) {
  int matricula = 2012182625;
  student_t *aluno = (student_t *) malloc(sizeof(student_t));
  aluno->matricula = matricula;

  hash_table_t *hashTable = createTable(100003, studentHash);
  hashPut(hashTable, aluno, "João");

  char *nomeNaTable = hashGet(hashTable, aluno);
  assert(strcmp(nomeNaTable, "João") == 0);
}
