#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int numero1, numero2, opcao, resultado1;
    double resultado2, numero3;
	
	 cout<<"Menu de op��es: "<<endl;
     
     cout<< "\n1.Somar dois n�meros."<<endl;
     cout<< "2.Multiplicar dois n�meros."<<endl;
     cout<< "3.Raiz quadrada de um n�mero."<<endl;

     cout<< "\nDigite a op��o desejada: "<<endl;
     cin>>opcao;

	
	
	
	
	 switch (opcao){
	 	case 1:
	 		cout<<"digite o primeiro n�mero: "<<endl;
	 		cin>>numero1;
	 		cout<<"digite o segundo n�mero: "<<endl;
	 		cin>>numero2;
		    resultado1 = numero1 + numero2;
		    cout<<"A soma �: "<<resultado1<<endl;
		    break;
        case 2:
        	cout<<"digite o primeiro n�mero: "<<endl;
	 		cin>>numero1;
	 		cout<<"digite o segundo n�mero: "<<endl;
	 		cin>>numero2;
		    resultado1 = numero1 * numero2;
		    cout<<"A multiplica��o �: "<<resultado1<<endl;
		    break;
        case 3:
		 cout<<"informe um numero: "<<endl;
		 cin>>numero3;
		 resultado2 = sqrt(numero3);
		 cout<<"A raiz quadrada �: "<<resultado2<<endl;
		 break;
		 default:
		 	cout<<"\nERROR!!"<<endl;
		 	return 1;	 	 
	 }
	
	system("pause");
	return 0;
}