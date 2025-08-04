#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{
  setlocale(LC_ALL, "");
  FILE *pont_arq;
  char c;
  int cont;
  char l;
      
  pont_arq = fopen("D:/Ponteiros/ArqTeste.txt","r");
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);
  }
  printf("Informe uma letra que voce deseja que seja mostrado no arquivo!\n");
  scanf("%c", &l);
  printf("Lendo e exibindo os dados do arquivo \n\n");
  //Faça 
  do
  {  
      //faz a leitura do caracter no arquivo apontado por pont_arq um por um dentro do laço!!
      c = fgetc(pont_arq);
      
      //exibe o caracter lido na tela
      if(c == l){
	  printf("%c" , c);    
	  } else  {
		  cont++;
	  }
	  
  }while (c != EOF);//enquanto não for final de arquivo 
  printf("\n\n");
  printf("\n\nExistem %d caracteres que não são %c.\n", cont, l);
  getch();
 
  fclose(pont_arq);//fechando o arquivo
  system("pause");//pausa na tela, somente para Windows
  return(0);
}