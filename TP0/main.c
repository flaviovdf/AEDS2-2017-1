#include <stdio.h>
#include <stdlib.h>

/*
 * Argc indica quantos argumentos serão passados para a função. Argv
 * são os argumentos em si.
 */
int main(int argc, char **argv)
{
    //Lembre-se que argv[0] é o nome do programa
    if (argc < 3) {
        printf("Você não passou o arquivo de entrada e/ou o de saída\n");
        exit(EXIT_FAILURE);
    }
    
    char *nomeDoArquivoDeEntrada = argv[1];
    FILE *arquivoEntrada = fopen(nomeDoArquivoDeEntrada, "r");
    if (!arquivoEntrada) {
        printf("Não consegui ler o arquivo de entrada\n");
        exit(EXIT_FAILURE);
    }

    char *nomeDoArquivoDeSaida = argv[2];
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
