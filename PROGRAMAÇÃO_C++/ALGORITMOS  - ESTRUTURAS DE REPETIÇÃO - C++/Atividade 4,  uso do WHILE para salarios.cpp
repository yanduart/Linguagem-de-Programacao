#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	
	float salario = 0;
	int quantidade_salario1 = 0, quantidade_salario2 = 0;
	
	
	
	cout<<"digite os valores do salário das pessoas: "<<endl;
	
	
	while (true){
		
		cin>>salario;
		
		if(salario == 0){
			break;
		}
		
		if (salario <= 540.00) {
			quantidade_salario1++;
		}
		
		if (salario > 5000.00) {
			quantidade_salario2++;
		}
			
		
		

	}
	
	
	cout<<"\nnumero de pessoas com salario menor ou igual a 540.00 é: "<<quantidade_salario1<<endl;
	cout<<"numero de pessoas com salario maior que 5.000.00 é: "<<quantidade_salario2<<endl;
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}