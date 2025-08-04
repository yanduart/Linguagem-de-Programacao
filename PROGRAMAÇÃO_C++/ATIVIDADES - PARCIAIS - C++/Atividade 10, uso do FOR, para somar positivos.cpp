#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	int soma = 0, par = 0, quantiposition = 0;
	
	
	for(int i = 3; i < 12; i++) {
		cout<<"digite o numero do intervalo: "<<i<<endl;
		cin>>i;
		
		if (i % 2 == 0){
			soma += i;
		}
				
				
			if (i % 2 == 0) {
			quantiposition++;
			}
			
	}	
					
			
	cout<<"\nos numeros pares s�o 4, 6, 8, 10!!"<<endl;
	cout<<"a soma �: "<<soma<<endl;
	cout<<"quantidade de numeros positivos: "<<quantiposition<<endl;
	
	
	system("pause");
	return 0;
}