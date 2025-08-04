#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclua para usar strcpy

typedef struct Lista {
    int codProduto[5];
    char nomeProduto[5][50]; // Aumentado para 50 para acomodar nomes maiores
    float valor[5];
    int qtdEstoque[5];
    int qtd;
} Lista;


Lista* cria_lista(){
	Lista* lista_produto = (Lista*) malloc(sizeof(Lista));
	int i;
	for(i = 0; i<5; i++){
		lista_produto->codProduto[i] = 0;
		strcpy(lista_produto->nomeProduto[i], "");
		lista_produto->valor[i] = 0.0;
		lista_produto->qtdEstoque[i] = 0;
	}
	lista_produto->qtd = 0;
	return lista_produto;
}

exibir_lista(Lista* lista_produto){
	if(lista_produto == NULL){
		printf("Error! lista nao existe!");
		return 0;
	}
	int i;
		if(lista_produto->qtd == 0){
			printf("<-----Lista vazia!----->\n\n");
			return 0;
			
		}else{
			printf("<-----Lista cheia!----->\n\n");
		}
		
	
    for(i = 0; i<5; i++){
    	printf("Produto %d->\n", i + 1);
		printf("codProduto: %d\n", lista_produto->codProduto[i]);
		printf("nomeProduto: %s", lista_produto->nomeProduto[i]);
		printf("valor: %.2f\n", lista_produto->valor[i]);
		printf("qtdEstoque: %d\n", lista_produto->qtdEstoque[i]);
		printf("\n");
	}
	
}

/*exibir_valores_iniciais(Lista* lista_produto){
	lista_produto->codProduto[0] = 6;
	strcpy(lista_produto->nomeProduto[0], "Produto A");
	lista_produto->valor[0] = 67.6;
	lista_produto->qtdEstoque[0] = 8;
}
*/

exibir_valores_usuario(Lista* lista_produto){
	int i;
	lista_produto->qtd = 5;
	printf("\n\n<--adicionando valores na lista-->\n\n");
	for(i = 0; i<lista_produto->qtd; i++){
		printf("Produto %d:\n", i + 1);
		printf("codProduto: ");
		fflush(stdin);
		scanf("%d", &lista_produto->codProduto[i]);
		printf("nomeProduto: ");
		fflush(stdin);
		fgets(&lista_produto->nomeProduto[i], 49, stdin);
		printf("valor: ");
		fflush(stdin);
		scanf("%f", &lista_produto->valor[i]);
		printf("qtdEstoque: ");
		fflush(stdin);
		scanf("%d", &lista_produto->qtdEstoque[i]);
		printf("\n");
	}
}
	
exibir_produto_maior_valor(Lista* lista_produto){
	int i;
	int indice_maior = 0;
	int temp = lista_produto->valor[0];
	lista_produto->qtd = 5;
	for(i = 0; i<lista_produto->qtd; i++){
		if(lista_produto->valor[i] > temp){
			temp = lista_produto->valor[i];
			indice_maior = i;
		}
	}
	return indice_maior;
}

exibir_temp(Lista* lista_produto){
	int temp1 = exibir_produto_maior_valor(lista_produto);
	printf("\n\n<-----exibindo o produto de maior valor----->\n\n");
	printf("Produto %d->\n", temp1 + 1);
    printf("codProduto: %d\n", lista_produto->codProduto[temp1]); 
	printf("nomeProduto: %s", lista_produto->nomeProduto[temp1]);
	printf("valor: %.2f\n", lista_produto->valor[temp1]);
	printf("qtdEstoque: %d\n", lista_produto->qtdEstoque[temp1]);
}	
	
	
int main(){
	setlocale(LC_ALL, "");
	Lista* lista_produto = cria_lista();
	if(lista_produto == NULL){
		printf("Lista nao existe!");
		return 0;
	}
	
	exibir_lista(lista_produto);
	
	//exibir_valores_iniciais(lista_produto);
	
	exibir_valores_usuario(lista_produto);
	exibir_lista(lista_produto);
	
	//exibir_produto_maior_valor(lista_poduto);
	exibir_temp(lista_produto);
	
	free(lista_produto);
	return 0;
}