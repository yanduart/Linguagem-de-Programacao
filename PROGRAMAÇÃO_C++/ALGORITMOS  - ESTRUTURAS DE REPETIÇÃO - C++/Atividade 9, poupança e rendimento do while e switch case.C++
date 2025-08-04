#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");

    float valor = 0, result1 = 0, result2 = 0;
    int opcao1 = 0, opcao2 = 0;

    do {
    	
    	    cout << "Informe um valor em dinheiro: " << endl;
    cin >> valor;

    	
        cout << "Escolha uma op��o de poupan�a: " << endl;
        cout << "1. Poupan�a rende 0.3% ao m�s" << endl;
        cout << "2. Tesouro direto rende 1.2% ao m�s" << endl;
        cout << "3. A��es rendem 0.8% ao m�s" << endl;
        cout << "4. CDB rende 0.91% ao m�s" << endl;
        cout << "5. Taxa SELIC rende 1.18% ao m�s" << endl;
        cin >> opcao1;

        switch (opcao1) {
            case 1:
                result1 = valor * 0.003;  // 0.3% � 0.003
                break;
            case 2:
                result1 = valor * 0.012;  // 1.2% � 0.012
                break;
            case 3:
                result1 = valor * 0.008;  // 0.8% � 0.008
                break;
            case 4:
                result1 = valor * 0.0091; // 0.91% � 0.0091
                break;
            case 5:
                result1 = valor * 0.0118; // 1.18% � 0.0118
                break;
            default:
                cout << "Op��o inv�lida!" << endl;
                result1 = 0; // Nenhum rendimento se inv�lido
        }

        result2 += result1; // Acumula os rendimentos
        cout << "O rendimento mensal �: " << result1 << endl;
        
    

        cout << "Digite 1 para continuar ou 2 para sair" << endl;
        cin >> opcao2;
        
        

    } while (opcao2 == 1);

    cout << "O rendimento total acumulado �: " << result2 << endl;

    return 0;
}