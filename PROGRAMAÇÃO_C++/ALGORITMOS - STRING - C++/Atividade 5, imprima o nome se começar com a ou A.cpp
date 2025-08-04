#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv)
{
	
	char nome[30];
	
	cout<<"informe um nome: "<<endl;
	cin.getline(nome,30);
	
	for(int i = 0; i < nome[i]; i++){
		
		if (nome[0] == 'a' || nome[0] == 'A'){
			cout<<"o nome da pessoa e: "<<nome<<endl;
			break;
		} else {
			cout<<"nao esta de acordo!!"<<endl;
			break;
		}
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}