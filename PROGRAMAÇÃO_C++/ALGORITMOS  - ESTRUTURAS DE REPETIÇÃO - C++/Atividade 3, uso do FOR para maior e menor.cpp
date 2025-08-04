#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL,"portuguese");
	
    float altura = 0, maiorAltura = 0, menorAltura = 0;

    // Loop para ler as 15 alturas
    for (int i = 1; i <= 15; i++) {
        cout << "Informe a altura da pessoa " << i << ": ";
        cin >> altura;

        // Na primeira iteração, inicializa a menor e a maior altura
        if (i == 1) {
            maiorAltura = altura;
            menorAltura = altura;
        }  
		
            // Atualiza a maior altura, se a altura atual for maior
            if (altura > maiorAltura) {
                maiorAltura = altura;
            }
            // Atualiza a menor altura, se a altura atual for menor
            if (altura < menorAltura) {
                menorAltura = altura;
            }
        
    }

    // Exibe a menor e a maior altura
    cout << "A menor altura do grupo é: " << menorAltura << " metros" << endl;
    cout << "A maior altura do grupo é: " << maiorAltura << " metros" << endl;

    return 0;
}