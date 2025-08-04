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
  
  //gets() � inseguro e n�o deve ser usado.
  //fgets() � a fun��o mais segura e recomendada para capturar strings, especialmente quando se deseja capturar frases completas, incluindo espa�os.
  //scanf() � �til para capturar dados formatados, mas deve ser usado com cuidado para evitar problemas de seguran�a. Para capturar strings, geralmente � a melhor escolha devido � capacidade de limitar o tamanho da entrada.fgets()
  //Ao escolher entre essas fun��es, � importante considerar a seguran�a e as necessidades espec�ficas do seu programa.

  
  //verificando a quantidade de caracteres da string frase
  tamanho=strlen(frase);
  
  //gravando caracter por caracter
  for(i=0; i < tamanho; i++)
  {
    fputc(frase[i], pont_arq);    //fputc escreve um unico caracter separado em fluxos no arquivo!!!
                                  //faz mesma fun��o que fprintf so que com caracters separados!!
  }
  
  fclose(pont_arq);
  return 0;
}

