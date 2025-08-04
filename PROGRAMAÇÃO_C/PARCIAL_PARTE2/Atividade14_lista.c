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
		printf("\n\n<-----Lista nao existe!----->\n\n");
	}
	if(lista->qtd == 0){
		printf("\n\n<-----Lista vazia!----->\n\n");
		int i;
		for(i = 0; i<10; i++){
			printf("%d ", lista->elementos[i]);
		}
	}else{
		printf("\n\n<-----Lista cheia!----->\n\n");
		int i;
		for(i = 0; i<lista->qtd; i++){
			printf("%d ", lista->elementos[i]);
		}
	}
}

inserir_valores(Lista* lista){
	int i;
	printf("\n\n<-----Insere valores para a lista!----->\n\n");
	lista->qtd = 10;
	for(i = 0; i<lista->qtd; i++){
		printf("%dº valor: ", i + 1);
		scanf("%d", &lista->elementos[i]);
	}
}

quant_par(Lista* lista){
	int i;
	int quant = 0;
	for(i = 0; i<lista->qtd; i++){
		if(lista->elementos[i] % 2 == 0){
			quant++;
		}
	}
	printf("\n\nA quantidade de pares na lista é: %d\n\n", quant);
}

int main(){
	setlocale(LC_ALL, "");
	Lista* lista = cria_lista();
	if(lista == NULL){
		return 0;
	}
	
	
	exibir_lista(lista);
	inserir_valores(lista);
	exibir_lista(lista);
	quant_par(lista);
	
	free(lista);
	return 0;
}