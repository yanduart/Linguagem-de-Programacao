#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
    // Declaração das variáveis
    string nome;
    double altura, imc;
    char sexo;

    // Entrada dos dados
    cout << "Digite o nome da pessoa: ";
    cin>>nome;
    cout << "Digite a altura da pessoa (em metros): ";
    cin >> altura;
    cout << "Digite o sexo da pessoa (M para masculino, F para feminino): ";
    cin >> sexo;

    // Cálculo do IMC
    if (sexo == 'M' || sexo == 'm') {
        imc = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        imc = (62.1 * altura) - 44.7;
    } else {
        cout << "Sexo inválido!" << endl;
       return 1;  // return 1 significa erro, return 0 significa sucesso 
    }

    // Exibição do resultado
    cout << "Nome: " << nome << endl;
    cout << "IMC calculado: " << imc << endl;

	system ("pause");
    return 0;
}