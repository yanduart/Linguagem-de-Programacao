#include <iostream>
#include <stdlib.h>
using namespace std;
int main()


{
setlocale(LC_ALL,"portuguese");	
	
	
	 // Definindo a variável para armazenar o preço do produto
    double precoOriginal, precoComDesconto;

    // Solicita ao usuário o preço original do produto
    cout << "Digite o preço do produto: R$ ";
    cin >> precoOriginal;

    // Calcula o preço com o desconto de 10%
    precoComDesconto = precoOriginal - (precoOriginal * 0.10);
	
    // Mostra o novo preço com o desconto aplicado
    cout << "O preço com desconto de 10% é: R$ " << precoComDesconto << endl;
	
	system ("pause");
	return 0;
}