#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char Linha[100];
    int quant = 0;  // Inicializa a variável de contagem

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("D:/Ponteiros/ArqTeste.txt", "r");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return 1;
    }

    // Lê e imprime a quantidade de linhas do arquivo!
    while (fscanf(arq, " %[^\n]", &Linha) != EOF)
    {
        quant++;
        // Limpa o caractere de nova linha restante no buffer
        fgetc(arq);
    } 

    printf("A quantidade de linhas no arquivo é: %d\n", quant);

    fclose(arq);
    getch();
    return 0;
}