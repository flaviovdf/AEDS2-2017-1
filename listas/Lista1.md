**Universidade Federal de Minas Gerais**

**Disciplina: DCC065 - Sistemas Operacionais**

**Professor: Flavio Vinicius Diniz de Figueiredo**

# Lista de Exercícios - Prova 1

## TADs

1. Crie um Tipo Abstrato de Dados para Matrizes. Implemente as funções de
   inicializar a matriz (toda zerada), computar a soma de duas matrizes,
   subtração de duas matrizes e o determinante de uma matriz quadrada. Seu
   programa pode indicar um erro caso a matriz passada para o determinante não
   seja quadrada.

   * Indique a complexidade de todas as funções
   * Justifique as assinaturas de cada função

1. Crie um TAD para pontos em um espaço $n$-dimensional (Euclidean space).
   Implemente funções para inicializar um ponto, computar a distância entre
   dois pontos, a norma de dois pontos, o ângulo dos pontos e rotacionar o
   espaço.

   * https://en.wikipedia.org/wiki/Euclidean_space
   * https://en.wikipedia.org/wiki/Rotation_matrix
   * Indique a complexidade de todas as funções
   * Justifique as assinaturas de cada função

## Revisão C + Complexidade

1. Escreva um algoritmo que determina se um número inteiro é primo. Qual
   é a complexidade do seu algoritmo?

1. Escreva um que aproxima o logaritmo de um número inteiro para um número
   outro inteiro cujo valor é próximo do log real. Isto é, arredonde o valor
   de log para cima ou para baixo. Por exemplo log<sub>3</sub>10 = 2.09. 
   Você pode retornar 2 ou 3. Qual a complexidade da sua função?
   
   ```c
   int myLogTosco(int number, int power)
   ```
   
   Não utilize a `math.h` ou qualquer biblioteca externa. Código C apenas.
   
1. Escreva uma função que retorna os *x* menores números de um vetor. Quando
   *x=1*, retornamos apenas o menor número. Quando *x=2* retornamos os dois
   menores. Qual a complexidade da sua função?

   ```c
   int nSmallest(int *vec, int n, int x)
   ```
   
   n é número de elementos no vetor.
   
1. Escreva um algoritmo que compacta uma string. A compactação de uma string
   é uma operação que simplesmente conta o número de ocorrências de letras na
   string retornando uma nova string de tamanho menor. Por exemplo, a string:

   ``` aaaaabcdddeeeffffff   abc```

   É compactada para:

   ```a5b1c2d3e3f6 3a1b1c1```

   Sua função deve ter uma assinatura como:

   ```c
   char *compact(char *string)
   ```

   Escreva também a função inversa

   ```c
   char *descompact(char *string)
   ```

   Indique a complexidade das duas funções em termos do tamanho das strings.

1. Implemente uma função que recebe como entrada um vetor de números inteiros,
   `vec`, o tamanho do mesmo `n`, junto com um número inteiro `target`. Sua
   função deve indicar se no vetor `vec` existem dois elementos cuja soma é
   `target`. Por exemplo:

   ```
   vec = [10, 20, 3, 45, 0]
   target = 65
   return 1 //45 + 20 = 65
   ```

   ```
   vec = [10, 20, 3, 45, 0]
   target = 29
   return 0 //não existem tais elementos
   ```

   Assinatura:
   ```c
   int existeSoma(int *vec, int n, int target)
   ```

   Qual a complexidade da sua função?

1. Escreva uma função que inverte as palavras de uma string. Por exemplo:

   ```
   Alice Likes Bob
   ```
   é convertido para
   ```
   Bob Likes Alice
   ```

   Assinatura:
   ```c
   char *invertWords(char *string)
   ```

   Para auxiliar seu método, pode utilizar `strtok` da `string.h`.
   Sua função funciona quando mais de um espaço entre palavras é inserido?
   Qual a complexidade da sua função?

1. Escreva uma função para encontrar o local de início de fim de uma
   substring string dentro de outra string. A assinatura da função é:

   ```c
   void subPosition(char *text, char *sub, int *start, int *end)
   ```

   Para uma entrada:

   ```c
   char *sub = "muito";
   char *texto = "Eu gosto muito de AEDS2";
   ```

   Seu método deve retornar:

   ```c
   *start = 9;
   *end = 13;
   ```

   Qual a complexidade da sua função?

## Complexidade

1. Para cada uma das afirmativas abaixo, diga se a afirmativa é verdadeira (V)
   ou falsa (F). Em todas as afirmativas, justifique a sua resposta. Respostas
   sem justificativa não serão consideradas.

   1. Considere um programa P que faz uma série de operações de custo
      constante, chama uma função F1 com complexidade dada por *f(n)* e depois
      chama uma função F2 com complexidade dada por *g(n)*, onde
      *g(n) = 1000 f(n)*. Pode-se afirmar que o programa P é **O(f(n))**.

   1. Considere um programa cuja função de complexidade é *f(n) = 3 log(n)*.
      É correto afirmar que esse programa é **O(log n)**, mas não é
      **O(n<sup>2</sup>)**.

   1. Um programa P executa uma função F1 com complexidade *f(n)* em 50% de suas
      n interações, e uma função F2 com complexidade *g(n)* nas demais
      interações. Portanto, o programa P tem complexidade
      **O(Max (O(f(n), O(g(n)))**.

   1. Sejam duas funções de complexidade *g(n) = 5(n<sup>2</sup>) + 3n + 4* e
      *f(n) = 95n<sup>2</sup>* + n + 15. É correto afirmar que um programa P1
      cuja complexidade é g(n) é mais rápido que um programa P2, com
      complexidade f(n).

1. Considerando que 0 < ε < 1 < c, indique para cada par de expressões (A, B)
   na tabela abaixo, se A é **Ο**, **Ω**, ou **Θ** de B. Justifique suas
   respostas.

   | A                          | B                                 | Complex |
   |----------------------------|-----------------------------------|----------
   | *n*                        | *3n*                              | **Θ**   |
   | *n<sup>2</sup>*            | *n*                               | **Ο**   |
   | *n*                        | *n<sup>3</sup>*                   | **Ω**   |
   | *n<sup>4</sup> + n  + 100* | *n<sup>3</sup> + 100<sup>4</sup>* | **?**   |
   | *2<sup>n</sup>*            | *3<sup>n/2</sup>*                 | **?**   |
   | *c<sup>ε</sup>*            | *(c+1)<sup>ε</sup>*               | **?**   |
   | *log(n)*                   | *sqrt(log(n))*                    | **?**   |
