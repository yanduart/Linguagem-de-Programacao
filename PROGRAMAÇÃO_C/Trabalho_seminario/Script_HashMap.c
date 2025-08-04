#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 5

 /* para criarmos a estrutura do nosso Mapa de Espalhamento, 
    precisamos realizar o trecho de código a seguir */
    
typedef struct {
    int valor;
    int ocupado;
} HashmapNo;

typedef struct {
    HashmapNo tabela[TAMANHO];
} Hashmap;

 // garantir que a tabela esteja vazia
Hashmap hashmap_new() {
    Hashmap novoMapa;
    int i;
    for (i = 0; i < TAMANHO; i++) {
        novoMapa.tabela[i].valor = -1; // vazio
        novoMapa.tabela[i].ocupado = 0; // vazio
    }
    return novoMapa;
}

 // funçao para indicar o índice!
int hash(int valor) {
    return valor % TAMANHO;
}

void inserir(Hashmap* mapa, int valor) {
    int indice_inicial = hash(valor);

    // Tentamos encontrar uma posição livre usando busca linear
    int i;
    for (i = 0; i < TAMANHO; i++) {
        int posicao = (indice_inicial + i) % TAMANHO;

        if (mapa->tabela[posicao].ocupado == 0) {
            // Achamos uma posição vazia, podemos inserir
            mapa->tabela[posicao].valor = valor;
            mapa->tabela[posicao].ocupado = 1;
            return;
        }
    }

    // Se chegarmos aqui, não achamos nenhuma posição livre
    printf("Hashmap cheio, nao foi possivel inserir %d\n", valor);
}

void imprimir(Hashmap* mapa) {
    int i;
    for (i = 0; i < TAMANHO; i++) {
        if (mapa->tabela[i].ocupado) {
            printf("Posicao %d: %d\n", i, mapa->tabela[i].valor);
        } else {
            printf("Posicao %d: (vazio)\n", i);
        }
    }
}

int main() {
	setlocale(LC_ALL, "");
    Hashmap mapa = hashmap_new();

    inserir(&mapa, 11);  // hash = 1
    inserir(&mapa, 14);  // hash = 0
    inserir(&mapa, 7);   // hash = 2
    inserir(&mapa, 12);  // hash = 2 (colisão, vai para 3)
    inserir(&mapa, 3);   // hash = 3 (colisão, vai para 4)
    inserir(&mapa, 89);  // hash = 4 (colisão, mapa cheio)

    imprimir(&mapa);

    return 0;
}