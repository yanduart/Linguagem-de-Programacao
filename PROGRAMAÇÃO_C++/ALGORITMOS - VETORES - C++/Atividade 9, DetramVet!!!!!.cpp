#include <iostream>
#include <climits>
using namespace std;
int main(){
	
	int menor = INT_MIN; int carteira = 0;
	int multas[5], ncarteira[5]; float valormulta[5] = {0};
	int valor = 0; float valor1 = 0.0, total = 0.0;
	
	cout<<"informe o numero de multas e o numero da carteira dos motoristas: "<<endl;
	
	for(int i = 0; i < 3; i++){
		cout<<"motorista "<<i+1<<":"<<endl;
		cout<<"multas: "<<endl;
		cin>>multas[i];
		cout<<"numero da certeira de motorista: "<<endl;
		cin>>ncarteira[i]; 
	}
	
		for(int i = 0; i < 3; i++){
		cout<<"motorista "<<i+1<<":"<<endl;
		valor = multas[i];
		for(int j = 0; j < valor; j++){
			cout<<"informe o valor da "<<j+1<<" multa: "<<endl;
			cin>>valor1;
			valormulta[i] += valor1;
		}
		
		}
		
		for (int t = 0; t < 3; t++){
			cout<<"a divida do motorista "<<t+1<<" e: "<<valormulta[t]<<endl;	
		}
		
		for(int y = 0; y < 3; y++){
			total += valormulta[y];
		}
		
		cout<<"o valor total das mutas e :"<<total<<endl;
		
		for(int i = 0; i<3; i++){
			if(multas[i] > menor){
				menor = multas[i];
				carteira = ncarteira[i];
			}
		}
		
		cout<<"o numero da carteira de motorista que obteve o maior numero de multas e: "<<carteira<<endl;
		return 0;
}