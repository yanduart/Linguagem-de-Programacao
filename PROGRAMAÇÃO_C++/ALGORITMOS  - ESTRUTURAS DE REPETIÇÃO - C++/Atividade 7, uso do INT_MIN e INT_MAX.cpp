#include <iostream>
#include <stdlib.h>
#include <climits>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL,"portuguese");	
	
	
	float altura = 0, maior = INT_MIN, menor = INT_MAX;
	
	
	
	cout<<"digite a altura da pessoa 1: "<<endl;
	cin>>altura;
	
	
	for (int i = 2; i < 15; i++){
	
	cout<<"digite a altura da pessoa "<<i<<": "<<endl;
    cin>>altura;
	
	
		if(altura > maior){
			maior = altura;	
			}
			
        if(altura < menor){
			menor = altura;
		}
	}
	
	
	cout<<"a menor altura é: "<<menor<<endl;
    cout<<"a maior altura é: "<<maior<<endl;
	
	
	
	
	system("pause");
	return 0;
}