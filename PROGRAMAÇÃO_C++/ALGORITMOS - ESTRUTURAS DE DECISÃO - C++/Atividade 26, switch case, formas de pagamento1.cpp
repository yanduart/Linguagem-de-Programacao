#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	

    
     float produto, resultado;
     int N;
	
	 
	cout<<"informe o valor do produto: R$"<<endl;
	cin>>produto;
	
	cout<< "ESCOLHA UMA FORMA DE PAGAMENTO: "<<endl;
	cout<< "\n1. À vista em dinheiro ou cheque, recebe 10% de desconto."<<endl;
	cout<< "2. À vista no cartão de crédito, recebe 15% de desconto."<<endl;
	cout<< "3. Em duas vezes, preço normal de etiqueta sem juros."<<endl;
	cout<< "4. Em duas vezes, preço normal de etiqueta mais juros de 10%."<<endl;
	cout<<"\ndigite o numero para efetuar o pagamento..."<<endl;
	cin>>N;
	
	switch(N){
		case 1:
			resultado = produto - (produto * 0.10);
			cout<<"À vista em dinheiro ou cheque: "<<resultado<<"R$"<<endl;
			break;
		case 2:
			resultado = produto - (produto * 0.15);
			cout<<" À vista no cartão de crédito: "<<resultado<<"R$"<<endl;
			break;
		case 3:
			resultado = produto / 2;
			cout<<"Em duas vezes, sem juros: "<<resultado<<"R$"<<endl;
			break;	
		case 4:
			resultado = produto / 2 - (produto * 0.10);
			cout<<"Em duas vezes, com juros: "<<resultado<<"R$"<<endl;
			break;
		default:
			cout<<"ERRO!!"<<endl;
			return 1;
	}
	   
			
	system ("pause");
	return 0;
}