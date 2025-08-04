#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	FILE *arq;
	char nome[30];
	
	arq = fopen("D:/PROGRAMAÇÃO_C/PONTEIROS_STRUCTS_ARQUIVOS/Arq_Prova.txt", "a");  //w subscreve
                                                                                    //a escreve um abaixo do outro
                                                                                    //r para ler e mostrar na tela
	if(arq == NULL){
		printf("\n\n<-----Arquivo não encontrado!------>\n\n");
		exit(1);
	}
	
	printf("\n\n<---Informe seu nome para armazenar no arquivo!--->\n\n");
	printf("Nome: ");
	fgets(nome, 29, stdin);
	
	//fprintf(arq, "%s", nome);    //fprintf armazena string por inteiro
	
	int tamanho = strlen(nome);
	int i;
	for(i = 0; i<tamanho; i++){
		fputc(nome[i], arq);        //fputc maneira de armazenar letra por letra! //toupper da para usar aqui
	}
	
	if(arq != NULL){
		printf("\n\n<---Dados gravados com sucesso!--->\n\n");
	}
	
	fclose(arq);
	
	arq = fopen("D:/PROGRAMAÇÃO_C/PONTEIROS_STRUCTS_ARQUIVOS/Arq_Prova.txt", "r");
	
	if(arq == NULL){
		printf("\n\n<---Error ao tentar ler o arquivo!--->\n\n");
		exit(1);
	}
	int quant = 0;
	printf("\n\n<---dados do arquivo!--->\n\n");
	char c;
	do{
	c = fgetc(arq);	
	if(c == '\n'){
     	quant++;	
    }
                       //maneira de mostrar na tela letra por letra
	printf("%c", toupper(c));   // recomendável para colocar em maiusculo!!
	}while(c != EOF); //Enquanto for diferente de final de arquivo faça
	
	
	 /*char linha[256];
    while (fgets(linha, 200, arq) != NULL){  // fgets melhor opção para mostra o conteudo do arquivo!! na tela!!
        printf("%s", linha);
    quant++;
    }*/
	
	printf("\n\nA quantidade de linha que tem no arquivo é: %d", quant);
	fclose(arq);
	
	getch();
	return 0;
}