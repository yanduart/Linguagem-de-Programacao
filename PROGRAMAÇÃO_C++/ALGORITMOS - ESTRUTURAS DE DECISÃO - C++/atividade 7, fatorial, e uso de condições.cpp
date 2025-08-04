#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");
	
	
	
	int numero;
    unsigned long long fatorial = 1; // Para armazenar resultados grandes

    // Solicita o número ao usuário
    cout << "Digite um número (ou 0 para sair): ";
    cin >> numero;

    // Usa switch para lidar com diferentes casos
    switch (numero) {
        case 0:
            cout << "Saindo do programa." << endl;
            break;
        
         default:
            if (numero < 0) {    // if e para condição, onde default faz parte!
                cout << "Número negativo. Fatorial não definido." << endl;
            break; }
        
			{	
			  for (int i = 1; i <= numero; i++) 
                    fatorial *= i;
                
                cout << "Fatorial de " << numero << " é: " << fatorial << endl;
                break;
			}
            
            	
    }
	system ("pause");
	return 0;
}