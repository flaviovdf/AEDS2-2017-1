#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        
    char *nomeDoArquivoDeEntrada = "entrada.txt";
    FILE *arquivoEntrada = fopen(nomeDoArquivoDeEntrada, "r");
    if (!arquivoEntrada) {
        printf("Não consegui ler o arquivo de entrada\n");
        exit(EXIT_FAILURE);
    }

    char *nomeDoArquivoDeSaida = "saida.txt";
    FILE *arquivoSaida = fopen(nomeDoArquivoDeSaida, "w");
    if (!arquivoSaida) {
        printf("Não consegui abrir o arquivo de saída\n");
        exit(EXIT_FAILURE);
    }
    
    //A partir deste momento o você pode utilizar os arquivos
    int numeroDeCasosDeTeste = 0;
    fscanf(arquivoEntrada, "%d", &numeroDeCasosDeTeste);

    int numeroLinhas;
    int numeroColunas;
    for (int casoTeste = 0; casoTeste < numeroDeCasosDeTeste; casoTeste++) {
        fscanf(arquivoEntrada, "%d %d", &numeroLinhas, &numeroColunas);

        int matriz[numeroLinhas][numeroColunas];
        for(int linhaAtual = 0; linhaAtual < numeroLinhas; linhaAtual++) {
            for(int colunaAtual = 0; colunaAtual < numeroColunas; colunaAtual++) {
                fscanf(arquivoEntrada, "%d", &matriz[linhaAtual][colunaAtual]);
            }
        }

        int normaUm = 0;
        int normaInf = 0;
        int normaFro = 0;

        //Seu código aqui. Recomendo fazer uma função para cada norma
        //normaUm = computaNormaUm(matriz);
        //...
        fprintf(arquivoSaida, "%d %d %d\n", normaUm, normaInf, normaFro);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);
    return 0;
}
