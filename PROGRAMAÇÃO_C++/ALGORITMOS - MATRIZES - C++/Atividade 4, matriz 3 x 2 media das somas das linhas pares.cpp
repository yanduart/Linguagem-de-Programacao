#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
		
	int numero[3][2];
	int soma1 = 0, soma2 = 0, soma3 = 0;
	int total = 0;
	int contador = 0;
	float media = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
        cout<<"informe o numero da linha: "<< i + 1 <<" sendo da coluna: "<< j + 1<<endl;
	    cin>>numero[i][j];
	    
	    if(i == 0){
			soma1 += numero[i][j];
		}
	    
	    if(i == 1){
			soma2 += numero[i][j];
		}
	    
	    if(i == 2){
			soma3 += numero[i][j];
		}
	    
	   
	 	 }
	 
	 }
	
	  if(soma1 % 2 == 0){
			total += soma1;
			contador++;
		}
	    
	    if(soma2 % 2 == 0){
			total += soma2;
			contador++;
	   }	
	   
	   if(soma3 % 2 == 0){
			total += soma3;  
			contador++;	
	 }
	 
	 media = total/contador;
	 
	 
	for(int i = 0; i < 3; i++){
		cout<<"linha"<<i + 1<<":";
		for(int j = 0; j < 2; j++){
		cout<<"\t"<<numero[i][j];	
		}
		cout<<endl;	
	}
	
	
	cout<<"a media dos numeros apenas nas linhas somadas que dao pares e: "<<media<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}