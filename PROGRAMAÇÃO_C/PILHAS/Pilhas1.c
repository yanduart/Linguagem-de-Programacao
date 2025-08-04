#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da fila/pilha simplificada
typedef struct Pilha {
    int elementos[10];
    int qtd;
    int maior;
} Pilha;



// Fun��o para criar uma nova fila/pilha
    Pilha* cria_Pilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
   
    if (pilha != NULL) {
        // Inicializa��o dos elementos da fila/pilha
        int i;
        int valores_iniciais[10] = {4, 3, 2, 5, 7, 8, 3, 23, 12, 0};
        for (i = 0; i < 10; i++) {
            pilha->elementos[i] = valores_iniciais[i];
        }

        
        pilha->qtd = 10; // Atualiza o �ndice final para 10
     
    } else {
        printf("Erro ao alocar mem�ria para a fila.\n");
    }
    return pilha;
}


// Fun��o para exibir a Pilha
     exibe_Pilha(Pilha* pilha) {
    if (pilha == 0) {
        printf("A pilha est� vazia.\n");
        return;
    }
    //printf("Elementos na fila/pilha: ");
    int i = 0;
    for (i; i<=pilha->qtd-1; i++) {
        printf("%d ", pilha->elementos[i]);
    }
    printf("\n");
}


// Fun��o para encontrar o maior elemento da pilha
int maior_Pilha(Pilha* pilha) {
    if (pilha == NULL || pilha->qtd == 0) {
        printf("A pilha est� vazia.\n");
        return -1; // Retorna -1 se a pilha estiver vazia
    }

    int maior = pilha->elementos[0];
    int i;
    for (i = pilha->qtd; i >= 0; i--) {
        if (pilha->elementos[i] > maior) {
            maior = pilha->elementos[i];
        }
    }
    return maior;
}


int main() {
	setlocale(LC_ALL, "");
    Pilha* pilha = cria_Pilha();
    if (pilha == NULL) {
        return 1;
    }
     
    printf("Elementos na pilha: ");
    exibe_Pilha(pilha);
    int quant = pilha->qtd;
    printf("Quantidade de elementos na pilha: %d\n", quant);

    int maior = maior_Pilha(pilha);
    if (maior != -1) {
        printf("O maior elemento da pilha �: %d\n", maior);
    }
    
    
    
    // Liberando a mem�ria
    free(pilha); //libeeeera!
    return 0;
}