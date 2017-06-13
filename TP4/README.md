# TP4: Tries

  * Individual
  * Entrega: Domingo depois da prova

## Problema

Motivado pelos teclados de celulares, neste TP vamos fazer um sistema de auto
completação simples. O mesmo vai funcionar apenas para prefixos.

![Exemplo](exemplo.png)

Para resolver o problema o aluno deve fazer uso de um Trie. Iniciando de um
conjunto de palavas (sem acento), um Trie deve ser montado. Após a montagem do
mesmo, o seu programa deve receber como entrada uma palavra e indicar se a
mesma foi digitada corretamente. Caso não tenha sido, até 3 sugestões (de menor
tamanho em número de caracteres) devem aparecer na tela. Caso não exista
sugestões, simplesmente imprima `Sem sugestão`.

## Montando o Trie

O mesmo deve ser montado com base no arquivo abaixo. Recomendo ler linha por
linha inicialmente, depois quebrar a linha em caracteres. Cada linha é uma
palavra. Cada caractere deve ser inserido no Trie montando uma estrutura
similar à figura abaixo.

Lembre-se das aulas que um Trie é uma árvore com n-filhos. Para simplificar a
vida de todos, as palavras são compostas apenas de caracteres entre a e z.
Todos são minúsculo.

Existem várias formas de montar um Trie. Abaixo explico 2 delas. Escolha uma,
ou bole uma nova, e implemente. Não precisa implementar mais do que uma!

## Um possível struct para tries

Existem diversas formas de implementar uma árvore com n descendentes diretos.
Como temos um alfabeto limitado, uma das formas mais simples é simplesmente
colocar 26 children em cada nó:

```c
#define ALPHABET_SIZE 26

typedef struct trie_node {
  char c;
  int isEndOfWord;
  struct trie_node *children; // com ALPHABET_SIZE posições
} trie_node_t;

typedef struct trie {
  struct trie_node *firstLevel; // com ALPHABET_SIZE posições
} trie_t;
```

Acima mostro um exemplo com ponteiros, o campo seria iniciado:

```c
node->children = (trie_node_t *) malloc(ALPHABET_SIZE * sizeof(trie_node_t));
```

Neste caso, podemos achar um filho com base em um no índice fazendo:

```
A -> 0
B -> 1
C -> 2
...
```

## Outro possível struct para tries

Também seria possível implementar a Trie para um alfabeto ilimitado. Neste
caso, cada nó funciona como uma lista encadeada:

```
root
|
-> primeira_letra (c) -> segunda_letra (d) -> terceira_letra (e) -> NULL
                         |
                         -> a -> e -> i -> o -> NULL
                            |              |
                            -> d -> NULL   -> i -> NULL
                               |              |
                               -> o -> NULL   -> d -> NULL
                                                 |
                                                 -> o -> NULL
```

Acima mostro um Trie com lista encadeada exemplificando os caminhos para as
palavras `dado` e `doido`.

```c
typedef struct trie_node {
  char c;
  int isEndOfWord;
  struct *trie_node next;
  struct *trie_node headLowerLevel; // Topo da lista da cadeia abaixo
} trie_node_t;

typedef struct trie {
  trie_node_t *headFirstLevel;
} trie_t;
```

Neste caso precisamos de um for para achar um filho de um certo caractere.

## Entrada e Saída

O seu programa é simples, ele deve receber uma palavra de entrada, retornar
as sugestões (ou indicar se está correto, ou indicar que não tem sugestões).

Exemplo:
```
Digite uma palavra: doido
Palavra OK!

Digite uma palavra: dia
Sugestões: dia, diamante, diario
```

Lembre-se de mostrar apenas 3 sugestões por palavra. Se uma palavra for OK
mas também for prefixo de outros (caso de dia acima), mostre as sugestões com a
palavra.

## Perguntas

  1. Qual o custo de montar o seu Trie?
  1. Qual o custo de buscar uma palavra?
  1. Qual o custo de achar 3 sugestões?
  1. Compare as duas implementaçes acima em termos dos 2 custos acima.
