#include <iostream>
using namespace std;


   int Fcnumero(int valor = 0){
   	
		 return valor; 
}
	   
   

int main(int argc, char** argv)
{
	
	
	int valor;
	
	cout<<"informe um numero: "<<endl;
	cin>>valor;
	
	if(Fcnumero(valor) % 2 == 0){
		cout<<"esse numero e par! "<<endl;
	}
	else {
		cout<<"esse numero e impar! "<<endl;
	}
	
	
	return 0;
}