# DCC004 - AEDS 2: 2017.1

Professor: Flavio Figueiredo

Monitores: 
  - edson (dcc ufmg br)
  - thiagostehling (gmail com)

Aulas: Segundas e Quartas (13:00 - 14:40)

Sala: 2008

## Conteúdo da Página

- [Aulas](#aulas)
- [Vídeos](#vídeos)
- [TP0](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/TP0/README.md)
- [TP1](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/TP1/README.md)
- [TP2](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/TP2/README.md)
- [TP3](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/TP3/README.md)
- [TP4](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/TP4/)
- [Lista1](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/listas/Lista1.md)
- [Lista2](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/listas/Lista2.md)
- [Lista3](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/listas/Lista3.md)
- [Lista4](https://github.com/flaviovdf/AEDS2-2017-1/blob/master/listas/Lista4.md)
- [Material Interessante](#material-interessante)

## Aulas

Slides também podem ser encontrados no [Google Drive](https://drive.google.com/drive/folders/0B0ryAvcYobs0RWtXV2hWeUdSUjQ)

| Aula | Data     |  Revisão AEDS-1                           | Informações                                            |
|------|----------|-------------------------------------------|--------------------------------------------------------|
|   1  | 09/03/17 |  Introdução                               | [00-Apresentação], [01-RevisaoC1], [PaP-Poscomp09]     |
|   2  | 14/03/17 |  Revisao C                                | [01-RevisaoC1]                                         |
|   3  | 16/03/17 |  Alocação Dinâmica de Memória             | [EsqueletoTP0], [02-RevisaoC2], [DrMemory-ValGrind]    |

| Aula | Data     |  Prova-1: TADs e Complexidade             | Informações                                            |
|------|----------|-------------------------------------------|--------------------------------------------------------|
|   4  | 21/03/17 |  Tipos Abstrato de Dados                  |[Maratona], [03-Modularizacao-TADs]                     |
|   5  | 23/03/17 |  Análise de Complexidade                  |[04-AnaliseComplexidade]                                |
|   6  | 28/03/17 |  Comportamento Assintótico                |[04b-MinMax3], [05-Comportamento]                       |
|   7  | 30/03/17 |  Técnicas de Análise de Algoritmos        |[06-Tecnicas], [06-ExerciciosProva1]                    |
|   8  | 04/04/17 |  Técnicas de Análise de Algoritmos        |[06-Tecnicas], [07-Recursividade]                       |
|   9  | 06/04/17 |  Recursividade (Análise)                  |[07-Recursividade]                                      |
|   10 | 18/04/17 |  *Prova 1* (era dia 11, trocada)          |                                                        |

| Aula | Data     |  Prova-2: Estruturas Básicas              | Informações                                            |
|------|----------|-------------------------------------------|--------------------------------------------------------|
|   11 | 11/04/17 |  Listas                                   | [08-Listas], [08-ExemplosListas]                       |
|      | 13/04/17 |  *Sem Aula, Feriado*                      |                                                        |
|      | 18/04/17 |  Prova 1 (ver acima. data alterada)       |                                                        |
|   12 | 20/04/17 |  Filas e Pilhas                           | [09-FilasPilhas]                                       |
|   13 | 25/04/17 |  Filas e Pilhas                           |                                                        |
|   14 | 27/04/17 |  Árvores                                  | [10-Arvores]                                           |
|   15 | 02/04/17 |  Árvores                                  |                                                        |
|   16 | 04/05/17 |  *Prova 2*                                |                                                        |

| Aula | Data     |  Prova-3: Ordenação                       | Informações                                            |
|------|----------|-------------------------------------------|--------------------------------------------------------|
|   17 | 09/05/17 |  Ordenação (Insertion, Select)            |                                                        |
|   18 | 11/05/17 |  Ordenação (Merge)                        |                                                        |
|   19 | 16/05/17 |  Ordenação (Heaps, Heap Sort)             |                                                        |
|   20 | 18/05/17 |  Ordenação (QuickSort)                    |                                                        |
|   21 | 23/05/17 |  Ordenação (Casos Lineares)               |                                                        |
|   22 | 25/05/17 |  Revisão Ordenação                        |                                                        |
|   23 | 30/05/17 |  *Ver Abaixo*                             |                                                        |
|   24 | 01/06/17 |  *Prova 3*                                |                                                        |

| Aula | Data     |  Prova-4: Busca                           | Informações                                            |
|------|----------|-------------------------------------------|--------------------------------------------------------|
|   23 | 30/05/17 |  Árvores Balanceadas (AVL)                |                                                        |
|   25 | 06/06/17 |  Árvores Balanceadas (R&B)                |                                                        |
|   26 | 08/06/17 |  Árvores N-ary (BTree, 2-3Tree, Trie)     |                                                        |
|   27 | 13/06/17 |  Hashing                                  |                                                        |
|      | 15/06/17 |                                           | *Sem aulas, feriado.*                                  |
|   28 | 20/06/17 |  Hashing Aberto                           |                                                        |
|   29 | 22/06/17 |  *Prova 4*                                |                                                        |

## Vídeos

Agradeço ao Pedro Olmo por fazer alguns dos vídeos abaixo. Os mesmos devem
ajudar vocês a configurar um ambiente para compilar os TPs.
Usuários do linux já devem ter o Gcc instalado.

**Como instalar o GCC no Windows?** [Documentação](http://homepages.dcc.ufmg.br/~olmo/Instalacao%20GCC%20e%20Textpad.pdf), [Vídeo](https://www.youtube.com/watch?v=FzPBZjkoEmA)

**Como utilizar o GCC no Windows?** [Vídeo](https://www.youtube.com/watch?v=55UX7YpRTig)

**Como instalar o CodeBlocks no Windows?** [Vídeo](http://www.youtube.com/watch?v=w2XLvEcSrgo)

## Material Interessante

**C Tutor Online** [Execução Passo a Passo de Código C](http://pythontutor.com/c.html)

[00-Apresentação]: ./slides/00-Apresentacao.pdf
[01-RevisaoC1]: ./slides/01-RevisaoC.pdf
[PaP-Poscomp09]: https://goo.gl/XoMnzc
[EsqueletoTP0]: https://github.com/flaviovdf/AEDS2-2017-1/tree/master/TP0/main.c
[02-RevisaoC2]: ./slides/02-RevisaoC2.pdf
[DrMemory-ValGrind]: https://github.com/flaviovdf/AEDS2-2017-1/tree/master/valgriddrmem

[03-Modularizacao-TADs]: ./slides/03-Modularizacao-TADs.pdf
[Maratona]: ./slides/divulgacao-maratona.pdf
[04-AnaliseComplexidade]: ./slides/04-AnaliseComplexidade.pdf
[04b-MinMax3]: ./slides/04b-MinMax3.pdf
[05-Comportamento]: ./slides/05-ComportamentoAssintotico.pdf
[06-Tecnicas]: ./slides/06-Tecnicas.pdf
[06-ExerciciosProva1]: https://github.com/flaviovdf/AEDS2-2017-1/blob/master/listas/Lista1.md
[07-Recursividade]: ./slides/07-Recursividade.pdf
[08-Listas]: ./slides/08-Listas.pdf
[09-FilasPilhas]: ./slides/09-FilasPilhas.pdf
[10-Arvores]: ./slides/10-Arvores.pdf
[08-ExemplosListas]: https://github.com/flaviovdf/AEDS2-2017-1/tree/master/exemplos/listas
