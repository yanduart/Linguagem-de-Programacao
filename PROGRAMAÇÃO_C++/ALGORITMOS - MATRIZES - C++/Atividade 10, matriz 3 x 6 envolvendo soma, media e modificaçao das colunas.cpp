#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int matriz[3][6];
	int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0;
	int result1 = 0, result2 = 0,  result3 = 0,  result4 = 0,  result5 = 0,  result6 = 0;
	float media = 0.0, media1 = 0.0;
	int total = 0;
	
	cout<<"informe os valores da matriz: "<<endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			cout<<"linha "<<i+1<<" coluna "<<j+1<<" digite um numero: "<<endl;
			cin>>matriz[i][j];
			
		     	if(j == 0){
				soma1 += matriz[i][j];
			}
			
				if(j == 1){
				soma2 += matriz[i][j];
			}
				
				if(j == 2){
				soma3 += matriz[i][j];
			}
				
				
				if(j == 3){
				soma4 += matriz[i][j];
			}
				
				if(j == 4){
				soma5 += matriz[i][j];
			}
			
				if(j == 5){
				soma6 += matriz[i][j];
			}
			
			
				
		}
	}
		
					
		cout<<"a matriz fica exatamente: "<<endl;	

	for(int i = 0; i < 3; i++){
		cout<<"linha "<<i+1<<":";
		for(int j = 0; j < 6; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	
			
		cout<<"\nmostrando apenas a soma das colunas que e impar: "<<endl;
		
                if(soma1 % 2 == 1){
				result1 = soma1;
				cout<<"soma da coluna 1: "<<result1<<endl;
			}
			
				if(soma2 % 2 == 1){
				result2 = soma2;
				cout<<"soma da coluna 2: "<<result2<<endl;
			}
				
				if(soma3 % 2 == 1){
				result3 = soma3;
				cout<<"soma da coluna 3: "<<result3<<endl;
			}
				
				
				if(soma4 % 2 == 1){
				result4 = soma4;
				cout<<"soma da coluna 4: "<<result4<<endl;
			}
				
				if(soma5 % 2 == 1){
				result5 = soma5;
				cout<<"soma da coluna 5: "<<result5<<endl;
			}
			
				if(soma6 % 2 == 1){
				result6 = soma6;
				cout<<"soma da coluna 6: "<<result6<<endl;
			}	
			
	cout<<"\nmostrando a media: "<<endl;	
	media = soma2/3.0;
	media1 = soma4/3.0;			
	
	cout<<"a media da soma da coluna 2 e: "<<media<<endl;
	cout<<"a media da soma da coluna 4 e: "<<media1<<endl;
	
	total = soma1 + soma2;
	
	
	
	cout<<"\na matriz modificada fica: "<<endl;
	
		for(int i = 0; i < 3; i++){
		cout<<"linha "<<i+1<<":";
		for(int j = 0; j < 6; j++){
			
			if(j == 5){
			matriz[i][5] = matriz[i][0] + matriz[i][1];
			}
			
			
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
			
			
			
			
			
			
			
			
			
		
            
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
	
	
	return 0;
}

