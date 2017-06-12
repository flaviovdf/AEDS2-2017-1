#include "hashtable.h"
#include "student.h"

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int matricula = 2012182625;
  student_t *aluno = (student_t *) malloc(sizeof(student_t));
  aluno->matricula = matricula;

  hash_table_t *hashTable = createTable(100000);
  hashPut(hashTable, aluno->matricula, aluno);

  student_t *alunoRecuperado = hashGet(hashTable, matricula);
}
