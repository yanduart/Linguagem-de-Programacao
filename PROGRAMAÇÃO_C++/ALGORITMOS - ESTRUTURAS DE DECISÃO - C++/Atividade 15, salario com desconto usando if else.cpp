#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	

	
	 double salario, desconto, salarioComDesconto;

    // Solicita o valor do sal�rio ao usu�rio
    cout << "Digite o valor do seu sal�rio: R$ ";
    cin >> salario;

		
	
    // Verifica se o sal�rio � superior a R$ 1.039,00 e calcula o desconto
    if (salario > 1039.00) {
        desconto = 0.10;  // 10% de desconto
    } else {
        desconto = 0.05;  // 5% de desconto
    }

   
	// Calcula o sal�rio com desconto
    salarioComDesconto = salario - (salario * desconto);

    // Exibe o valor do sal�rio com desconto
    cout << "Sal�rio com desconto: R$ " << salarioComDesconto << endl;

	system ("pause");
	return 0;
}