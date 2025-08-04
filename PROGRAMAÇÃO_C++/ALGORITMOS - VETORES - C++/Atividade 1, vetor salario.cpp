#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
	
	int salario [3];
	cout<<"\n vetor salario";
	
	for(int i = 0; i < 3; i++){
		
		cout<<"\n informe o salario: ";
		cin>>salario[i];
		system ("cls");
	}
	
	cout<<"\n salario informados: ";
	for(int i=0; i<3; i++){
		cout<<salario[i]<<",";
			
		}
	
	
	
	
	
	
	
	
	
	return 0;
}