#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	
	int X, resposta, opcao;
	
	
	do
	{
		
		cout<<"informe um valor para X: "<<endl;
		cin>>X;
		
		if(X < -2){
		   resposta = 2 * X + 2;
		}
		
		if(-2 <= X && X < 3){
			resposta = 3;
		}
		
		if(3 <= X){
			resposta = - X;
		}
		
		cout<<"a função de X correspondente: "<<resposta<<endl;
		cout<<"\ndigite: "<<endl;
		cout<<"1. para continuar!"<<endl;
		cout<<"0. para sair!"<<endl;
		cin>>opcao;
		
		
		system ("cls");
		
		
		
		
	} while (opcao == 1);
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}