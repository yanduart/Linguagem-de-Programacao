#include <stdio.h>
#include <conio.h>

int main(void) {
	
struct aluno {
   char nome[50];
   char matricula[20];
   char curso[30];
};
   
   struct aluno lista_alunos[5];
   
/*(struct) em C é uma maneira de agrupar várias variáveis de tipos diferentes (ou do mesmo tipo) em uma única
   unidade lógica. Isso permite que você organize dados relacionados de forma mais coesa e gerenciável.*/

   int i;
   for (i=0; i<5; i++) 
   { 
          printf("Informe o nome do aluno %i: ", i + 1);
          //scanf("%49s", lista_alunos[i].nome);
          fgets(lista_alunos[i].nome, 49, stdin);
          printf("Informe a matricula do aluno %i: ", i + 1);
          //scanf("%9s", lista_alunos[i].matricula);
          fgets(lista_alunos[i].matricula, 19, stdin);
          printf("Informe o curso do aluno %i: ", i + 1);
          //scanf("%29s", lista_alunos[i].curso);
          fgets(lista_alunos[i].curso, 29, stdin);
          //fgests para stringgggggg!!!!!!!!!
    }

    printf("\n\n");

    for (i =0;i<5;i++) { 
         printf("Aluno: %s", lista_alunos[i].nome);
         printf("Matricula: %s", lista_alunos[i].matricula);
         printf("Curso: %s\n", lista_alunos[i].curso);
         
    }
  
  getch();
  return(0);
}