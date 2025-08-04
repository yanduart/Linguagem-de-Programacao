#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	int numero, resultado;
	
	
	cout<<"informe um numero: "<<endl;
	cin>>numero;
	
	if (numero % 2 == 0){
		resultado = numero + 5;
	} else {
		resultado = numero + 8;
	}
	
	
	cout<<"o resultado é: "<<resultado<<endl;
	
	
	
	
	system ("pause");
	return 0;
}