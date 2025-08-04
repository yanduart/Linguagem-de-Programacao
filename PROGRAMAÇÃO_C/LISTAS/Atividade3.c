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

exibe_lista(Lista* lista){
	if(lista == NULL){
		printf("Lista não identificada!");
		return 0;
		//ou exit(1);
	}
	
	if(lista->qtd == 0){
		printf("<---Lista vazia!--->\n");
	}else{
		printf("\n\n\n\n<---Lista cheia!--->\n");
	}
	int i;
	printf("\n\nLista: \n");
	for(i = 0; i<10; i++){
		printf("%d ", lista->elementos[i]);
	}
}
// 1º forma de inserir valores!
/*valores_lista(Lista* lista){
	
    int valores[10] = {3, 4, 7, 2, 1, 7, 9, 8, 2, 5};
    int i;
    for(i = 0; i < 10; i++){
        lista->elementos[i] = valores[i];
    }
    lista->qtd = 10; // Atualiza a quantidade de elementos na lista
}*/

// 2º forma de inserir valores!
valores_lista(Lista* lista){
	int i;
	printf("\n\nInforme numeros inteiros para a lista: \n");
	
    for(i = 0; i<10; i++){
		printf("%dº número: ", i + 1);
		scanf("%d", &lista->elementos[i]);
	}
    lista->qtd = 10; // Atualiza a quantidade de elementos na lista
}

pares_lista(Lista* lista){
	int i;
	int cont = 0;
	printf("\n\n\nLista pares: \n");
	for(i = 0; i<lista->qtd; i++){
		if(lista->elementos[i] % 2 == 0){
			printf("%d ", lista->elementos[i]);
			cont++;
		}
	}
	printf("\nQuantidade de elementos pares: %d", cont);
}

pares_listas(Lista* lista){
	int i;
	int cont;
    int vect[10];
	for(i = 0; i<lista->qtd; i++){
		if(lista->elementos[i] % 2 == 0){
			vect[i] = lista->elementos[i];
		}else{
			vect[i] = 0;
		}
	}
	printf("\n\n\nLista apenas com os pares completa: \n");
	for(i = 0; i<lista->qtd; i++){
		lista->elementos[i] = vect[i];
		printf("%d ", lista->elementos[i]);
	}
	
}


int main(){
	
	setlocale(LC_ALL, "");
	Lista* lista = cria_lista();
	if(lista == NULL){
		return 1;
	}
	
	exibe_lista(lista);
	valores_lista(lista);
	exibe_lista(lista);
	pares_lista(lista);
	pares_listas(lista);
	
	free(lista);
	return 0;	
}