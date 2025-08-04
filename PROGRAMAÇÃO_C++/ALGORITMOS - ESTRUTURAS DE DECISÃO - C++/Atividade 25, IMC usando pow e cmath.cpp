#include <iostream>
#include <stdlib.h>
#include <cmath>                     // para usar o pow!!!
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	float peso, altura, IMC;

	
	cout<<"informe o peso: "<<endl;
	cin>>peso;
	
	cout<<"informe a altura: "<<endl;
	cin>>altura;
	
		IMC = peso / pow(altura, 2);        // pow e para elevar ao quadrado!!
	
	if (IMC < 18.5){
		cout<<"IMC: "<<IMC<<" Abaixo do peso!"<<endl;
	} else if (IMC >= 18.5 && IMC < 25){
		cout<<"IMC: "<<IMC<<" Peso normal!"<<endl;
	} else if (IMC >= 25 && IMC < 30){
		cout<<"IMC: "<<IMC<<" Acima do peso!"<<endl;
	} else {
		cout<<"IMC: "<<IMC<<" Obeso!"<<endl;
	}
	
	
	           // OBS: && e operador E onde as duas sao verdadeiras!!!!
	           // OBS: || e operador OU onde apenas uma e verdadeira!!!!
	
	
	system("pause");
	return 0;
}