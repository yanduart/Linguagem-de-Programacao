#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Lista{
	
	int elementos[10];
	int qtd;
	
}Lista;

Lista* cria_lista(){
	Lista* lista = (Lista*) malloc(sizeof(Lista));
	
	int i;
	for(i = 0; i<10; i++){
		lista->elementos[i] = 0;
	}
	lista->qtd = 0;
	return lista;
}

exibir_lista(Lista* lista){
	if(lista == NULL){
		printf("Lista nao existe! [ERROR!!]");
	}
	
	if(lista->qtd == 0){
		printf("\n\n<-----Lista vazia!----->\n\n");
	}else{
		printf("\n\n<-----Lista cheia!----->\n\n");
	}
	int i;
	for(i = 0; i<10; i++){
		printf("%d ", lista->elementos[i]);
	}
}

insere_valores(Lista* lista){
	if(lista->qtd == 0){
		int i;
	printf("\n\n<-----Insere valores positivos na lista----->\n\n");
	for(i = 0; i<10; i++){
		printf("%dº Número: ", i + 1);
		scanf("%d", &lista->elementos[i]);
	}
	
	}
	lista->qtd = 10;
}

retira_Nvalores_lista(Lista* lista){
	if(lista->qtd != 0){
		int temp = 0;
		printf("\n\n<-----Informe a quantidade de elementos que dejesa remover do inicio da lista!----->\n\n");
		printf("Informe: ");
	    scanf("%d", &temp);
  	int i;
	printf("\n\n<--Lista com %d valores removido do início!:-->\n\n", temp);	
    for(i = temp; i<lista->qtd; i++){
		printf("%d ", lista->elementos[i]);
	}
	}else{
		printf("\n\n<-----Impossível remover algo de uma lista vazia!----->\n\n");
	}
	
}

int main(){
	setlocale(LC_ALL, "");
	Lista* lista = cria_lista();
	if(lista == NULL){
		return 0;
	}
	
	exibir_lista(lista);
	insere_valores(lista);
	exibir_lista(lista);
	retira_Nvalores_lista(lista);
	
	free(lista);
	return 0;
}