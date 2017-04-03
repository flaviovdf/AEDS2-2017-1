# TP1: Análise de Complexidade

Neste TP vamos entender melhor os conceitos de TADs e análise de complexidade.
Para isto, você pode fazer uso do esqueleto disponível abaixo:

  * https://github.com/flaviovdf/AEDS2-2017-1/tree/master/exemplos/banco-01

## Datas

  * Entrega: para o dia 18 de Abril

## O Problema

Sua tarefa neste TP é entender um pouco mais de complexidade de funções. Por
isto, vamos fazer uso de um esqueleto onde a maioria das funções já foram
implementadas.

Você deve baixar o esqueleto do problema do Banco acima. Com tal esqueleto,
você deve garantir que seu código do banco não seja limitado por constantes.
Em outras palavras, queremos que seja possível que o sistema do banco:

  1. Funcione com qualquer número de transações
  2. Ordene as transações por valor
  3. Ordene as transações por tempo
  4. Funcione com qualquer número de contas correntes

## Mensurando o Tempo de Execução dos Programas

Como estamos tentando entender o tempo de execução de programas, para seu TP
você deve utilizar.

```
#include <stdio.h>
#include <time.h>

void minhaFuncao() {
  //Faz algo bem complicado aqui!!
}

int main ()
{
  time_t inicio;
  time_t fim;

  inicio = time(NULL);
  minhaFuncao();
  fim = time(NULL);

  printf("A função minhaFuncao executou em XX segundos %ld\n", fim);

  return(0);
}
```

## Entrada e Saída

Seu TP deve ler entrada usando `scanf` e imprimir saída utilizando `printf`.

**Criando Contas**

```
criarconta NomeCliente NumeroConta
```
Cria a conta de um novo cliente.

Para cada conta criada seu programa deve imprimir
```
conta criada com sucesso. Operação durou 3 segundos.
```
Onde o número de segundos é determinado pela mensuração acima.

**Depositando Valores**

```
deposito NumeroConta valor
```
Deposita um valor na conta acima

Neste caso seu programa imprime:
```
Valor depositado com sucesso. Saldo é VALOR_SALDO. Operação durou 1 segundos.
```

Caso não exista conta corrente com o número acima seu programa deve imprimir:
```
Conta não existente. Operação durou 2 segundos.
```

**Sacando Valores**

```
saque NumeroConta valor
```
Saca um valor de uma conta corrente
```
Saque realizado com sucesso. Saldo é VALOR_SALDO. Operação durou 1 segundos.
```

Caso não exista conta corrente com o número acima seu programa deve imprimir:
```
Conta não existente. Operação durou 2 segundos.
```

**Transferências**

```
transfere NumeroContaDe NumeroContaPara valor
```
Transfere de uma conta corrente para outra.
```
Transferência realizada com sucesso. Saldo DE VALOR_SALDO. SaldoPara VALOR_SALDO. Operação durou 1 segundos.
```

Caso alguma das duas contas não exista seu programa deve imprimir:
```
Conta não existente. Operação durou 2 segundos.
```

## Perguntas

  1. Qual a complexidade em notação O para suas funções? Por exemplo, Saque é O(n * n). A resposta aqui é apenas um exemplo! Como vimos em sala, toda função O(n) também é O(n * n) e O(n!). Não vale aqui escolher um f(n) grande. Escolha o menor f(n) que você acha adequado para sua função.
  2. Tente fazer um gráfico no excell ou similar do tamanho da entrada da suas funções junto com o tempo de processamento da mesma. Tal gráfico é similar a função da resposta acima?
  3. Você acha que é possível achar uma conta corrente com um certo número em O(1)? Ou O(log n)?
