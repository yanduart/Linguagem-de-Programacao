#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char** argv)
{
	
	
	int estoque[4][3], armazem = 0, armazem1 = 0, total = 0, quant = 0;
	int max = INT_MIN, menor = INT_MAX;
	
	cout<<"informe quantos podutos tem cada estoque no armazem: "<<endl;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			cout<<"armazem "<<i+1<<" estoque "<<j+1<<" produtos: "<<endl;
			cin>>estoque[i][j];
			
			if(j == 1 && estoque[i][j] > max){
				max = estoque[i][j];
			armazem = i + 1;	
			}
			
			if(j == 0 && estoque[i][j] < menor)
				menor = estoque[i][j];
			armazem1 = i + 1;
			
			total += estoque[i][j];	
		}	
	}
	
	quant = 12/4;
	
	cout<<"a matriz do armazem fica: "<<endl;
	
	
	for(int i = 0; i < 4; i++){
		cout<<"armazem "<<i+1<<":";
		for(int j = 0; j < 3; j++){
			cout<<"\t"<<"produto "<<j + 1 <<": "<<estoque[i][j];
		}
		cout<<endl;
	}
	  
    cout<<"a quantidade de produtos nos armazem sao: "<<total<<endl;
	cout<<"a quantidade de itens armazenados em cada armazem e: "<<quant<<endl;
	cout<<"o armazem com maior estoque de produto 2 e o: "<<armazem<<" com: "<<max<<" produtos!!"<<endl; 
    cout<<"o armazem com menor estoque de produto 1 e o: "<<armazem1<<" com: "<<menor<<" produtos!!"<<endl; 
	
	
	
	
	
	return 0;
}