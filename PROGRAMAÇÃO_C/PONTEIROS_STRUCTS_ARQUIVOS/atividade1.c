#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    int numeros[5];
    char nomeArquivo[100];
    int i;
    
    
    
    
    
    // Solicitando ao usuário que insira 5 números inteiros
    printf("Insira 5 números inteiros:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Número %d: ", i + 1);
        if (scanf("%d", &numeros[i]) != true)  //& armazena o numero no endereço-posição da memória!!
        	                                   //scanf, valor lido e digitado pelo usuário seja armazenado!!
        {
            printf("Entrada inválida. Saindo do programa.\n");
            return 1;
        }
    }

	
	
	
	
	
	
    // Solicitando ao usuário o nome do arquivo
    printf("Digite o nome do arquivo para armazenar os números: ");
    scanf("%s", nomeArquivo); // Limita a leitura a 99 caracteres para evitar estouro de buffer

	
	
	
	
	
	
    // Abrindo o arquivo para escrita
    arq = fopen(nomeArquivo, "w");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para escrita.\n");
        return 1;
    }

	
	
	
	
	
	
	
	
	
    // Gravando os números no arquivo
    for(i = 0; i < 5; i++)
    {
        fprintf(arq, "%d\n", numeros[i]);
    } //\n e para dar espaço de uma linha no arquivo!!
    
    
    
    
    
    
    //fechando
    fclose(arq);
    printf("Números gravados no arquivo com sucesso.\n");
    
    

	
	
    // Abrindo o arquivo para leitura
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para leitura.\n");
        return 1;
    }
    
    
    

    printf("Conteúdo do arquivo:\n");
    // Lendo e imprimindo os números do arquivo
    while (fscanf(arq, "%d", &i) != EOF)   // EOF - "End Of File" (fim do arquivo).
    {
        printf("%d\n", i);
    }
    // while fica em loop ate o fim de todo o arquivo para sair e fechar ele!!!
	
	
	
	
    fclose(arq);
    
    getch();
    return 0;
}