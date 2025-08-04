#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da fila/pilha simplificada
typedef struct Pilha {
    int elementos[15];
    int qtd;
} Pilha;


// Função para criar uma nova fila/pilha
    Pilha* cria_Pilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
   
    if (pilha != NULL) {
    	int i;
        for(i = 0; i<15; i++){
			pilha->elementos[i] = 0;
		}
        
        pilha->qtd = 15; // Atualiza o índice final para 10
     
    } else {
        printf("Erro ao alocar memória para a fila.\n");
    }
    return pilha;
}


// Função para exibir a Pilha
     exibe_Pilha(Pilha* pilha) {
    if (pilha == 0) {
        printf("A pilha está vazia.\n");
        return;
    }
    //printf("Elementos na fila/pilha: ");
    int i = 0;
    for (i; i<pilha->qtd; i++) {
        printf("%d ", pilha->elementos[i]);
    }
    printf("\n");
}

//Função para par e impar!!
    TPilha(Pilha* pilha) {
    	int j;
    	int temp;
    	int i = 0;
    	printf("Informe Números para pilha: \n");
    	for(j = pilha->qtd; j>0; j--){
			printf("Numero %d: ", i + 1);
			scanf("%d", &temp);
			if(temp % 2 == 0){
				pilha->elementos[i] = temp;
			}else{
			pilha->elementos[i] = NULL;
		}
		i++;
		}
		return TPilha;
	}


int main() {
	setlocale(LC_ALL, "");
	
    Pilha* pilha = cria_Pilha();
    if (pilha == NULL) {
        return 1;
    }
      
     printf("Exibindo a pilha: \n");
	 exibe_Pilha(pilha);
	 
	 TPilha(pilha);
	 printf("\nExibindo a nova pilha: \n");
     exibe_Pilha(pilha);
	
	
	free(pilha);
	return 0;
}



