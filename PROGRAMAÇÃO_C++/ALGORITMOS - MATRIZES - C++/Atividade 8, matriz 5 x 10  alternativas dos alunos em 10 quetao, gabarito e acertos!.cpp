#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	char questao[5][10];
	char gabarito[10] = {'a','b','c','d','e','a','b','d','c','c'};
	int contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0, contador5 = 0;
	
	cout<<"informe a resposta de cada aluno que marcou na prova: "<<endl;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 10; j++){
			cout<<"aluno "<<i+1<<" questao "<<j+1<<" resposta: "<<endl;
			cin>>questao[i][j];
			
			if(i == 0 && gabarito[j] == questao[i][j]){
				contador1++;
			}
			
			if(i == 1 && gabarito[j] == questao[i][j]){
				contador2++;
			}
			
			if(i == 2 && gabarito[j] == questao[i][j]){
				contador3++;
			}
			
			if(i == 3 && gabarito[j] == questao[i][j]){
				contador4++;
			}
			
			if(i == 4 && gabarito[j] == questao[i][j]){
				contador5++;
			}
			
		}
	}
	
	cout<<"as alternativas marcadas por aluno fica: "<<endl;
	
	 
	for(int i = 0; i < 5; i++){
		cout<<"aluno "<<i+1<<":";
			for(int j = 0; j < 10; j++){
				cout<<"\t"<<questao[i][j];
			}
			cout<<endl;
	}
	
	cout<<"o gaberito e: "<<endl;
	
	for(int i = 0; i < 10; i++){
		cout<<gabarito[i]<<", ";
	}
	
	cout<<"aluno 1 acertou: "<<contador1<<endl;
		cout<<"aluno 2 acertou: "<<contador2<<endl;
			cout<<"aluno 3 acertou: "<<contador3<<endl;
				cout<<"aluno 4 acertou: "<<contador4<<endl;
					cout<<"aluno 5 acertou: "<<contador5<<endl;
	
	
	
	
	
	
	
	return 0;
}