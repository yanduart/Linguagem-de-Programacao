#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	float valor_salario = 0, reajuste = 0, novo_salario = 0;
	int meses = 0;
	
	
	cout<<"digite o salario do funcion�rio: R$"<<endl;
	cin>>valor_salario;
	
	cout<<"digite o numero de meses que o funcion�rio trabalha na empresa: "<<endl;
	cin>>meses;
	
	if (meses >= 12){
		reajuste = valor_salario * 0.10;
		novo_salario = valor_salario + reajuste; 
		
	} else {
		reajuste = valor_salario * 0.05;
		novo_salario = valor_salario + reajuste;
	}
	
	
	
	cout<<"\no reajuste do salario �: "<<reajuste<<"R$"<<endl;
	cout<<"o novo sal�rio �: "<<novo_salario<<"R$"<<endl;
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}