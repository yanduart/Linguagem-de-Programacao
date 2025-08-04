#include <stdio.h>
#include <stdlib.h>

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
        int valores_iniciais[10] = {4, 3, 2, 5, 7, 8, 3, 23, 12, 0};
        for (i = 0; i < 10; i++) {
            fila->elementos[i] = valores_iniciais[i];
        }

        fila->inicio = 0;
        fila->final = 10; // Atualiza o índice final para 10
     
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