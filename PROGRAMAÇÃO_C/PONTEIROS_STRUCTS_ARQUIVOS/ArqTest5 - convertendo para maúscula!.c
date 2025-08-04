#include <ctype.h> /* função toupper */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
	setlocale(LC_ALL, "");
	int c;
	char entrada[121]; /* armazena nome do arquivo de entrada */
	char saida[121]; /* armazena nome do arquivo de saída */
	FILE* e; /* ponteiro do arquivo de entrada */
	FILE* s; /* ponteiro do arquivo de saída */
	
	
	
	/* pede ao usuário os nomes dos arquivos */
	printf("Digite o nome do arquivo de entrada: ");
	scanf("%120s",entrada);
	printf("Digite o nome do arquivo de saida: ");
	scanf("%120s",saida);
	
	
	
	/* abre arquivos para leitura */
	e = fopen(entrada, "r");
	if (e == NULL) {
		printf("Não foi possível abrir arquivo de entrada.\n");
		return 1;
	}
	
	
	/* abre arquivos para escrita */
	s = fopen(saida, "w");
	if (s == NULL) {
		printf("Não foi possível abrir arquivo de saida.\n");
		fclose(e);
		return 1;
	}
	
	
	
	/* lê da entrada e escreve na saída */
	while ((c = fgetc(e)) != EOF){   //fgetc para le
		fputc(toupper(c),s);         //fputc para escrever
	}
	
		/* fecha arquivos */
		fclose(e);
		fclose(s);
		
getch();	
return 0;
}
