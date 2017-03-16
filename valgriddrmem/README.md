Valgrind
========

  1. http://cs.ecs.baylor.edu/~donahoo/tools/valgrind/
  1. http://pages.cs.wisc.edu/~bart/537/valgrind.html
  1. http://www.burningcutlery.com/derek/docs/drmem-CGO11.pdf

```
valgrind -tool=memcheck --tool=callgrind --leak-check=full --track-origins=yes --show-reachable=yes --track-fds=yes ./meu_programa
```

DrMemory
========

Alternativa ao valgrind para windows.

  1. http://www.drmemory.org/

```
drmemory -check_uninitialized -results_to_stderr -show_reachable -- ./meu_programa
```

Exemplos
========

*Primeiro Exemplo: Illegal Read*

Dois problemas aqui:

  1. Lendo na posição errada
  2. Sem free!

```c
#include <stdlib.h>

void f(void)
{
  int* x = malloc(10 * sizeof(int));
  x[10] = 0;        
}                

int main(void)
{
 f();
 return 0;
}
```

*Segundo Exemplo: Illegal Free*

Um erro aqui, 2 frees.

```c
#include <stdlib.h>
int main(void) {
  int *data = malloc(10 * sizeof(int));
  free(data);
  free(data);
  return 0;
}
```

*Terceiro Exemplo: Acesso para Null*

Dois erros:
   1. Depois de virar null não posso desalocar
   2. Acesso errado

```c
#include <stdlib.h>
int main(void) {
  //Dois erros aqui
  int *data = malloc(10 * sizeof(int));
  data = NULL;
  data[2] = 20;
  return 0;
}
```

*Quarto Exemplo: Não Inicializado*

```c
#include<stdio.h>
int main(void) {
  int x;
  printf ("x = %d\n", x);
}
```

Olhem os erros do DrMemory e/ou Valgrid para cada código acima!

Mac Users
=========

Compilem com `gcc -m32`, dr memory não gosta de 64 bits no mac.
