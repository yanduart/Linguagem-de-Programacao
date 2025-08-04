#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclua para usar strcpy

typedef struct Lista {
    int codProduto;
    char nomeProduto[50]; // Aumentado para 50 para acomodar nomes maiores
    float valor;
    int qtdEstoque;
} Lista;

// Função para criar a lista
Lista* cria_lista() {
    Lista* lista_produto = (Lista*) malloc(5 * sizeof(Lista)); // Aloca memória para 5 produtos
    
    if(lista_produto != NULL){
    	int i;
        for(i = 0; i < 5; i++){
            lista_produto[i].codProduto = 0;
            strcpy(lista_produto[i].nomeProduto, ""); // Inicializa a string como vazia
            lista_produto[i].valor = 0.0;
            lista_produto[i].qtdEstoque = 0;
        }
    }
    return lista_produto;
}

// Função para exibir a lista
 exibir_lista(Lista* lista_produto){
    if(lista_produto == NULL){
        printf("Erro: Lista não alocada!\n");
        return;
    }
    
    int vazia = 1;
    int i;
    for(i = 0; i < 5; i++) {
        if(lista_produto[i].qtdEstoque == 0){
            vazia = 0;
            break;
        }
    }
    
    if(vazia == 0){
        printf("Lista vazia!\n\n");
    } else {
        printf("\n\nConteúdo da lista:\n\n");
        int i;
        for(i = 0; i < 5; i++) {
        	printf("Produto: %d\n", i + 1);
            printf("codProduto: %d\n", lista_produto[i].codProduto);
            printf("nomeProduto: %s", lista_produto[i].nomeProduto);
            printf("valor: %.2f\n", lista_produto[i].valor);
            printf("qtdEstoque: %d\n", lista_produto[i].qtdEstoque);
            printf("\n");
        }
    }
}

valores_produtos(Lista* lista_produto){
	   // Exemplo de adição de produtos
	   int i = 0;
	   for(i; i<5; i++){
		   printf("Informe o código do produto: %d ", i + 1);
		   fflush(stdin);
		   scanf("%d", &lista_produto[i].codProduto);
		   printf("Informe o nome do produto: %d ", i + 1);
		   fflush(stdin);
		   fgets(&lista_produto[i].nomeProduto, 19, stdin);
		   printf("Informe o valor do produto: %d ", i + 1);
		   fflush(stdin);
		   scanf("%f", &lista_produto[i].valor);
		   printf("Informe a quantidade do produto: %d ", i + 1);
		   fflush(stdin);
		   scanf("%d", &lista_produto[i].qtdEstoque);
	   }
}

maior_valor(Lista* lista_produto){
	int i;
	for(i = 0; i<5; i++){
		if(lista_produto[i].valor == 0){
			printf("Não e possível encontrar o maior valor se a lista nao tiver o valor completado!");
			return 0;
		}
	}
	float temp = lista_produto[0].valor;
	int ctt;
	for(i = 0; i<5; i++){
		if(temp < lista_produto[i].valor){
			temp = lista_produto[i].valor;
			ctt = i;
		}
	}
	return temp;
}

maior_valor_ctt(Lista* lista_produto){
	int i;
	for(i = 0; i<5; i++){
		if(lista_produto[i].valor == 0){
			printf("Não e possível encontrar o maior valor se a lista nao tiver o valor completado!");
			return 0;
		}
	}
	float temp = lista_produto[0].valor;
	int ctt;
	for(i = 0; i<5; i++){
		if(temp < lista_produto[i].valor){
			temp = lista_produto[i].valor;
			ctt = i;
		}
	}
	return ctt;
}

exibir_lista_maior(Lista* lista_produto){
	  
	  int ctt = maior_valor_ctt(lista_produto);
	  printf("\n\nO produto que tem o maior valor é a: %d\n", ctt + 1);
      printf("codProduto: %d\n", lista_produto[ctt].codProduto);
      printf("nomeProduto: %s", lista_produto[ctt].nomeProduto);
      printf("valor: %.2f\n", lista_produto[ctt].valor);
      printf("qtdEstoque: %d\n", lista_produto[ctt].qtdEstoque);
}



int main(){
    setlocale(LC_ALL, ""); // Configura a localidade para suportar caracteres especiais
    Lista* lista_produto = cria_lista();
    if(lista_produto == NULL){
        printf("Erro: Falha ao alocar memória para a lista!\n");
        return 1;
        
    }
    
    exibir_lista(lista_produto); // Exibe a lista inicializada
    
    valores_produtos(lista_produto);
    
    exibir_lista(lista_produto);
    
    float maior = maior_valor(lista_produto);
    printf("O maior valor é: %.2f", maior);
    
    exibir_lista_maior(lista_produto);
    
    
    //exibir_lista(lista_produto); // Exibe a lista após a adição do produto
    
    free(lista_produto); // Libera a memória alocada
    return 0;
}