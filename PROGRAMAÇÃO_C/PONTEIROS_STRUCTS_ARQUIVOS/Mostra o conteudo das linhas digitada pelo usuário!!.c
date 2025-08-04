#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char Linha[100];
    int quant;
    int i = 0;

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("D:/Ponteiros/ArqTeste.txt", "r");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return 1;
    }

	printf("Informe a quantidade de linhas que você deseja que apareça: ");
	if(scanf("%d", &quant)!= true){
		printf("[ERROR] valor nao inválido!");
		getch();
		fclose(arq);
	}
	
    // Lê e imprime cada linha do arquivo
    while (fscanf(arq, " %[^\n]", &Linha) != EOF && i < quant)
    {
          
           printf("Linha %d: %s\n", i + 1, Linha);
		   i++;
		   
    } 


    fclose(arq);
    getch();
    return 0;
}