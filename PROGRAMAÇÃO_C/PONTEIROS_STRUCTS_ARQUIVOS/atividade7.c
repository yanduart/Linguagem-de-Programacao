#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(void){
	
	setlocale(LC_ALL, "");
	int i;
	float total;
	float media = 0.0;
	struct aluno{
		
		char CPF[20];
		char nome[20];
		float notas[4];
			
	};
	
	struct aluno dados_alunos;
	
	printf("Informe o nome do aluno: ");
	fflush(stdin);
	fgets(dados_alunos.nome, 29, stdin);
	
	fflush(stdin);
	printf("Informe o CPF do aluno: ");
	fgets(dados_alunos.CPF, 29, stdin);
	
	printf("\n----->Informe as 3 notas do aluno<-----\n\n");
	
	for(i=0; i<3; i++){
		printf("Nota %d: ", i+1);
		scanf("%f", &dados_alunos.notas[i]);
		total += dados_alunos.notas[i];
	}
	
	media = total/3;
	
	printf("\n\n----->Dados do aluno<-----");
	printf("\n\nAluno: %s--> CPF: %s--> Média: %.2f", dados_alunos.nome, dados_alunos.CPF, media);
	
	
	getch();
	return 0;
}