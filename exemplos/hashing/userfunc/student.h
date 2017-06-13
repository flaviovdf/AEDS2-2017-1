#ifndef STUDENT_H
#define STUDENT_H

typedef struct matricula {
  int codigoDisciplina;
  int ano;
  int semestre;               // 1 ou 2
  int estadoNaDisciplina;     // Cursando, aprovado...
  float nota;
} matricula_t;

typedef struct student {
  int matricula;
  char *nome;
  int estadoNoCurso;        // Graduado, trancamento...
  matricula_t *matriculas;  // Histórico do Aluno
} student_t;

#endif
