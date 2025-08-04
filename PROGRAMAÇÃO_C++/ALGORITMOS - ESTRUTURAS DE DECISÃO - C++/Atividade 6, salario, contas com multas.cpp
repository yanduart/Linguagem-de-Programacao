#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");
	
	
	//const: Modificador que indica que o valor da variável não pode ser alterado.
    //double: Tipo de dado que representa números de ponto flutuante com precisão dupla.
    //multa: Nome da constante.
    //0.02: Valor atribuído à constante.
	
	double salario, conta1, conta2, salario_restante;
    const double multa = 1.02; // Multa de 2%

    // Recebe o valor do salário
    cout << "Digite o valor do salário: ";
    cin >> salario;

    // Recebe os valores das duas contas
    cout << "Digite o valor da primeira conta: ";
    cin >> conta1;
    cout << "Digite o valor da segunda conta: ";
    cin >> conta2;

    // Calcula o valor das contas com a multa
    conta1 = conta1 * multa;
    conta2 = conta2 * multa;

    // Calcula o valor restante do salário após pagar as contas
     salario_restante = salario - (conta1 + conta2);

    // Exibe os resultados
    cout << "\nO valor da primeira conta com multa é: R$ " << conta1 << endl;
    cout << "O valor da segunda conta com multa é: R$ " << conta2 << endl;
    cout << "O valor restante do salário após o pagamento das contas é: R$ " << salario_restante << endl;

	
	system ("pause");
	return 0;
}