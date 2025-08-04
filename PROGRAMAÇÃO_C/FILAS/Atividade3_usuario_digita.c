#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da fila simplificada
typedef struct Fila {
    int elementos[10];
    int inicio;
    int final;
} Fila;



// Função para criar uma nova fila
    Fila* cria_Fila() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
   
    if (fila != NULL) {
        // Inicialização dos elementos da fila
        int i;
        
          fila->inicio = 0;
          fila->final = 10; // Atualiza o índice final para 10
          
		  printf("Digite 10 valore para ser adicionado a fila: \n");
		  int valor;
		  
		  for(i = fila->inicio; i<fila->final; i++){
		  	  printf("Número %d: ", i + 1);
			  scanf("%d", &valor);
			  fila->elementos[i] = valor;
		  }
    
    } else {
        printf("Erro ao alocar memória para a fila.\n");
    }
    return fila;
}


// Função para exibir a fila
     exibe_Fila(Fila* fila) {
    if (fila->inicio == fila->final) {
        printf("A fila está vazia.\n");
        return;
    }
    //printf("Elementos na fila: ");
    int i;
    for (i = fila->inicio; i < fila->final; i++) {
        printf("%d ", fila->elementos[i]);
    }
    printf("\n");
}


int main() {
	setlocale(LC_ALL, "");
    Fila* fila = cria_Fila();
    if (fila == NULL) {
        return 1;
    }
     
    printf("Elementos na fila: ");
    exibe_Fila(fila);
    int quant = fila->final - fila->inicio;
    printf("Quantidade de elementos na fila: %d\n", quant);
   
    
    
    // Liberando a memória
    free(fila); //libeeeera!
    return 0;
}