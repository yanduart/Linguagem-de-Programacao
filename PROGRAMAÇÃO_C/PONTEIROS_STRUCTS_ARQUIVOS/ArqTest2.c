#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  FILE *pont_arq;
  char frase[50];
  int i;
  int tamanho;
  
  pont_arq = fopen("D:/Ponteiros/ArqTest2.txt","w");
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);  // usa tbm o return 1
  }
  
    printf("Digite a frase a ser gravada no arquivo: ");
    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        printf("[ERROR!] Erro ao ler a entrada.\n");
        fclose(pont_arq);
        exit(1);
    } else {
		printf("Arquivo gravado com sucesso!");
		getch();
	}
  
  //gets() é inseguro e não deve ser usado.
  //fgets() é a função mais segura e recomendada para capturar strings, especialmente quando se deseja capturar frases completas, incluindo espaços.
  //scanf() é útil para capturar dados formatados, mas deve ser usado com cuidado para evitar problemas de segurança. Para capturar strings, geralmente é a melhor escolha devido à capacidade de limitar o tamanho da entrada.fgets()
  //Ao escolher entre essas funções, é importante considerar a segurança e as necessidades específicas do seu programa.

  
  //verificando a quantidade de caracteres da string frase
  tamanho=strlen(frase);
  
  //gravando caracter por caracter
  for(i=0; i < tamanho; i++)
  {
    fputc(frase[i], pont_arq);    //fputc escreve um unico caracter separado em fluxos no arquivo!!!
                                  //faz mesma função que fprintf so que com caracters separados!!
  }
  
  fclose(pont_arq);
  return 0;
}

