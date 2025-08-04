#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int bebes = 5;
	int gestao[5];
	float peso[5];
	float media = 0.0, soma = 0;
	int contador1 = 0, contador2 = 0;
	
	for(int i = 0; i < bebes; i++){
		cout<<"informe a gestao de nascimento do bebe: "<<i + 1<<endl;
        cin>>gestao[i];
	    cout<<"informe o peso do bebe: "<<endl;
	    cin>>peso[i];
	
	 if(gestao[i] < 37 && peso[i] < 2.500){
		 contador1++;	  
	 }
	 if(peso[i] > 2.500){
		 contador2++;
	 }
	 soma += peso[i];
	 
	 
	}
	
	media = soma/5;
	
	
	for(int i = 0; i < bebes; i++){
		cout<<"bebe "<<i+1<<" gestao: "<<gestao[i]<<" e"<<" peso: "<<peso[i]<<endl;
	}
	
	cout<<"\nbebês prematuros (antes de 37 semanas) nascidos com baixo peso (abaixo de 2.500 gr.) sao: "<<contador1<<endl;
	cout<<"bebês prematuros nascidos com peso bom (a partir de 2.500 gr.) sao: "<<contador2<<endl;
	cout<<"a media do pesos dos beberes sao: "<<media<<endl;

	
	
	
	
	
	
	return 0;
}