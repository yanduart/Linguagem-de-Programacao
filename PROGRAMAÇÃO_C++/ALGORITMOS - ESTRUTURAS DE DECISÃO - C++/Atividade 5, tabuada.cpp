#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

    int numero;
	
		
    // Solicita um número ao usuário
    cout << "Digite um número: ";
    cin >> numero;

    // Imprime a tabuada de 0 a 10
    cout << "Tabuada de " << numero << ":" <<endl;
    for (int i = 0; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;	
		}
		
	
	system ("pause");
	return 0;
}