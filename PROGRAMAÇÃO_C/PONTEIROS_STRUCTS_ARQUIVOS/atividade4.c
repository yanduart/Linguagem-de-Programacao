#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "");
	FILE *arq;
	struct medico {
		int tempo_servico_ano[10];
		char especialidade_medica[10][40];	
	};
	
	
	struct medico historico_medico[10];
	
	int i;
	for(i = 0; i<10; i++){
		printf("Informe o tempo de servi�o do m�dico %i em anos: ", i + 1);
		scanf("%d", &historico_medico[i].tempo_servico_ano[i]);
		fflush(stdin);
		printf("Infome a especialidade do m�dico %i: ", i + 1);
		fgets(&historico_medico[i].especialidade_medica[i], 39, stdin);
	}
	
	
	arq = fopen("D:/PROGRAMA��O_C/PONTEIROS_STRUCTS_ARQUIVOS/atividade4.txt", "w");
	
	if(arq == NULL){
		printf("Arquivo n�o encontrado!!");
		exit(1); //ou return 1!!
	}
	
	
	for(i = 0; i<10; i++){
		if(i == 0){
			fprintf(arq, "-----Tabela dos m�dicos-----\n\n");
		}
		fprintf(arq, "tempo de servi�o do %d� m�dico em anos: %d\n", i + 1 ,historico_medico[i].tempo_servico_ano[i]);
		fprintf(arq, "especialidade do %d� m�dico: %s\n", i + 1, historico_medico[i].especialidade_medica[i]);
	}
	
	fclose(arq);
	
	arq = fopen("D:/PROGRAMA��O_C/PONTEIROS_STRUCTS_ARQUIVOS/atividade4.txt", "r");
	
	if(arq == NULL){
		printf("Arquivo n�o encontrado!!");
		exit(1); //ou return 1!!
	}
	
	printf("\n");
	
    char linha[256];
    while (fgets(linha, 256, arq) != NULL){  // fgets melhor op��o para mostra o conteudo do arquivo!! na tela!!
        printf("%s", linha);
    } 
    
   	
	fclose(arq);
	
	getch();
	return 0;
}