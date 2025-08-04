#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");

	
	double num[20], result = 0;
	int quantnega = 0;
	
	for(int i = 0; i < 20; i++){
		
		cout<<"informe um numero: "<<endl;
		cin>>num[i];
		
		
		if (num[i] > 0){
			result += num[i];
		}
		
		if(num[i] < 0){
			quantnega++;
		}
		
		
			
			
	}
	
	
	
	cout<<" a soma dos numeros é: "<<result<<endl;
	cout<<" a quantidade de numero negativos são: "<<quantnega<<endl;
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}