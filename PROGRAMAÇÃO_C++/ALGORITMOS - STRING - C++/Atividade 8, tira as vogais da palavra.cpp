#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char** argv)
{
	
	char palavra[30], palavra1[30];
	int tam = 0;
	int j = 0;
	
	cout<<"informe uma palavra: "<<endl;
	cin.getline(palavra,30);
	
	tam = strlen(palavra);
	
	for(int i = 0; i < tam; i++){
		if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' 
		&& palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U'){
		 palavra1[j++] = palavra[i];  // mexer em uma string tem que imprementar as alteraçao em outra string!!
		}
		
	}
	
	
	palavra1[j] = '\0';  // remover o final!!
	
	cout<<"a palavra sem as vogais sao: "<<palavra1<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}