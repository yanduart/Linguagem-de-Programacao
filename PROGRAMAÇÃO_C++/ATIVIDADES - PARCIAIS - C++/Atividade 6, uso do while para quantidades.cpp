#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int numero = 0;
	int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
	
	
	
	cout<<"digite alguns numeros (digite 0 se for parar!!!): "<<endl;
	cin>>numero;
	
	
	while (numero > 0){
		
		
	
		if (numero >= 0 && numero <= 25) {
		    intervalo1++;		
	} else if (numero >= 26 && numero <= 50) {
		    intervalo2++;
	} else if (numero >= 51 && numero <= 75) {
		    intervalo3++;
	} else if (numero >= 76 && numero <= 100){
		    intervalo4++;
	} else {
		cout<<"numero fora do intervalo permitido"<<endl;
	
	}
	
	cin>>numero;
		
	}
	
	
	cout << "\nNúmeros no intervalo [0-25]: " << intervalo1 << endl;
    cout << "Números no intervalo [26-50]: " << intervalo2 << endl;
    cout << "Números no intervalo [51-75]: " << intervalo3 << endl;
    cout << "Números no intervalo [76-100]: " << intervalo4 << endl;
	
	
	system("pause");
	return 0;
}