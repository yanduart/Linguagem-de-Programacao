#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int numeros [2] [4] = {{10,11,12,13}, {20,21,22,23}};
	
	double total = 0, qtde = 0;
	// obter informaçoes do usuario.
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 4; j++){
			qtde++;
		  total += numeros[i] [j];  
	}
	cout<<"informe mais as lacunas: "<<
	
	
	}
	
	cout<<"informe a media dos numeros: "<<total/qtde<<endl;
	
	
	
	
	return 0;
}