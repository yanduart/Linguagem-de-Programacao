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
    
    
    
    
    
    // Solicitando ao usu�rio que insira 5 n�meros inteiros
    printf("Insira 5 n�meros inteiros:\n");
    for(i = 0; i < 5; i++)
    {
        printf("N�mero %d: ", i + 1);
        if (scanf("%d", &numeros[i]) != true)  //& armazena o numero no endere�o-posi��o da mem�ria!!
        	                                   //scanf, valor lido e digitado pelo usu�rio seja armazenado!!
        {
            printf("Entrada inv�lida. Saindo do programa.\n");
            return 1;
        }
    }

	
	
	
	
	
	
    // Solicitando ao usu�rio o nome do arquivo
    printf("Digite o nome do arquivo para armazenar os n�meros: ");
    scanf("%s", nomeArquivo); // Limita a leitura a 99 caracteres para evitar estouro de buffer

	
	
	
	
	
	
    // Abrindo o arquivo para escrita
    arq = fopen(nomeArquivo, "w");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para escrita.\n");
        return 1;
    }

	
	
	
	
	
	
	
	
	
    // Gravando os n�meros no arquivo
    for(i = 0; i < 5; i++)
    {
        fprintf(arq, "%d\n", numeros[i]);
    } //\n e para dar espa�o de uma linha no arquivo!!
    
    
    
    
    
    
    //fechando
    fclose(arq);
    printf("N�meros gravados no arquivo com sucesso.\n");
    
    

	
	
    // Abrindo o arquivo para leitura
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo para leitura.\n");
        return 1;
    }
    
    
    

    printf("Conte�do do arquivo:\n");
    // Lendo e imprimindo os n�meros do arquivo
    while (fscanf(arq, "%d", &i) != EOF)   // EOF - "End Of File" (fim do arquivo).
    {
        printf("%d\n", i);
    }
    // while fica em loop ate o fim de todo o arquivo para sair e fechar ele!!!
	
	
	
	
    fclose(arq);
    
    getch();
    return 0;
}