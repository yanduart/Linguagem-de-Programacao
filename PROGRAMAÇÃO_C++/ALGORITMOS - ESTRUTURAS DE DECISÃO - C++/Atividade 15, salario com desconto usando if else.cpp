#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	

	
	 double salario, desconto, salarioComDesconto;

    // Solicita o valor do salário ao usuário
    cout << "Digite o valor do seu salário: R$ ";
    cin >> salario;

		
	
    // Verifica se o salário é superior a R$ 1.039,00 e calcula o desconto
    if (salario > 1039.00) {
        desconto = 0.10;  // 10% de desconto
    } else {
        desconto = 0.05;  // 5% de desconto
    }

   
	// Calcula o salário com desconto
    salarioComDesconto = salario - (salario * desconto);

    // Exibe o valor do salário com desconto
    cout << "Salário com desconto: R$ " << salarioComDesconto << endl;

	system ("pause");
	return 0;
}