#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int numero1, numero2, opcao, resultado1;
    double resultado2, numero3;
	
	 cout<<"Menu de opções: "<<endl;
     
     cout<< "\n1.Somar dois números."<<endl;
     cout<< "2.Multiplicar dois números."<<endl;
     cout<< "3.Raiz quadrada de um número."<<endl;

     cout<< "\nDigite a opção desejada: "<<endl;
     cin>>opcao;

	
	
	
	
	 switch (opcao){
	 	case 1:
	 		cout<<"digite o primeiro número: "<<endl;
	 		cin>>numero1;
	 		cout<<"digite o segundo número: "<<endl;
	 		cin>>numero2;
		    resultado1 = numero1 + numero2;
		    cout<<"A soma é: "<<resultado1<<endl;
		    break;
        case 2:
        	cout<<"digite o primeiro número: "<<endl;
	 		cin>>numero1;
	 		cout<<"digite o segundo número: "<<endl;
	 		cin>>numero2;
		    resultado1 = numero1 * numero2;
		    cout<<"A multiplicação é: "<<resultado1<<endl;
		    break;
        case 3:
		 cout<<"informe um numero: "<<endl;
		 cin>>numero3;
		 resultado2 = sqrt(numero3);
		 cout<<"A raiz quadrada é: "<<resultado2<<endl;
		 break;
		 default:
		 	cout<<"\nERROR!!"<<endl;
		 	return 1;	 	 
	 }
	
	system("pause");
	return 0;
}