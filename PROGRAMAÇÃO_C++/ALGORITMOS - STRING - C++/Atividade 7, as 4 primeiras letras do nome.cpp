#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv)
{
	
	char nome[30];
	
	cout<<"informe um nome: "<<endl;
	cin.getline(nome,30);
	
	
	cout<<"as 4 primeiras letras do nome e: "<<endl;
	
	for (int i = 0; i < 4; i++){
		
		cout<<nome[i];
	}
	
	
	return 0;
}