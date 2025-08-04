#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");

// Declarando variáveis para os ângulos
    double angulo1, angulo2, angulo3;

    // Recebendo os valores dos dois ângulos
    cout << "Digite a medida do primeiro ângulo: ";
    cin >> angulo1;

    cout << "Digite a medida do segundo ângulo: ";
    cin >> angulo2;

    // Calculando o terceiro ângulo
    angulo3 = 180.0 - (angulo1 + angulo2);

    // Mostrando o resultado
    cout << "A medida do terceiro ângulo é: " << angulo3 << " graus." << endl;
	
   system("pause");
   return 0;
}

