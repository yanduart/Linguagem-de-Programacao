#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");
	
	
	//const: Modificador que indica que o valor da vari�vel n�o pode ser alterado.
    //double: Tipo de dado que representa n�meros de ponto flutuante com precis�o dupla.
    //multa: Nome da constante.
    //0.02: Valor atribu�do � constante.
	
	double salario, conta1, conta2, salario_restante;
    const double multa = 1.02; // Multa de 2%

    // Recebe o valor do sal�rio
    cout << "Digite o valor do sal�rio: ";
    cin >> salario;

    // Recebe os valores das duas contas
    cout << "Digite o valor da primeira conta: ";
    cin >> conta1;
    cout << "Digite o valor da segunda conta: ";
    cin >> conta2;

    // Calcula o valor das contas com a multa
    conta1 = conta1 * multa;
    conta2 = conta2 * multa;

    // Calcula o valor restante do sal�rio ap�s pagar as contas
     salario_restante = salario - (conta1 + conta2);

    // Exibe os resultados
    cout << "\nO valor da primeira conta com multa �: R$ " << conta1 << endl;
    cout << "O valor da segunda conta com multa �: R$ " << conta2 << endl;
    cout << "O valor restante do sal�rio ap�s o pagamento das contas �: R$ " << salario_restante << endl;

	
	system ("pause");
	return 0;
}