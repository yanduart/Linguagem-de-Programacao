#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da fila simplificada
typedef struct Fila {
    int elementos[10];
    int inicio;
    int final;
} Fila;



// Fun��o para criar uma nova fila
    Fila* cria_Fila() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
   
    if (fila != NULL) {
        // Inicializa��o dos elementos da fila
        int i;
        
          fila->inicio = 0;
          fila->final = 10; // Atualiza o �ndice final para 10
          
		  printf("Digite 10 valore para ser adicionado a fila: \n");
		  int valor;
		  
		  for(i = fila->inicio; i<fila->final; i++){
		  	  printf("N�mero %d: ", i + 1);
			  scanf("%d", &valor);
			  fila->elementos[i] = valor;
		  }
    
    } else {
        printf("Erro ao alocar mem�ria para a fila.\n");
    }
    return fila;
}


// Fun��o para exibir a fila
     exibe_Fila(Fila* fila) {
    if (fila->inicio == fila->final) {
        printf("A fila est� vazia.\n");
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
   
    
    
    // Liberando a mem�ria
    free(fila); //libeeeera!
    return 0;
}