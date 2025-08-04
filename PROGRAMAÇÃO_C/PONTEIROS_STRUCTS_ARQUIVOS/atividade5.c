#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "");
	char nome[100][100];
	float salario[99];
	FILE *arq;
	int op;
	int i = 0;
	float total = 0.0;
	
	printf("-->Informe o nome e o salário de cada pessoa<--\n\n");
	while(true){
		
		
		printf("Informe o nome da %dº pessoa: ", i + 1);
		fflush(stdin); //sempre antes que for usar fgets!!!!
		fgets(nome[i], 99, stdin);
		printf("Informe o salário da %dº pessoa: ", i + 1);
		scanf("%f", &salario[i]);
		total += salario[i];
		printf("\n-->Digite 0 para parar ou 1 para continuar<--\n");
		scanf("%d", &op);
		
		if(op == 0){
			printf("Saíndo do laço!\n");
			break;
		}else {
			i++;
			continue;
		}
		
	}
	
	
	arq = fopen("D:/Ponteiros/atividade5.txt", "w");
	
	if(arq == NULL){
		printf("Error ao escrever no arquivo!");
		exit(1); // return 1
	}
	
	int j;
        fprintf(arq, "Total: %.2f\n\n", total);
  for(j = 0; j <= i; j++){
        fprintf(arq, "nome: %s--> salário: %.2f\n\n", nome[j], salario[j]);
    }
	
	
	fclose(arq);
	printf("Dados salvados com sucesso!!!\n\n");
	
	
	
	arq = fopen("D:/Ponteiros/atividade5.txt", "r");
	
	if(arq == NULL){
		printf("Error ao ler o arquivo!");
		exit(1); // return 1
	}
	
	printf("------>Conteúdo do arquivo<------\n\n");
	char linha[256];
	while(fgets(linha, 256, arq) != NULL){
		printf("%s", linha);
	}
	
	
	fclose(arq);
	
	
	getch();
	return 0;
}