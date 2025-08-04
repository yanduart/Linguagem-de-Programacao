#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	int numero, triplo, dobro;
	
	cout<<"infome um número: "<<endl;
	cin>>numero;
	
	
	dobro = numero * 2;
	triplo = numero * 3;
	
	
	if(numero % 2 == 0){
		cout<<"o dobro é: "<<dobro<<endl;
	} else {
		cout<<"o triplo é: "<<triplo<<endl;
	}
	
	
	system ("pause");
	return 0;
}