#include <iostream>
#include <stdlib.h>
#include <iomanip> // para setprecision
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");


	int N1 = 0, N2 = 0, escolha = 1;
	float media = 0.0;
   
	
	
	
	do
	{
		cout<<"informe o primeiro numero"<<endl;
		cin>>N1;
		cout<<"informe o segundo numero"<<endl;
		cin>>N2;
		
	
		media = (N1 + N2) / 2.0;
		
		cout<<fixed<<setprecision(1);
		cout<<"a média é: "<<media<<endl; 
		
		cout<<"digite 1 para continuar"<<endl;
		cout<<"digite 0 para sair"<<endl;
		cin>>escolha;
		
		
	}while (escolha == 1);
	
	
	cout<<"fechando programa!!!"<<endl;
	
	
	
		
	
	
	
	
	
	system("pause");
	return 0;
}