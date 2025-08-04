#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
    FILE *arq;
    int i;
	
	
	
	// Abrindo o arquivo para leitura
    arq = fopen("D:/Ponteiros/atividade1.txt", "r");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para leitura.\n");
        return 1;
    }
    
    
    
    printf("Conteúdo do arquivo:\n");
    // Lendo e imprimindo os números do arquivo
   /* while (fscanf(arq, "%d", &i) != EOF)   // EOF - "End Of File" (fim do arquivo).
    {
        printf("%d\n", i);
    }
   */
   
    char linha[256];
    while (fgets(linha, 200, arq) != NULL){  // fgets melhor opção para mostra o conteudo do arquivo!! na tela!!
        printf("%s", toupper(linha), linha);
    }
    
    
   
    fclose(arq);
    
	
	getch();
	return 0;
}