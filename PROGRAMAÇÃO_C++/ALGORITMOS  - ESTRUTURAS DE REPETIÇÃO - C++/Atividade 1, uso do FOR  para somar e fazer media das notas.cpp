#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int numero = 0, quantidade = 0, soma = 0;
	float media = 0.0;
	
	
	for (int i = 1; i <= 15; i++){
		quantidade++;
		cout<<"informe uma nota: ";
		cin>>numero;
		soma += numero;
	}
	
	media = soma / quantidade;
	
	cout<<" a media dos alunos é: "<<media<<endl;
	
	
	system("pause");
	return 0;
}