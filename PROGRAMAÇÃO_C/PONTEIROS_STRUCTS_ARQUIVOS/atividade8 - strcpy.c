#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL, "");
    char cod[5][20];
    char cod1[5][20];
    int itens[5];
    int itens1[5];
    float preco[5];
    float preco1[5];
    char nome[5][20];
    char nome1[5][20];
    int i, count = 0;
    
    for(i = 0; i < 5; i++){
        printf("Informe o nome do %dº produto: ", i + 1);
        fflush(stdin); // Tenta limpar o buffer de entrada
        fgets(nome[i], 20, stdin);
        
        printf("Informe o código do %dº produto: ", i + 1);
        fflush(stdin); // Tenta limpar o buffer de entrada
        fgets(cod[i], 20, stdin);
        
        printf("Informe a quantidade do %dº produto: ", i + 1);
        fflush(stdin);
        scanf("%d", &itens[i]);
        
        printf("Informe o preço do %d° produto: ", i + 1);
        fflush(stdin);
        scanf("%f", &preco[i]);
        
        printf("\n\n");
    }
    
    for(i = 0; i < 5; i++){
        if(preco[i] >= 80.00){
            strcpy(nome1[count], nome[i]); // strcpy Copia a string completa de um vetor ao outro
            strcpy(cod1[count], cod[i]);   // Copia a string completa   
            itens1[count] = itens[i];
            preco1[count] = preco[i];
            count++;
        }
    }
    
    printf("\n\n----->Produtos com o preço superior a R\$80.00<-----\n\n");
    
    for(i = 0; i < count; i++){
        printf("Nome: %s--> Código: %s--> Quantidade: %d\n--> Preço: %.2f\n\n", nome1[i], cod1[i], itens1[i], preco1[i]);
    }
    
    return 0;
}
