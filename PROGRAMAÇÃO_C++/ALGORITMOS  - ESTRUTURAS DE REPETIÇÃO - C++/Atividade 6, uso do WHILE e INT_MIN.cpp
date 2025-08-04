#include <iostream>
#include <stdlib.h>
#include <climits>    // usa INT_MIN
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	  int numero = 0, maior = INT_MIN;  // inicia o 'maior' com o menor valor possével
	  
	  
	cout<<"informe apenas numeros positivos (digite -1 para parar o programa): "<<endl;
	cin>>numero;
	
	while (numero >= 0) {
		
		if (numero > maior )
			maior = numero;
					
			
	 cin>>numero;	
	}
	
	
	cout<<"o maior numero é: "<<maior<<endl;
	
	
	
	
	system("pause");
	return 0;
}