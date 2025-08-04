#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
setlocale(LC_ALL,"portuguese");

    float reais, convertido;
    int opcao;

    // Taxas de conversão
    float dolar = 5.23;
    float euro = 5.70;
    float libra = 6.45;

    // Entrada do valor em Reais
    cout << "Informe a quantia em Reais (R$): ";
    cin >> reais;

    // Seleciona a moeda de destino
    cout << "Selecione a moeda de destino: \n";
    cout << "1. Dólar\n";
    cout << "2. Euro\n";
    cout << "3. Libra\n";
    cout << "Opção: ";
    cin >> opcao;

    // Conversão de acordo com a opção escolhida
    switch (opcao) {
        case 1:
            convertido = reais / dolar;
            cout << "Valor convertido: $" << convertido << " Dólares" << endl;
            break;
        case 2:
            convertido = reais / euro;
            cout << "Valor convertido: €" << convertido << " Euros" << endl;
            break;
        case 3:
            convertido = reais / libra;
            cout << "Valor convertido: £" << convertido << " Libras" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
    
    system ("pause");
    return 0;
}
