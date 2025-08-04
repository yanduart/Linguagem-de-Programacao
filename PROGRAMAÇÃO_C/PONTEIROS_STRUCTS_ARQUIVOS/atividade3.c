#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <conio.h>

int main(void){
    setlocale(LC_ALL, "");
    char nome[100][100]; // Array para armazenar até 100 nomes de produtos 
    // primeira array numero de posiçoes, segunda quantidade de letras que deve conter cada posição!!
    float preco[100];    // Array para armazenar até 100 preços de produtos
    FILE *arq;
    int num;
    int i = 0;
    float total = 0.0;
    int j;

    printf("Informe 0 para parar!!\n\n");

    while(true){
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome[i]);
		
		

        printf("Digite o preço do produto: ");
        if (scanf("%f", &preco[i]) != 1) {
            printf("Entrada inválida. Por favor, tente novamente.\n");
            
            
            // Limpa o buffer de entrada
            //while (getchar() != '\n');
            fflush(stdin); //limpar o buffer porem nao e uma alternativa boa!!
            continue;
        }

        total += preco[i];

        printf("\nInforme 1 para continuar ou 0 para parar: ");
        if (scanf("%i", &num) != 1) {
            printf("Entrada inválida. Por favor, tente novamente.\n");
            // Limpa o buffer de entrada
            //while (getchar() != '\n');
            fflush(stdin); //
            continue;
        }

        if(num == 0){
            printf("Saindo do laço!!\n");
            break;
        }

        i++;
        
        
        if(i >= 100){
            printf("Limite de produtos atingido.\n");
            break;
        }
    }

    arq = fopen("D:/Ponteiros/atividade3.txt", "w");
    if (arq == NULL){
        printf("Problemas na abertura do arquivo para escrita.\n");
        return 1;
    }

	
	
    fprintf(arq, "Total: %.2f\n", total);
    fprintf(arq, "Lista de Produtos:\n");
    for(j = 0; j <= i; j++){
        fprintf(arq, "%s - %.2f R$\n", nome[j], preco[j]);
    }

    fclose(arq);

    printf("Dados gravados no arquivo com sucesso.\n");

	arq = fopen("D:/Ponteiros/atividade3.txt", "r");
	printf("\n\nConteúdo do arquivo: \n");
	
	
    char linha[256];
    while (fgets(linha, sizeof(linha), arq) != NULL){
        printf("%s", linha);
    }
	
	fclose(arq);
	
	
    getch();
    return 0;
}