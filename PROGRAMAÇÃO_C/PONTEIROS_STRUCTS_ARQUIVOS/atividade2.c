#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <conio.h>

int main (void){
	
	setlocale(LC_ALL, "");
	char letras[200];
	int i = 0;
	FILE* arq;
	
	
	printf("Informe uma quantidade de letras:\n");
	printf("Digite 0 para parar!\n");
    while(true){
		
	scanf("%c", &letras[i]);
		
	if(letras[i] == '0'){
		printf("Saíndo do laço!!\n");
		break;
	}	
		i++;
	}
	
	letras[i] = '\0'; // Termina a string com nulo
	
	
	
	
	
	arq = fopen("D:/Ponteiros/atividade2.txt", "w");
	 if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para escrita.\n");
        return 1;
    }
	
	
	
	
    i = 0;

    while (letras[i] != '\0')
    {
        fprintf(arq, "%c", letras[i]);
        i++;
    }

   
    printf("Dados salvados com sucesso!!\n");
   
    fclose(arq); // Fecha o arquivo
	
	getch();
	
	
	
	printf("conteúdo do arquivo:\n");
	arq = fopen("D:/Ponteiros/atividade2.txt", "r");
	
	
	
	while(fscanf(arq, "%c", &i) != EOF){
		
		printf("%c", i);
		
	}
	
	
	 fclose(arq); // Fecha o arquivo
	
	 getch();
	 
	return 0;
}

