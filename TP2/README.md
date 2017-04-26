# TP2: Pilhas e Filas

## Datas

  * Entrega: para o dia 04 de Maio (23:59)

## A Correção da Prova de AEDS2

Tentando ser justo com os alunos, o professor de AEDS2 decidiu corrigir a
prova cada questão por vez. Isto é, primeiro ele corrigiu a primeira questão
de cada aluno, depois a segunda questão e assim sucessivamente.

Em uma prova com `n` perguntas, o professor percebeu que que precisaria
passar por cada prova de cada aluno `n` vezes. Para ajuda nesta empreitada,
o mesmo decidiu criar uma fila circular.

A fila circular funciona de forma similar a uma fila normal. Porém,
os não temos a ideia de `head` (cabeça) e `tail` (calda). O elemento final
da fila é ligado ao primeiro elemento. Para conseguir caminhar na fila sem
ficar presto em um loop eterno, precisamos guardar o número de elementos
inserido na mesma. Assim, partindo de um elemento qualquer damos `n` passos
e voltamos para o estado inicial.

## Seu TAD

A sua lista circular deve ser construída em cima de um struct como o descrito
abaixo:

```c
typedef struct node {
  int *notas;
  int matriculaDiscente;
  struct node *next;
  //respostas dos alunos. Vamos assumir uma prova de múltipla escolha
  //onde cada elemento da prova é entre a, b, c, d, ou e.
  char *respostas;
  int notaFinal;
} prova_t;

typedef struct {
  int numeroPerguntas; //n acima
  int numeroProvas;
  prova_t *primeiraProva;
} circular_t;
```

A mesma, deve suportar as seguintes operações:

```c
//Cria uma lista circular para um conjunto de provas de n perguntas
circular_t *criaListaCircularProvas(int numeroPerguntas);

//Cria uma prova nova
prova_t *criaProvaDiscente(int matriculaDiscente);

//Seta as respostas do discente
void setRespostas(prova_t *prova, char *respostas);

//Adiciona a prova de um aluno na lista circular
int inserirProva(circular_t *circular, prova_t *prova);

//Corrige a prova. Esta função deve percorrer a lista numeroPerguntas vezes
//somando +1 na notaFinal caso a resposta do aluno seja igual ao gabarito.
void corrigir(circular_t *circular, char *gabarito);

//Acha o aluno de maior nota e remove o mesmo da lista circular.
prova_t *removeDiscenteDeMaiorNota();

//Imprime a matrícula e a nota separada por espaço
void printProva(prova_t *prova);
```

## Entrada e Saída

Seu programa pode utilizar `scanf` e `printf` para entrada e saída. A primeira
coisa que seu programa deve ler é o número de alunos. O mesmo não precisa
imprimir nada, apenas ler o número de alunos.

Após isto, seu programa deve ser o número de perguntas da prova. Sabendo do
número de alunos e número de perguntas, seu programa pode ler as respostas
de cada aluno. Antes das respostas, leia a matrícula do aluno.

Para cada matrícula, uma prova tem que ser criada e inserida na lista.

Por fim, leia o gabarito da prova. Quando o gabarito for lido, imprima a nota
dos alunos em ordem crescente. Para isto, utilize a função remover prova com
maior nota.

Após corrigir a primeira prova, seu TP pode ler mais provas. O mesmo vai
terminar quando o `scanf` não conseguir mais ler (EOF ou NULL, dependendo
de como vocês estão lendo a entrada).

| *Entrada* | *Saída* |
|-----------|---------|
| 3         |         |
| 2         |         |
| 28172 a e |         |
| 22171 b c |         |
| 22144 a d |         |
| a d       |         |
|           | 22144 2 |
|           | 28172 1 |
|           | 22171 0 | 
| 4         |         |
| 1         |         |
| 31721 a   |         |
| 32171 b   |         |
| 32143 c   |         |
| 32144 d   |         |
| b         |         |
|           | 32171 1 |
|           | 31721 0 |
|           | 32143 0 | 
|           | 32144 0 | 


## Perguntas

1. Qual a complexidade de cada função do seu TP?
1. Qual a complexidade do seu TP como um todo?

## Pontos Extra

1. Faça seu TP funcionar com uma lista duplamente encadeada (1 ponto extra).
   A mesma mantém ponteiros para o próximo elemento e o elemento anterior.
