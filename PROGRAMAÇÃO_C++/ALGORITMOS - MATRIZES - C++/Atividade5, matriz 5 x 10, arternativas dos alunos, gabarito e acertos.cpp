#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	const int aluno = 5;  const int quest = 10; char resposta[5][10];
	
	char gabarito[10] = {'a','b','c','d','e','a','a','b','b','c'};
	int acertos1 = 0, acertos2 = 0, acertos3 = 0, acertos4 = 0, acertos5 = 0;
	
	cout<<"informe as alternativas marcadas pelos os 5 alunos: "<<endl;
	
	for(int i = 0; i < aluno; i++){
		for(int j = 0; j < quest; j++){
			cout<<"aluno: "<< i + 1<<" alternativa: "<< j + 1<<endl;
			cin>>resposta[i][j];

			
				if(i == 0 && resposta[i][j] == gabarito[j]){
					acertos1++;
			}

				if(i == 1 && resposta[i][j] == gabarito[j]){
					acertos2++;
			}
			
		
				if(i == 2 && resposta[i][j] == gabarito[j]){
					acertos3++;
			}
			
		
				if(i == 3 && resposta[i][j] == gabarito[j]){
					acertos4++;
			}
			
			
				if(i == 4 && resposta[i][j] == gabarito[j]){
					acertos5++;
			}
			
				
			
		}
	}
	
	
	cout<<"\nas notas dos alunos e:\n "<<endl;
	
	
	
	for(int i = 0; i < aluno; i++){
		cout<<"aluno: "<<i + 1;
		for(int j = 0; j < quest; j++){
			cout<<"\t"<<resposta[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\no gabarito e: "<<endl;
	
     for(int k = 0; k < 10; k++){
		 	cout<<gabarito[k]<<", ";
	 }
	
	
	cout<<"\naluno 1 teve: "<<acertos1<<" acertos!"<<endl;
	cout<<"aluno 2 teve: "<<acertos2<<" acertos!"<<endl;
	cout<<"aluno 3 teve: "<<acertos3<<" acertos!"<<endl;
	cout<<"aluno 4 teve: "<<acertos4<<" acertos!"<<endl;
	cout<<"aluno 5 teve: "<<acertos5<<" acertos!"<<endl;
	
	
	 
	
	
	
	
	
	
	
	
	return 0;
}