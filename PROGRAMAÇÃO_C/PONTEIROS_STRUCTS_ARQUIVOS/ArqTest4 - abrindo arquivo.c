//Leitura de arquivo
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");
  FILE *pont_arq;
  char texto_str[100];
  
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("D:/Ponteiros/ArqTeste.txt", "r");
  
  
    printf("Conte�do do arquivo:\n\n");
    // Lendo e imprimindo o conte�do do arquivo!
    //fscanf ou fgets para ler o conte�do do arquivo e mostrar no compilador!
    while (fscanf(pont_arq, "%s", &texto_str) != EOF)   // EOF - "End Of File" (fim do arquivo).
    {
        printf("%s\n", texto_str);
    }


  //fechando o arquivo
  fclose(pont_arq);
  
  getch();
  return(0);
}
