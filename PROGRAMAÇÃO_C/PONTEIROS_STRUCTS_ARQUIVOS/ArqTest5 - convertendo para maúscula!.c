#include <ctype.h> /* fun��o toupper */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
	setlocale(LC_ALL, "");
	int c;
	char entrada[121]; /* armazena nome do arquivo de entrada */
	char saida[121]; /* armazena nome do arquivo de sa�da */
	FILE* e; /* ponteiro do arquivo de entrada */
	FILE* s; /* ponteiro do arquivo de sa�da */
	
	
	
	/* pede ao usu�rio os nomes dos arquivos */
	printf("Digite o nome do arquivo de entrada: ");
	scanf("%120s",entrada);
	printf("Digite o nome do arquivo de saida: ");
	scanf("%120s",saida);
	
	
	
	/* abre arquivos para leitura */
	e = fopen(entrada, "r");
	if (e == NULL) {
		printf("N�o foi poss�vel abrir arquivo de entrada.\n");
		return 1;
	}
	
	
	/* abre arquivos para escrita */
	s = fopen(saida, "w");
	if (s == NULL) {
		printf("N�o foi poss�vel abrir arquivo de saida.\n");
		fclose(e);
		return 1;
	}
	
	
	
	/* l� da entrada e escreve na sa�da */
	while ((c = fgetc(e)) != EOF){   //fgetc para le
		fputc(toupper(c),s);         //fputc para escrever
	}
	
		/* fecha arquivos */
		fclose(e);
		fclose(s);
		
getch();	
return 0;
}
