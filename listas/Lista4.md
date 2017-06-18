**Universidade Federal de Minas Gerais**

**Disciplina: DCC002 - Algoritmos e Estrutura de Dados 2**

**Professor: Flavio Vinicius Diniz de Figueiredo**

# Lista de Exercícios - Prova 4

## Árvores AVL

1. Dada uma árvore AVL inicialmente vazia, insira as chaves 0,2,4,6,8 nessa ordem
   nela e desenhe a árvore depois de cada operação (faça o splay a cada operação).
1. Escreva o código de uma rotação para a esquerda. O mesmo deve receber apenas um
   nó. Use ponteiros para cima no seu struct.
1. Imagine que você tem o seguinte vetor [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
   e quer inseri-los numa árvore AVL inicialmente vazia de forma a evitar rotações.
   Note que se você inserir nessa ordem, a árvore começa a pesar para a direita e as
   rotações inevitavelmente acontecem. Voce teria alguma idéia para inserir esses
   elementos na árvore AVL de forma a evitar qualquer rotação? Se sim, descreva sua idéia.

## Árvores Preto e Vermelho

1. Insira os seguintes valores em uma árvore PV inicialmente vazia e mostre a
   árvore (incluindo a cor dos nós) após cada operação: 41, 38, 31, 12, 19, 8.
1. Implemente um algoritmo recursivo que retorna a quantidade de nós pretos em
   uma árvore PV
1. Para cada propriedade de árvore PV, implemente um algoritmo que verifica cada
   uma (true se a propriedade é respeitada, false se não).
   
## Árvores B

1. Considerando a ordem alfabética, mostre o resultado da inserção dos elementos F,S,Q,K,C,L,H,T,V,W,M,R,N,P,A,B,X,Y,D,Z,E nessa ordem, em uma árvore B 2-3 inicialmente vazia. Desenhe a árvore após a inserção de cada elemento. Qual a altura da árvore resultante? Caso a ordem da árvore fosse 7, qual seria a altura da árvore resultante?
1. Escreva um método que acha o maior elemento de uma árvore B.
1. Escreva um método que acha o menor elemento de uma árvore B.

## Hashing

1. Qual é a vantagem mais significativa do uso de tabelas hash em relação as
   outras estruturas de dados?
2. Desenhe uma tabela hash com endereçamento aberto e tamanho 9 (com probing linear).
   Use a função de hash "f(k)=k%9". Insira as chaves: 5, 29, 20, 0, 27 and 18 na tabela
   nessa ordem e mostre o estado final da tabela após executar todas as operações.
3. Você planeja inserir 1000 itens em uma tabela hash e quer um número médio de 2 acessos
   em uma busca com sucesso. Qual o tamanho do array interno que voce pode utilizar considerando
   que a tabela tem endereçamento fechado e usa chaining para resolver os conflitos?
