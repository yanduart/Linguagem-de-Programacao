#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct Lista{
	int elementos[5];
	int qtd;
}Lista;

Lista* cria_lista(){
	Lista* lista = (Lista*) malloc(sizeof(Lista));
	int i = 0;
	
	if (lista != NULL) {
    	int i;
        for(i = 0; i<5; i++){
			lista->elementos[i] = 0;
		}
        
        lista->qtd = 5; 
     
    }
    return lista;
}

 exibe_lista(Lista* lista){
	  if (lista == NULL) {
        printf("A lista nâo existe!.\n");
        return 0;
    }
	 
	 if(lista->qtd == 0){
		 printf("A lista está vazia!");
		 return 0;
	 }
	 int i;
	 //lista->qtd = 5;
	 printf("Lista 1: \n");
	 for(i = 0; i<lista->qtd; i++){
		 printf("%d ", lista->elementos[i]);
	 }
	 printf("\n");
 }
 
 
 vet(Lista* lista){
	 //int vet[5];
	 int i = 0;
	 printf("Informe valores!\n");
	 for(i; i<5; i++){
		 printf("Número %d\n", i + 1);
		 scanf("%d", &lista->elementos[i]);
	 }
 }
 
 maior(Lista* lista){
    int maior = lista->elementos[0];
    int i;
    for (i = 0; i<lista->qtd; i++) {
        if (maior < lista->elementos[i]) {
            maior = lista->elementos[i];
        }
    }
     printf("o maior elemento da lista é: %d", maior);
 }
 
 
 
 int main(){
	 
	 setlocale(LC_ALL, "");
    Lista* lista = cria_lista();
    if (lista == NULL) {
        return 1;
    }
	 
	 exibe_lista(lista);
	 
	 vet(lista);
	 
	 exibe_lista(lista);
	 
	 //printf("o maior é: ");
	 maior(lista);
	 
	 return 0;
	 free(lista);
 }