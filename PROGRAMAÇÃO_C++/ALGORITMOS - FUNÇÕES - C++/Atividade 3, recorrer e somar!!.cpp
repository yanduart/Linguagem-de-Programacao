#include <iostream>
using namespace std;

     int FCSomaRecursiva(int valor = 0, int soma = 0){
		 
		 
		 
       if(valor !=0)
	   {
	        soma += valor;
		   return FCSomaRecursiva(valor-1, soma); // recorrer!!
	   }
	   else
	   {
		   return soma;
	   }		  	
	 }
	 
int main(){
	
	int valor = 0, soma = 0;
	
	cout<<"informe um valor: "<<endl;
	cin>>valor;
	cout<<"a soma dos numeros entre "<<valor<<" e 0 e: "<<FCSomaRecursiva(valor, soma)<<endl;

	
	return 0;
}