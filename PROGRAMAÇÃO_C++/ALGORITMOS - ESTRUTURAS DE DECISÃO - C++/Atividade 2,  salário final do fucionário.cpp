#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
setlocale(LC_ALL,"portuguese");


    // Declarando variáveis
    float salarioFixo, valorVendas, comissao, salarioFinal;
    
    // Recebendo o salário fixo
    cout << "Digite o salário fixo do funcionário: ";
    cin >> salarioFixo;
    
    // Recebendo o valor das vendas
    cout << "Digite o valor das vendas do funcionário: ";
    cin >> valorVendas;
    
    // Calculando a comissão (4% das vendas)
    comissao = valorVendas * 0.04;
    
    // Calculando o salário final
    salarioFinal = salarioFixo + comissao;
    
    // Mostrando os resultados
    cout << "Valor da comissão: R$ " << comissao << endl;
    cout << "Salário final: R$ " << salarioFinal << endl;
    
    system("pause");
    return 0;










	
}
