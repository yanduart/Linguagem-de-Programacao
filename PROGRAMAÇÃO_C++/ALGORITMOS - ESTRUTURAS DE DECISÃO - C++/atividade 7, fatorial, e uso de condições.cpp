#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");
	
	
	
	int numero;
    unsigned long long fatorial = 1; // Para armazenar resultados grandes

    // Solicita o n�mero ao usu�rio
    cout << "Digite um n�mero (ou 0 para sair): ";
    cin >> numero;

    // Usa switch para lidar com diferentes casos
    switch (numero) {
        case 0:
            cout << "Saindo do programa." << endl;
            break;
        
         default:
            if (numero < 0) {    // if e para condi��o, onde default faz parte!
                cout << "N�mero negativo. Fatorial n�o definido." << endl;
            break; }
        
			{	
			  for (int i = 1; i <= numero; i++) 
                    fatorial *= i;
                
                cout << "Fatorial de " << numero << " �: " << fatorial << endl;
                break;
			}
            
            	
    }
	system ("pause");
	return 0;
}