#include <stdio.h>
#include <stdlib.h>

#include "transacao.h"

Transacao* Inverte(Transacao* transacao) {
    Transacao* novaOperecao = malloc(sizeof(Transacao));
    (*novaOperecao).daConta = (*transacao).paraConta;
    (*novaOperecao).paraConta = (*transacao).daConta;
    (*novaOperecao).valor = -(*transacao).valor;
    return novaOperecao;
}

void ImprimeTransacao(Transacao* transacao) {
    printf("De: %d\n", (*transacao).daConta);
    printf("Para: %d\n", (*transacao).paraConta);
    printf("Valor: %.2f\n", (*transacao).valor);
}
