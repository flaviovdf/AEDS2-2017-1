#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include "transacao.h"

#define TAMANHO_INICIAL 30
typedef Transacao Extrato[TAMANHO_INICIAL];

typedef struct {
    int numero;
    double saldo;
    Extrato extrato;
} ContaBancaria;

/*
 * Cria uma nova conta bancaria com o devido número de conta e valor de 
 * saldo.
 */
ContaBancaria* NovaConta(int, double);

/* 
 * Faz um deposito e retorna a operação que identifica este deposito
 */
Transacao* Deposito(ContaBancaria*, double);

/* 
 * Realiza um saque da conta corrente e retorna a operação que identifica o
 * saque.
 */
Transacao* Saque(ContaBancaria*, double);

/* 
 * Realiza uma transferencia entre duas contas bancarias retornando a operação
 * onde o deConta é a primeira conta e o paraConta é a segunda.
 */
Transacao* Transferencia(ContaBancaria*, ContaBancaria*, double);

void ImprimeConta(ContaBancaria*);

#endif
