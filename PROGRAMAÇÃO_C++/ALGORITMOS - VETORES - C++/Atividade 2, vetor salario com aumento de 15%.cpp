#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");
	
	double salario[10];
	
	
	for (int i = 0; i <= 10; i++){
		cout<<"informe o salario: "<<endl;
		cin>>salario[i];
		system ("cls");
	}
	
	
		for (int i = 0; i <= 10; i++){
		cout<<"salario multiplicado por 15%: "<<endl;
		salario[i] = salario[i] + salario[i] * 0.15;
		}
	
        cout<<"salario total dos funcionarios reapectivamente são: "<<endl;
	
		for (int i = 0; i <= 10; i++){
		
		cout<<salario[i]<<endl;
		
		}
	
	
	
	return 0;
}