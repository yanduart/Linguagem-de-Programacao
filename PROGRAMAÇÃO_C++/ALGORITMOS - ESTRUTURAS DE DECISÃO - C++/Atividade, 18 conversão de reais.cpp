#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
setlocale(LC_ALL,"portuguese");

    float reais, convertido;
    int opcao;

    // Taxas de convers�o
    float dolar = 5.23;
    float euro = 5.70;
    float libra = 6.45;

    // Entrada do valor em Reais
    cout << "Informe a quantia em Reais (R$): ";
    cin >> reais;

    // Seleciona a moeda de destino
    cout << "Selecione a moeda de destino: \n";
    cout << "1. D�lar\n";
    cout << "2. Euro\n";
    cout << "3. Libra\n";
    cout << "Op��o: ";
    cin >> opcao;

    // Convers�o de acordo com a op��o escolhida
    switch (opcao) {
        case 1:
            convertido = reais / dolar;
            cout << "Valor convertido: $" << convertido << " D�lares" << endl;
            break;
        case 2:
            convertido = reais / euro;
            cout << "Valor convertido: �" << convertido << " Euros" << endl;
            break;
        case 3:
            convertido = reais / libra;
            cout << "Valor convertido: �" << convertido << " Libras" << endl;
            break;
        default:
            cout << "Op��o inv�lida!" << endl;
    }
    
    system ("pause");
    return 0;
}
