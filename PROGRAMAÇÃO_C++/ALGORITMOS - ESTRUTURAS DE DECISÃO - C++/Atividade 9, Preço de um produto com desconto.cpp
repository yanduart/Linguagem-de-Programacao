#include <iostream>
#include <stdlib.h>
using namespace std;
int main()


{
setlocale(LC_ALL,"portuguese");	
	
	
	 // Definindo a vari�vel para armazenar o pre�o do produto
    double precoOriginal, precoComDesconto;

    // Solicita ao usu�rio o pre�o original do produto
    cout << "Digite o pre�o do produto: R$ ";
    cin >> precoOriginal;

    // Calcula o pre�o com o desconto de 10%
    precoComDesconto = precoOriginal - (precoOriginal * 0.10);
	
    // Mostra o novo pre�o com o desconto aplicado
    cout << "O pre�o com desconto de 10% �: R$ " << precoComDesconto << endl;
	
	system ("pause");
	return 0;
}