#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Pilha{
	
	int elementos[4];
	int topo;
	
}Pilha;

Pilha* criar_pilha(){
	Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
	pilha->topo = 4 - 1; // Atualiza o topo para indicar que a pilha está cheia
	//pilha->topo = 0;
	int vect[4] = {1, 2, 3, 4};
	int i;
	for(i = 0; i<4; i++){
		pilha->elementos[i] = vect[i];
	}
	return pilha;
}

exibir_pilha(Pilha* pilha){
	if(pilha == NULL){
		printf("\n\n<-----Pilha não encontrada----->\n\n");
	}
	
	if(pilha->topo == 0){
		printf("\n\n<-----Pilha vazia!----->\n\n");
		int i;
		printf("Pilha: \n");
         for(i = 0; i<4; i++){
		printf("%d ", pilha->elementos[i] = 0);
	}
	}else{
		printf("\n\n<-----Pilha cheia!----->\n\n");
			int i;
	printf("Pilha: \n");
	for(i = pilha->topo; i>=0; i--){
		printf("%d ", pilha->elementos[i]);
	}
	}
}

novos_valores(Pilha* pilha){
	int vect[4] = {2, 4, 3, 1};
	int i;
	printf("\n\n<-----Pilha Modificada!----->");
	for(i = pilha->topo; i>=0; i--){
		int j = i;
		pilha->elementos[i] = vect[j--];
	}
	
}

int main(){
	setlocale(LC_ALL, "");
	Pilha* pilha = criar_pilha();
	if(pilha == NULL){
		return 0;
	}
	
	exibir_pilha(pilha);
	novos_valores(pilha);
	exibir_pilha(pilha);
	
	free(pilha);
	return 0;
}