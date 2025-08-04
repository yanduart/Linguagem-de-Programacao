#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (void){
	
  int i;
  setlocale(LC_ALL, "");
  struct cliente{
	  
	  char nome[50][50];
	  char e_mail[60][60];
	  float renda_mensal[40];
  };
	
	struct cliente dados_cliente[10];
	
	for(i = 0; i<10; i++){
		printf("Informe o nome do %dº cliente: ", i + 1);
		fflush(stdin);
		fgets(&dados_cliente[i].nome[i], 49, stdin);
		printf("Informe o e-mail do %dº cliente: ", i + 1);
		fflush(stdin);
		fgets(&dados_cliente[i].e_mail[i], 59, stdin);
		printf("Informe a renda mensal do %dº cliente: ", i + 1);
		scanf("%f", &dados_cliente[i].renda_mensal[i]);
	}
	
	
	for(i=0; i<10; i++){
		printf("\nNome do %dº cliente: %s--> e-mail: %s--> renda_mensal: %.2f\n", i + 1, dados_cliente[i].nome[i], dados_cliente[i].e_mail[i], dados_cliente[i].renda_mensal[i]);
		
	}
	
	
	getch();
	return 0;
}