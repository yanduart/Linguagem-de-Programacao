#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");


    // Declarando vari�veis
    float salarioFixo, valorVendas, comissao, salarioFinal;
    
    // Recebendo o sal�rio fixo
    cout << "Digite o sal�rio fixo do funcion�rio: ";
    cin >> salarioFixo;
    
    // Recebendo o valor das vendas
    cout << "Digite o valor das vendas do funcion�rio: ";
    cin >> valorVendas;
    
    // Calculando a comiss�o (4% das vendas)
    comissao = valorVendas * 0.04;
    
    // Calculando o sal�rio final
    salarioFinal = salarioFixo + comissao;
    
    // Mostrando os resultados
    cout << "Valor da comiss�o: R$ " << comissao << endl;
    cout << "Sal�rio final: R$ " << salarioFinal << endl;
    
    system("pause");
    return 0;










	
}
