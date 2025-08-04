#include <iostream>
using namespace std;

     int FCSomaRecursiva(int valor = 0, int valor1 = 0, int soma = 0){
		 
		 int result = 0;
		
		 
       if(valor1 !=0)
	   {
	        result = valor * valor1;
	        soma += result;
		   return FCSomaRecursiva(valor, valor1 - 1, soma); // recorrer!!
	   }
	   else
	   {
		   return soma;
	   }		  	
	 }
	 
int main(){
	
	int valor = 0, valor1 = 0;
	
	cout<<"informe um valor: "<<endl;
	cin>>valor;
	cout<<"informe outro valor: "<<endl;
	cin>>valor1;
	FCSomaRecursiva(valor, valor1);
	cout<<"a soma da multiplicacao entre "<<valor<<" e "<<valor1<< " e: "<<FCSomaRecursiva(valor, valor1)<<endl;

	
	return 0;
}