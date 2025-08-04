#include <iostream>
#include <iomanip> // Para definir a precisão decimal
using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");
	
    double valor;
    double somaValores = 0.0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;
    int quantidadeValores = 0;

   cout << "Digite valores (digite 0 para parar):" <<endl;
   cin >> valor;
         
    while (valor != 0) {
    
        quantidadeValores++;
        somaValores += valor;
        
        if (valor > 0) {
            quantidadePositivos++;
        } else {
            quantidadeNegativos++;
        }
        
    cin >> valor;
    }

        double media = somaValores / quantidadeValores;
        double percentualPositivos = (quantidadePositivos / static_cast<double>(quantidadeValores)) * 100;
        double percentualNegativos = (quantidadeNegativos / static_cast<double>(quantidadeValores)) * 100;
        
    
       cout << "Média dos valores: " << media << endl;
       cout << "\nQuantidade de valores positivos: " << quantidadePositivos <<endl;
       cout << "Quantidade de valores negativos: " << quantidadeNegativos <<endl;
       cout << "Percentual de valores positivos: " << percentualPositivos << "%" << endl;
       cout << "Percentual de valores negativos: " << percentualNegativos << "%" << endl;
   

    return 0;
}