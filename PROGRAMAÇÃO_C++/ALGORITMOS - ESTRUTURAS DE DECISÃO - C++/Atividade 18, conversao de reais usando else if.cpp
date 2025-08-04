#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main ()
{
setlocale(LC_ALL,"portuguese");	
	
	  float reais, conversao;
	
	  float dolar = 5.23;
      float euro = 5.70;
      float libra = 6.45;
      string opcao;
	 
	
	cout<<"informe uma valor em reais: R$"<<endl;
	cin>>reais;
	
	cout<<"escolha uma opação de conversão de valores: "<<endl;
	cout<<"Euro. "<<endl;
	cout<<"Dolar. "<<endl;
	cout<<"Libra. "<<endl;
	cin>>opcao;
	
	
	if (opcao == "euro" || opcao == "Euro"){
		conversao = reais / euro;		
	} else if (opcao == "dolar" || opcao == "Dolar"){
		conversao = reais / dolar;
	} else if (opcao == "libra" || opcao == "Libra"){
		conversao = reais / libra;
	} else {
		cout<<"incorreto"<<endl;
		return 1;
	}
	
		cout<<"o valor convertido é: "<<conversao<<endl;
	
	
	
	system ("pause");
    return 0;
}