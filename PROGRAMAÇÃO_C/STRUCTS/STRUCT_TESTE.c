#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "");

    struct alunos {
        int codigo;
        char nome[50];
    };

    struct alunos lista_alunos[5] = {0}; // inicializa com código 0

    int val; // variável de controle do do-while

    do {
        int opcao;
        printf("\n----- Informe uma das opções -----\n");
        printf("1. Inserir aluno\n");
        printf("2. Buscar aluno pelo código\n");
        printf("3. Deletar aluno\n");
        printf("4. Atualizar aluno\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int j;
                printf("\n--- Inserir Aluno ---\n");
                for (j = 0; j < 5; j++) {
                    if (lista_alunos[j].codigo == 0) {
                        printf("Digite o código: ");
                        scanf("%d", &lista_alunos[j].codigo);

                        printf("Digite o nome: ");
                        fflush(stdin);
                        //fgets(&lista_alunos[j].nome, 49, stdin);
                        scanf(" %[^\n]", &lista_alunos[j].nome); // lê até nova linha (com espaços) OBS!

                        printf("Aluno inserido na posição %d.\n", j + 1);
                        //int p = 1;
                        break;
                    }
                }
                if (j == 5) {
                    printf("Lista de alunos cheia!\n");
                }
                break;
            }
            case 2: {
                int cd, i, encontrado = 0;
                printf("\n--- Buscar Aluno ---\n");
                printf("Informe o código do aluno: ");
                scanf("%d", &cd);
                for (i = 0; i < 5; i++) {
                    if (lista_alunos[i].codigo == cd) {
                        printf("Aluno encontrado: %s (Código %d)\n", lista_alunos[i].nome, lista_alunos[i].codigo);
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno não encontrado.\n");
                }
                break;
            }
            case 3: {
                int del, i, encontrado = 0;
                printf("\n--- Deletar Aluno ---\n");
                printf("Informe o código do aluno: ");
                scanf("%d", &del);
                for (i = 0; i < 5; i++) {
                    if (lista_alunos[i].codigo == del) {
                        lista_alunos[i].codigo = 0;
                        strcpy(lista_alunos[i].nome, "");
                        printf("Aluno deletado.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno não encontrado.\n");
                    
                }
                break;
            }
            case 4: {
                int atual, novoCodigo, i, encontrado = 0;
                char novoNome[50];
                printf("\n--- Atualizar Aluno ---\n");
                printf("Informe o código atual do aluno: ");
                scanf("%d", &atual);
                for (i = 0; i < 5; i++) {
                    if (lista_alunos[i].codigo == atual) {
                        printf("Informe o novo código: ");
                        scanf("%d", &novoCodigo);
                        printf("Informe o novo nome: ");
                        fflush(stdin);
                        //fgets(&novoNome, 49, stdin);
                        scanf(" %[^\n]", &novoNome);

                        lista_alunos[i].codigo = novoCodigo;
                        strcpy(lista_alunos[i].nome, novoNome);
                        printf("Aluno atualizado.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno não encontrado.\n");
                }else{
					printf("Aluno encontrado.\n");
				}
                break;
            }
            case 5:
                printf("\nSaindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
                break;
        }

        // Mostrar alunos cadastrados
        printf("\n----- Lista de Alunos -----\n");
        
        
        int i;
        for (i = 0; i < 5; i++) {
            if (lista_alunos[i].codigo != 0) {
                printf("Aluno %d:\n", i + 1);
                printf("Nome: %s\n", lista_alunos[i].nome);
                printf("Código: %d\n", lista_alunos[i].codigo);
            }
            printf("\n");
        }
		
			

        printf("\nDigite 2 para continuar ou outro número para sair: ");
        scanf("%d", &val);

    } while (val == 2);
    
    
    getch();
    return 0;
}