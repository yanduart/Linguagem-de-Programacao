#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da pilha simplificada
typedef struct Pilha1 {
    char elementos[5];
    int qtd;
   //int vet[5];
} Pilha1;

typedef struct Pilha2 {
    char elementos[5];
    int qtd;
    //int vet[5];
} Pilha2;

// Função para criar uma nova pilha1
Pilha1* cria_Pilha1() {
    Pilha1* pilha1 = (Pilha1*) malloc(sizeof(Pilha1));
    pilha1->qtd = 0;
    return pilha1;
}

// Função para criar uma nova pilha2
Pilha2* cria_Pilha2() {
    Pilha2* pilha2 = (Pilha2*) malloc(sizeof(Pilha2));
    pilha2->qtd = 0;
    return pilha2;
}

// Função para exibir a Pilha1
 exibe_Pilha1(Pilha1* pilha1) {
    if (pilha1 == NULL) {
        printf("A pilha nâo existe!.\n");
        return;
    }
    if (pilha1->qtd == 0) {
        printf("A pilha está vazia.\n");
        return;
    }
    int i;
    for(i = 0; i < pilha1->qtd; i++) {
        printf("%c ", pilha1->elementos[i]);
    }
    printf("\n");
    
}

// Função para exibir a Pilha2
  exibe_Pilha2(Pilha2* pilha2) {
    if (pilha2 == NULL) {
        printf("A pilha não existe.\n");
        return;
    }
    if (pilha2->qtd == 0) {
        printf("A pilha está vazia.\n");
        return;
    }
    int i;
    for(i = 0; i < pilha2->qtd; i++) {
        printf("%c ", pilha2->elementos[i]);
    }
    printf("\n");
    
}
//Função vetor e N P 0
Tpilha2(Pilha1* pilha1, Pilha2* pilha2){
	int vet[5];
	int i;
	printf("\nInforme valores para o vetor: \n");
	for(i = 0; i < 5; i++){
		printf("Número %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	pilha2->qtd = 5;
	pilha1->qtd = 5;
	for(i = 0; i < 5; i++){
		if(vet[i] % 2 == 0){
			pilha1->elementos[i] = 'P'; // P para positivo e N negativo
			pilha2->elementos[i] = 'P';
		} else{
			pilha1->elementos[i] = 'N';
			pilha2->elementos[i] = 'N';
		}
		if(vet[i] == 0){
			pilha1->elementos[i] = 0;
			pilha2->elementos[i] = 0;
		}
	}
}

int main(){
    setlocale(LC_ALL, "");

    Pilha1* pilha1 = cria_Pilha1();
    if (pilha1 == NULL) {
        return 1;
    }

    Pilha2* pilha2 = cria_Pilha2();
    if (pilha2 == NULL) {
        return 1;
    }

    printf("Pilha 1: \n");
    exibe_Pilha1(pilha1);

    printf("Pilha 2: \n");
    exibe_Pilha2(pilha2);
    
    Tpilha2(pilha1, pilha2);
    
    printf("\nPilha 1 modificada: \n");
    exibe_Pilha1(pilha1);

    printf("Pilha 2 modificada: \n");
    exibe_Pilha2(pilha2);
    

    free(pilha1);
    free(pilha2);

    return 0;
}