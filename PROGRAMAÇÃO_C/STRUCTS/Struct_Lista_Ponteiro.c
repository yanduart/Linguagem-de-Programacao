#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "");

    struct aluno {
        int codigo;
        char nome[50];
    };

    struct aluno *pCadAluno[5] = {0}; // inicializa com NULL
    int val;

    do {
        int opcao;
        printf("\n----- Informe uma das op��es -----\n");
        printf("1. Inserir estudante\n");
        printf("2. Editar estudante\n");
        printf("3. Excluir Estudante\n");
        printf("4. Listar Estudantes\n");
        printf("5. Localizar Estudantes\n");
        printf("6. Ordenar Estudantes\n");
        printf("7. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int j;
                printf("\n--- Inserir Estudante ---\n");
                for (j = 0; j < 5; j++) {
                    if (pCadAluno[j] == NULL) {
                        pCadAluno[j] = (struct aluno*) malloc(sizeof(struct aluno));
                        printf("Digite o c�digo: ");
                        scanf("%d", &pCadAluno[j]->codigo);

                        printf("Digite o nome: ");
                        scanf(" %[^\n]", pCadAluno[j]->nome);

                        printf("Aluno inserido na posi��o %d.\n", j + 1);
                        break;
                    }
                }
                if (j == 5) {
                    printf("Lista de alunos cheia!\n");
                }
                break;
            }
            case 2: {
                int atual, novoCodigo, i, encontrado = 0;
                char novoNome[50];
                printf("\n--- Atualizar Aluno ---\n");
                printf("Informe o c�digo atual do aluno: ");
                scanf("%d", &atual);
                for (i = 0; i < 5; i++) {
                    if (pCadAluno[i] != NULL && pCadAluno[i]->codigo == atual) {
                        printf("Informe o novo c�digo: ");
                        scanf("%d", &novoCodigo);
                        printf("Informe o novo nome: ");
                        scanf(" %[^\n]", novoNome);

                        pCadAluno[i]->codigo = novoCodigo;
                        strcpy(pCadAluno[i]->nome, novoNome);
                        printf("Aluno atualizado.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno n�o encontrado.\n");
                } else {
                    printf("Aluno encontrado.\n");
                }
                break;
            }
            case 3: {
                int del, i, encontrado = 0;
                printf("\n--- Excluir Estudante ---\n");
                printf("Informe o c�digo do aluno: ");
                scanf("%d", &del);
                for (i = 0; i < 5; i++) {
                    if (pCadAluno[i] != NULL && pCadAluno[i]->codigo == del) {
                        free(pCadAluno[i]);
                        pCadAluno[i] = NULL;
                        printf("Aluno deletado.\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno n�o encontrado.\n");
                }
                break;
            }
            case 4: {
                int i;
                printf("\n-----Listando Estudantes-----\n");
                for (i = 0; i < 5; i++) {
                    if (pCadAluno[i] != NULL) {
                        printf("Aluno %d:\n", i + 1);
                        printf("Nome: %s\n", pCadAluno[i]->nome);
                        printf("C�digo: %d\n", pCadAluno[i]->codigo);
                        printf("\n");
                    }
                }
                break;
            }
            case 5: {
                int cd, i, encontrado = 0;
                printf("\n--- Buscar Aluno ---\n");
                printf("\nInforme o codigo do aluno: ");
                scanf("%d", &cd);
                for (i = 0; i < 5; i++) {
                    if (pCadAluno == NULL || pCadAluno[i]->codigo == cd) {
                        printf("Aluno encontrado: %s (C�digo %d)\n", pCadAluno[i]->nome, pCadAluno[i]->codigo);
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Aluno n�o encontrado.\n");
                }
                break;
            }
            case 6: {
                printf("\n--- Fun��o de ordena��o n�o implementada ainda ---\n");
                break;
            }
            case 7: { 
                printf("\nSaindo do programa.\n");
                return 0;
            }
            default:
                printf("Op��o inv�lida.\n");
                break;
        }

        printf("\nDigite 2 para continuar ou outro n�mero para sair: ");
        scanf("%d", &val);

    } while (val == 2);

    getch();
    return 0;
}