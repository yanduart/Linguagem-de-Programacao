#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

// Declarando vari�veis para os �ngulos
    double angulo1, angulo2, angulo3;

    // Recebendo os valores dos dois �ngulos
    cout << "Digite a medida do primeiro �ngulo: ";
    cin >> angulo1;

    cout << "Digite a medida do segundo �ngulo: ";
    cin >> angulo2;

    // Calculando o terceiro �ngulo
    angulo3 = 180.0 - (angulo1 + angulo2);

    // Mostrando o resultado
    cout << "A medida do terceiro �ngulo �: " << angulo3 << " graus." << endl;
	
   system("pause");
   return 0;
}

