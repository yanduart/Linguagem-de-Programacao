#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Lista{
	
	int id_livro[5];
	char titulo[5][51];             
	char autor[5][51];
	int ano[5];   
	int quantidade[5];   
    int qtd;         
             
}Lista;

Lista* cria_lista(){
	Lista* lista = (Lista*) malloc(sizeof(Lista));
	lista->qtd = 0;
	int i;
	for(i = 0; i<5; i++){
		lista->id_livro[i] = 0;
		strcpy(lista->titulo[i], "");
		strcpy(lista->autor[i], "");
		lista->ano[i] = 0;
		lista->quantidade[i] = 0;
	}
	return lista;
}

exibir_lista(Lista* lista){
	if(lista == NULL){
		printf("\n\n<-----Lista não existe!----->\n\n");
		return 0;
	}
	if(lista->qtd == 0){
		printf("\n\n<-----Lista vazia!----->\n\n");
		int i;
		for(i = 0; i<5; i++){
			printf("%dº LIVRO--->\n", i + 1);
			printf("id_livro: %d\n", lista->id_livro[i]);
			printf("titulo: %s\n", lista->titulo[i]);
			printf("autor: %s\n", lista->autor[i]);
			printf("ano: %d\n", lista->ano[i]);
			printf("quantidade: %d\n", lista->quantidade[i]);
			printf("\n\n");
		}
	}else{
			printf("\n\n<-----Lista cheia!----->\n\n");
		int i;
		for(i = 0; i<lista->qtd; i++){
            printf("%dº LIVRO--->\n", i + 1);
			printf("id_livro: %d\n", lista->id_livro[i]);
			printf("titulo: %s", lista->titulo[i]);
			printf("autor: %s", lista->autor[i]);
			printf("ano: %d\n", lista->ano[i]);
			printf("quantidade: %d\n", lista->quantidade[i]);
			printf("\n\n");
			
	}
}
}

inserir_valores_lista(Lista* lista){
	lista->qtd = 5;
	int i;
	printf("\n\n<-----Insere valores na lista!----->\n\n");
	for(i = 0; i<lista->qtd; i++){
		printf("%dº LIVRO--->\n", i + 1);
		printf("id_livro: ");
		fflush(stdin);
		scanf("%d", &lista->id_livro[i]);
		printf("titulo: ");
		fflush(stdin);
		fgets(&lista->titulo[i], 49, stdin);
		printf("autor: ");
		fflush(stdin);
		fgets(&lista->autor[i], 49, stdin);
		printf("ano: ");
		fflush(stdin);
		scanf("%d", &lista->ano[i]);
		printf("quantidade: ");
		fflush(stdin);
		scanf("%d", &lista->quantidade[i]);
		printf("\n");
	}
}
//ORDENAÇÃO E MUITO DIFICÍCIL!
/*ordena_lista_ano(Lista* lista){
	int i;
	int vect[5];
	int temp = lista->ano[0];
	for(i = 0; i<lista->qtd; i++){
		if(lista->ano < temp){
			vect[i] = lista
		}
	}
}*/
	
retorna_livro_ano_especifico(Lista* lista){
	int anoo;
	printf("\n\n<-----Procurando livro pelo ano!----->\n\n");
	printf("\n\nInforme o ano do livro: ");
	fflush(stdin);
	scanf("%d", &anoo);
	int i;
	int encontrado = 0;
	for(i = 0; i<lista->qtd; i++){
		if(lista->ano[i] == anoo){
			printf("\n%dº LIVRO--->\n", i + 1);
			printf("id_livro: %d\n", lista->id_livro[i]);
			printf("titulo: %s", lista->titulo[i]);
			printf("autor: %s", lista->autor[i]);
			printf("ano: %d\n", lista->ano[i]);
			printf("quantidade: %d\n", lista->quantidade[i]);
			printf("\n");
			encontrado = 1; // Marca que um livro foi encontrado
		}
	}
	if(encontrado == 0){
		 printf("\n\n<-----Não existe nenhum livro com esse ano!----->\n\n");
	}  
}


quantidade_livros(Lista* lista){
	int i;
	int result = 0;
	for(i = 0; i<lista->qtd; i++){
		result += lista->quantidade[i];
	}
	printf("\n\nA quantidade de livros em estoque é: %d\n\n", result);
}

int main(){
	setlocale(LC_ALL, "");
	Lista* lista = cria_lista();
	if(lista == NULL){
		return 0;
	}
	
	
	
	exibir_lista(lista);
	inserir_valores_lista(lista);
	exibir_lista(lista);
	quantidade_livros(lista);
	retorna_livro_ano_especifico(lista);
	
	free(lista);
	return 0;
}