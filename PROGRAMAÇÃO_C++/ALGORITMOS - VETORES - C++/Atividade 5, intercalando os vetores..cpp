#include <iostream>
using namespace std;

int main() {
    double num1[5], num2[5], resul[10];
    
    // Leitura dos valores dos vetores
    cout << "Digite os valores do primeiro vetor:\n";
    for (int i = 0; i < 5; i++) {
        cin >> num1[i];
    }

    cout << "Digite os valores do segundo vetor:\n";
    for (int i = 0; i < 5; i++) {
        cin >> num2[i];
    }

    // Intercalando os vetores
    for (int i = 0, j = 0; i < 5; i++) {
        resul[j++] = num1[i];
        resul[j++] = num2[i];
    }

    // Exibindo o vetor resultante
    cout << "\nVetor resultante:\n";
    for (int i = 0; i < 10; i++) {
        cout << resul[i] << "\t";
    }

    return 0;
}