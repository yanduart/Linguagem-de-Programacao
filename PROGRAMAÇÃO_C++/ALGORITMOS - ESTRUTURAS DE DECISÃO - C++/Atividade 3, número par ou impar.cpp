#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

	int numero;
	
	cout<<"digite um número:"<<endl;
	cin>>numero;
	
	
	// Verificação se o número é par ou ímpar usando switch
	// % calcula o resto da divisão por 2
    switch (numero % 2) {
        case 0:
            cout << "O número " << numero << " é par." << endl;
            break;
        case 1:
            cout << "O número " << numero << " é ímpar." << endl;
            break;
    }
	
	
	system("pause");
	return 0;
}