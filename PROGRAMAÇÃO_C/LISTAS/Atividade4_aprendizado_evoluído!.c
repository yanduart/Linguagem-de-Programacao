#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <string.h>

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
		printf("Lista nao identificada! [ERROR!!]");
	}
	
	if(lista->qtd == 0){
		printf("\n\n<-----Lista vazia!----->\n\n");
	}else{
		printf("\n\n<-----Lista cheia!----->\n\n");
	}
	
	int i;
	printf("\n\nLista: \n");
	if(lista->qtd == 0){
			for(i = 0; i<10; i++){
		printf("%d ", lista->elementos[i]);
	}
	}

	if(lista->qtd != 0){
		for(i = 0; i<lista->qtd; i++){
				if(lista->elementos[i] != 0){
			printf("%d ", lista->elementos[i]);      //momento em que eu conseguir usar 100% do cérebro!!!!!
		}
		}
	
	}		
		
}

insere_valores_lista(Lista* lista){
	int i;
	printf("\n\n_____Informe 10 valores inteiros positivos!_____\n\n");
	for(i = 0; i<10; i++){
		printf("%dº Número: ", i + 1);
		scanf("%d", &lista->elementos[i]);
		if(lista->elementos[i] == 0){
			lista->elementos[i] = NULL;
		}
	}
	lista->qtd = 10;
}

media_soma_lista(Lista* lista){
	int i;
	int soma = 0;
	float media = 0.0;
	int cont = 0;
	for(i = 0; i<lista->qtd; i++){
		if(lista->elementos[i] != 0){
			soma += lista->elementos[i];
			cont++;
		}
	}
	media = (float)soma/cont;           //float ajudou na precisão!!!!
	printf("\n\nA soma de toda lista é: %d\n", soma);
	printf("A média de toda a lista é: %.2f", media);
}

int main(){
	setlocale(LC_ALL, "");
	Lista* lista = cria_lista();
	if(lista == NULL){
		return 0;
	}
	
	exibir_lista(lista);
	insere_valores_lista(lista);
	exibir_lista(lista);
	media_soma_lista(lista);
	
	
	
	
	free(lista);
	return 0;
}