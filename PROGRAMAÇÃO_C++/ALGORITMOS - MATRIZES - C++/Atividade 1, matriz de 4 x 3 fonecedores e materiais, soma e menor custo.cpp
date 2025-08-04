#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char** argv)
{
	
    int totalfor = 4;
	int totalmate = 3;
	double customate[4][3];
	float soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
	float menor = INT_MAX;
	int fornecedorID = 0;
	
	cout<<"os materiais sao (areia, tijolo e cimento)!!\n"<<endl;
	
	for(int i = 0; i < totalfor; i++){
		for(int j = 0; j < totalmate; j++){
			cout<<"informe o valor do material: " << j + 1<<" do fornecedor: "
			<< i + 1<<endl;
			cin>>customate[i][j];
			
			if(i == 0){
				soma1 += customate[i][j];
			}
			
			if(i == 1){
				soma2 += customate[i][j];
			}
			
			if(i == 2){
				soma3 += customate[i][j];
			}
			
			
			if(i == 3){
				soma4 += customate[i][j];
			}
		}
	}
	
	  if (soma1 < menor){
	  	  menor = soma1;
		  fornecedorID = 1;  	
		  }
	
		 if (soma2 < menor){
	  	  menor = soma2;
		  fornecedorID = 2;  	
		  }
		  
		if  (soma3 < menor){
	  	  menor = soma3;
		  fornecedorID = 3;  	
		  }

		if  (soma4 < menor){
	  	  menor = soma4;
		  fornecedorID = 4;  	
		  }
		  
	for(int i = 0; i < totalfor; i++){
		cout << "Fornecedor " << i + 1 << ": ";
		for(int j = 0; j < totalmate; j++){
			
			cout<<"\t"<<customate[i][j];
		}	
		cout<<endl;
	}
	
	
	
	cout<<"\na soma dos valores do fornecedor 1 e: "<<soma1<<endl;
	cout<<"a soma dos valores do fornecedor 2 e: "<<soma2<<endl;
	cout<<"a soma dos valores do fornecedor 3 e: "<<soma3<<endl;
	cout<<"a soma dos valores do fornecedor 4 e: "<<soma4<<endl;
	
	cout<<"\no fornecedor com menor custo por materiais e o "<<fornecedorID<<endl;
	
	
	
	
	return 0;
}