#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

	int numero;
	
	cout<<"digite um n�mero:"<<endl;
	cin>>numero;
	
	
	// Verifica��o se o n�mero � par ou �mpar usando switch
	// % calcula o resto da divis�o por 2
    switch (numero % 2) {
        case 0:
            cout << "O n�mero " << numero << " � par." << endl;
            break;
        case 1:
            cout << "O n�mero " << numero << " � �mpar." << endl;
            break;
    }
	
	
	system("pause");
	return 0;
}