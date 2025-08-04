#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char** argv) {
    const int pedreiro = 9;
    float salario[pedreiro];
    float menor[5] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};

    for (int i = 0; i < pedreiro; i++) {
        cout << "pedreiro " << i + 1 << " salario: ";
        cin >> salario[i];

        // Verifica se o salário é menor que o maior entre os menores
        if (salario[i] < menor[4]) {
            menor[4] = salario[i];

            // Ordena os menores salários
            for (int j = 0; j < 4; j++) {
                if (menor[j] > menor[j + 1]) {
                    swap(menor[j], menor[j + 1]);
                }
            }
        }
    }

    cout << "Os 5 pedreiros escolhidos por preferência de salário foram:\n" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "pedreiro " << i + 1 << " salario: " << menor[i] << endl;
    }

    return 0;
}